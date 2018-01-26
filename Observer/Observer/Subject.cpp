#include "Subject.h"

void Subject::AddObserver(Observer * observer) {
	//배열에 추가한다.
	//observers[numObservers] = observer;
	//numObservers += 1;
	
	//앞쪽으로 추가
	observer->next = head;
	head = observer;
}

void Subject::RemoveObserver(Observer * observer) {
	//배열에 제거한다.
	/*numObservers -= 1;
	observers[numObservers] = nullptr;*/

	//연결 리스트 사용한 경우
	/*if (head == observer) {
		head = observer->next;
		observer->next = NULL;
		return;
	}

	Observer * current = head;
	while (current != NULL)
	{
		if (current->next == observer) {
			current->next = observer->next;
			observer->next = NULL;
			return;
		}
		current = current->next;
	}*/

	//포인터의 포인터 사용
	Observer ** current = &head;

	while (*current != NULL)
	{
		if (*current == observer) {
			*current = (*current)->next;
			observer->next = NULL;
			return;
		}
		current = &(*current)->next;
	}
}

void Subject::Notify(const Entity & entity, Event event) {
	/*for (int i = 0; i < numObservers; i++) {
		observers[i]->OnNotify(entity, event);
	}*/

	Observer * observer = head;
	while (observer != NULL)
	{
		observer->OnNotify(entity, event);
		observer = observer->next;
	}
}
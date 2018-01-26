#include "Subject.h"

void Subject::AddObserver(Observer * observer) {
	//�迭�� �߰��Ѵ�.
	//observers[numObservers] = observer;
	//numObservers += 1;
	
	//�������� �߰�
	observer->next = head;
	head = observer;
}

void Subject::RemoveObserver(Observer * observer) {
	//�迭�� �����Ѵ�.
	/*numObservers -= 1;
	observers[numObservers] = nullptr;*/

	//���� ����Ʈ ����� ���
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

	//�������� ������ ���
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
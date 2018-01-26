#include <stdio.h>
#include "Achievements.h"

void Achievements::OnNotify(const Entity& entity, Event event) {
	switch (event)
	{
	case EVENT_ENTITY_FELL:
		if (entity.IsOverKill()) {
			Unlock(ACHIEVEMENT_KILL_MONSER_10);
		}
		break;
		//�� ���� �ٸ� �̺�Ʈ ó���ϰ�...
	}
}

void Achievements::Unlock(Achievement achievement) {
	//���� ������ ��� �ִٸ� �������.
	if (heroIsOverKill == false) {
		printf("\r\n���� ����: 10���� ����.\r\n\r\n");
		heroIsOverKill = true;
	}
}
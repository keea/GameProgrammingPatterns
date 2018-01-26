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
		//그 외의 다른 이벤트 처리하고...
	}
}

void Achievements::Unlock(Achievement achievement) {
	//아직 업적이 잠겨 있다면 잠금해제.
	if (heroIsOverKill == false) {
		printf("\r\n업적 해제: 10마리 죽임.\r\n\r\n");
		heroIsOverKill = true;
	}
}
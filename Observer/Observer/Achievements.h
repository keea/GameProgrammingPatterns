#pragma once
#include "Observer.h"
#include "Achievement.h"
class Achievements : public Observer
{
private:
	void Unlock(Achievement achievement);
	bool heroIsOverKill = false;
public:
	virtual void OnNotify(const Entity& entity, Event event);
};


#pragma once
#include "Observer.h"

const int MAX_OBSERVERS = 10;

class Subject
{
private:
	Observer * observers[MAX_OBSERVERS];
	int numObservers = 0;
	Observer * head;
public:
	Subject() : head(NULL) {};
	void AddObserver(Observer * observer);
	void RemoveObserver(Observer * observer);
protected:
	void Notify(const Entity & entity, Event event);
};


#pragma once
class Entity
{
private:
	int killMonsterNum;
public:
	Entity();
	void Update();
	bool IsOverKill() const;
};


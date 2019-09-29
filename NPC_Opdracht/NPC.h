#pragma once
#include <string>
class NPC
{
public :
	std::string name;

public:
	NPC();
	virtual ~NPC();
	virtual void render() = 0;
};


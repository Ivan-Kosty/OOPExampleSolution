#pragma once
#include "Group.h"
//function class
class Manager
{
public:
	BankUsers* getBestUsers(Group group);
	BankUsers* getWorstUsers(Group group);

};


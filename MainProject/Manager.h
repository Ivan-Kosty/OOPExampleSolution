#pragma once
#include "BankUsers.h"
//function class
class Manager
{
public:
	BankUsers* getBestUsers(BankUsers* list, int count, int* count1);
	BankUsers* getWorstUsers(BankUsers* list, int count, int* count2);

};


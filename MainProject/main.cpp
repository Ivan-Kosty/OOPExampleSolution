#include <iostream>
#include "BankUsers.h"
using namespace std;

int main() {
	BankUsers us1("Alex", 15);
	
	cout << us1.toString() << endl;

	BankUsers* us = new BankUsers;
	return 0;
}
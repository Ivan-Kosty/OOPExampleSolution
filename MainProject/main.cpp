#include <iostream>
#include "BankUsers.h"
using namespace std;

int main() {
	BankUsers user1{};
	BankUsers user2("Alex", 16);
	BankUsers user3("Evgeniy", 15, 120, false);
	BankUsers user4(user3);

	cout << user1.toString() << endl;
	cout << user2.toString() << endl;
	cout << user3.toString() << endl;
	cout << user4.toString() << endl;

	return 0;
}
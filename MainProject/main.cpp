#include "BankSystem.h"

void edit(BankSystem user) {
	user.name = "Vladimir";
	user.age = 21;
	user.balance = 749;
	user.anycredit = false;
}
int main() {
	BankSystem* us1 = nullptr;
	us1 = new BankSystem;

	us1->name = "Vladislav";
	us1->age= 16;
	us1->balance = 80;
	us1->anycredit = false;

	BankSystem* us2 = us1;

	cout << "Before: " << endl;
	cout << us1->getString(*us1) << endl;

	us2->name = "Nazar";

	cout << "After: " << endl;
	cout << us1->getString(*us1) << endl;


	return 0;
}
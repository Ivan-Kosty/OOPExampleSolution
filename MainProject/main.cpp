#include "Student.h"
/*void show(BankBalance user) {
	cout << "Name: " << user.name << endl;
	cout << "Age: " << user.age << endl;
	cout << "Balance: " << user.balance << endl;
	cout << "Credit: " << (user.anycredit ? "yes" : "no") << endl << endl;
}
string show(BankSystem user) {
	string s = "Name: " + user.name;
	s += ", Age: : " + to_string(user.age);
	s += ", Balance: " + to_string(user.balance);
	s += ", Credits? "; 
	s += (user.anycredit ? "yes" : "no");
	return s;
}*/
void edit(BankSystem user) {
	user.name = "Vladimir";
	user.age = 21;
	user.balance = 749;
	user.anycredit = false;
}
int main() {
	BankSystem us1, us2, us3, t;
	us1.name = "Victor";
	us1.age = 25;
	us1.balance = 852.40;
	us1.anycredit = false;

	us2.name = "Kirill";
	us2.age = 18;
	us2.balance = 120;
	us2.anycredit = false;

	us3.name = "Evgeniy";
	us3.age = 15;
	us3.balance = 201;
	us3.anycredit = false;
	
	t = us1;
	

	//cout << us1.getString(us1) << endl;
	//cout << us2.getString(us2) << endl;
	//cout << us3.getString(us1) << endl;

	cout << "Before: " << endl;
	cout << us1.getString(us1) << endl;
	cout << t.getString(t) << endl;

	//edit(us1);
	us1.name = "Ivan";
	cout << "After: " << endl;
	cout << us1.getString(us1) << endl;
	cout << t.getString(t) << endl;


	//BankBalance t = us1.balance > us2.balance ? us1 : us2;

	//cout << "Richest user of bank: " << t.name << endl;
	
	
	return 0;
}
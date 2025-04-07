#include <iostream>
#include <string>
using namespace std;
class BankSystem{
public:
	string name;
	int age;
	double balance;
	bool anycredit;

	string getString(BankSystem user) {
		string s = "Name: " + name;
		s += ", Age: : " + to_string(age);
		s += ", Balance: " + to_string(balance);
		s += ", Credits? ";
		s += (anycredit ? "yes" : "no");
		return s;
	}
};
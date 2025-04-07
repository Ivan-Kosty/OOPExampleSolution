#include <iostream>
#include <string>
#include "main.h"
using namespace std;
class BankUsers{
public:
	string name;
	int age;
	double balance;
	bool anycredit;

	string getString() {
		string s = "Name: " + name;
		s += ", Age: : " + to_string(age);
		s += ", Balance: " + to_string(balance);
		s += ", Credits? ";
		s += (anycredit ? "yes" : "no");
		return s;
	}
};
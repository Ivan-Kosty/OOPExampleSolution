#include <iostream>
#include <string>
#include "main.h"
using namespace std;
class BankUsers {
public:
	string name;
	int age;
	double balance;
	bool anycredit;

	BankUsers() {
		cout << "Default-constructor..." << endl;
		name = "no name";
		age = 14;
		balance = 0;
		anycredit = false;
	}
	//constructor with arguments...
	BankUsers(string nm, int a) {
		cout << "constructor with arguments..." << endl;
		name = nm;
		age = a;
		balance = 0;
		anycredit = false;
	}
	//canonical constructer...
	BankUsers(string name, int age, double balance, bool anycredit) {
		cout << "canonical constructer..." << endl;
		this->name = name;
		this->age = age;
		this->balance = balance;
		this->anycredit = anycredit;
	}
	//copy constructer...
	BankUsers(const BankUsers& user) : BankUsers(user.name, user.age,
		user.balance, user.anycredit)
	{
		cout << "copy constructer..." << endl;

	}
	//destructor
	~BankUsers() {
		cout << "destructor..." << endl;
	}
	string toString() {
		string s = "Name: " + name;
		s += ", Age: : " + to_string(age);
		s += ", Balance: " + to_string(balance);
		s += ", Credits? ";
		s += (anycredit ? "yes" : "no");
		return s;
	}
};
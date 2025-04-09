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
	BankUsers(string nm, int a, double b, bool cr) {
		cout << "canonical constructer..." << endl;
		name = nm;
		age = a;
		balance = b;
		anycredit = cr;
	}
	//copy constructer...
	BankUsers(const BankUsers& user) {
		cout << "copy constructer..." << endl;
		name = user.name;
		age = user.age;
		balance = user.balance;
		anycredit = user.anycredit;
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
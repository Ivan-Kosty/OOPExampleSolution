#include "BankUsers.h"
#include <iostream>
#include <string>
using namespace std;

BankUsers::BankUsers() : BankUsers("no name", 13, 10, false) {
		//cout << "Default-constructor..." << endl;
		name = "no name";
		age = 14;
		balance = 10;
		anyCredit = false;
	}
	//constructor with arguments...
BankUsers::BankUsers(string nm, int a) {
		//cout << "constructor with arguments..." << endl;
		name = nm;
		age = a;
		balance = 0;
		anyCredit = false;
	}
	//canonical constructer...
BankUsers::BankUsers(string name, int age, int balance, bool anyCredit) {
		//cout << "canonical constructer..." << endl;
		this->name = name;
		this->age = age;
		this->balance = balance;
		this->anyCredit = anyCredit;
	}
	//copy constructer...
BankUsers::BankUsers(const BankUsers& user) : BankUsers(user.name, user.age,
		user.balance, user.anyCredit)
	{
		//cout << "copy constructer..." << endl;

	}
	//destructor
BankUsers::~BankUsers() {
		//cout << "destructor..." << endl;
	}

string BankUsers::getName() {
		return name;
	}

	void BankUsers::setName(string name) {
		this->name = name;
	}

	int BankUsers::getAge() {
		return age;
	}
	void BankUsers::setAge(int age) {
		if (age >= 14 && age <= 80) {
			this->age = age;
		}
	}
	int BankUsers::getBalance(int index) {
		return balance;
	}
	bool BankUsers::isAnyCredit() { return anyCredit; }
	void BankUsers::setAnyCredit(bool anyCredit) {
		this->anyCredit = anyCredit;
	}

	string BankUsers::toString() {
		string s = "Name: " + name;
		s += ", Age: : " + to_string(age);
		s += ", Balance: " + to_string(balance);
		s += ", Credits? ";
		s += (anyCredit ? "yes" : "no");
		return s;
	};

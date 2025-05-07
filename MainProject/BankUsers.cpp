#include "BankUsers.h"
#include <iostream>
#include <string>
using namespace std;

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
double BankUsers::getAllBillBalance() {
	double sum = 0;
	for (int i = 0; i < balance; i++)
	{
		sum += balance;
	}
	return balance;
}
#include "Group.h"

Group::Group() {
	count = 0;
	list = nullptr;
}
Group::Group(BankUsers* list, int count) {
	if (list != nullptr && count > 0) {
		list = new BankUsers[count];
		this->count = count;
		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
}
Group::~Group() {
	if (list != nullptr) {
		delete[] list;
	}
}

BankUsers Group::getUser(int index) {
	if (index >= 0 && index < count) {
		return list[index];
	}
	return BankUsers("", 0, 0, false);
}
//void Group::add(BankUsers user) {
//
//}
//void Group::remove(BankUsers user) {
//
//}
//void Group::remove(int index) {
//
//}
void Group::set(BankUsers us1, BankUsers us2) {
	for (int i = 0; i < count; i++)
	{
		if (us1.getName() == list[i].getName()
			&& us1.getAge() == list[i].getAge()
			&& us1.isAnyCredit() == list[i].isAnyCredit()) {
			list[i] = us2;
		}
	}
}
void Group::set(int index, BankUsers us2) {
	if (index >= 0 && index < count)
	{
		list[index] = us2;
	}
}
int Group::getCount() {
	return count;
}
string Group::toString() {
	string s = "";
	for (int i = 0; i < count; i++)
	{
		s += list[i].toString();
	}
	return s;
}
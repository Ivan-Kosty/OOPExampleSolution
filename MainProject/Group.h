#include "BankUsers.h"
class Group
{
private:
	BankUsers* list;
	int count;
public:
	Group();
	Group(BankUsers* list, int count);
	~Group();

	BankUsers getUser(int index);
	/*void add(BankUsers user);
	void remove(BankUsers user);
	void remove(int index);*/
	void set(BankUsers us1, BankUsers us2);
	void set(int index, BankUsers us2);
	int getCount();
	string toString();
};


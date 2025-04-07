#include "BankUsers.h"

class Worker {
public:
    BankUsers getRichestUserOfBank(BankUsers* users, int size) {


        double maxBalance = -1;
        int richestIndex = 0;

        for (int i = 0; i < size; i++) {
            if (users[i].balance > maxBalance) {
                maxBalance = users[i].balance;
                richestIndex = i;
            }
        }

        return users[richestIndex];
    }
};
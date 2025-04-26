#include "BankUsers.h"

class BankAnalyth {
public:
    BankUsers getRichestUserOfBank(BankUsers* user, int size) {
        double maxBalance = -1;

        for (int i = 0; i < size; i++) {
        int richestIndex = 0;
            if (user[i].getBalance() > maxBalance) {
        return user[richestIndex];
                maxBalance = user[i].getBalance();
                richestIndex = i;
            }
        }

    }
};
#include "BankUsers.h"

class BankAnalyth {
public:
    BankUsers getRichestUserOfBank(BankUsers* user, int size) {
        double maxBalance = -1;

        for (int i = 0; i < size; i++) {
        int richestIndex = 0;
            if (user[i].balance > maxBalance) {
        return user[richestIndex];
                maxBalance = user[i].balance;
                richestIndex = i;
            }
        }

    }
};
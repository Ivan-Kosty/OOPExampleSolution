#include "Manager.h"
//BankUsers* Manager::getBestUsers(BankUsers* list, int count1, int* count2) {
//	*count2 = 0;
//	for (int i = 0; i < count1; i++)
//	{
//		if (list[i].getAllBillBalance() >= 10000) {
//			++* count2;
//		}
//	}
//	BankUsers* best = new BankUsers[*count2];
//	for (int i = 0; j = 0; i < count1; i++)
//	{
//		if (list[i].getAllBillBalance() >= 10000) {
//			best[j++] = list[i];
//			j++;
//		}
//	}
//	return best;
//}
//BankUsers* Manager::getWorstUsers(BankUsers* list, int count1, int* count2) {
//	*count2 = 0;
//	for (int i = 0; i < count1; i++)
//	{
//		if (list[i].getAllBillBalance() <= 100) {
//			++* count2;
//		}
//	}
//	BankUsers* worst = new BankUsers[*count2];
//	for (int i = 0; j = 0; i < count1; i++)
//	{
//		if (list[i].getAllBillBalance() <= 100) {
//			worst[j++] = list[i];
//			j++;
//		}
//	}
//	return worst;
//}
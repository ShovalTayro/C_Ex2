#ifndef _MYBANK_H_
#define _MYBANK_H_
#include <stdio.h>
#define acounts 50

extern double bankAcounts[acounts][2];

void Open();

void checkBalance();

void addDeposit();

void withDrawal();

void close();

void rate();

void printAcounts();

int closeAll();

#endif


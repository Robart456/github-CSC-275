//
// Created by jmrob on 2/11/2024.
//

#ifndef GROBART_HW1_Q1_CHECKBOOK_H
#define GROBART_HW1_Q1_CHECKBOOK_H


#include "Check.h"

class CheckBook {
public:
    static const int N = 5;
    Check checks[N];
    float balance;
    float lastDeposit;
    int numOfChecks;
    const int checkLimit = N;

    CheckBook();
    CheckBook(float initialBalance);
    void deposit(float amount);
    void displayChecks();
    bool writeCheck(float amount, const std::string& memo);
private:
};


#endif //GROBART_HW1_Q1_CHECKBOOK_H

#include "CheckBook.h"
#include <iostream>

CheckBook::CheckBook() : balance(0), lastDeposit(0), numOfChecks(0) {}

CheckBook::CheckBook(float initialBalance) : balance(initialBalance), lastDeposit(0), numOfChecks(0) {}
void CheckBook::deposit(float amount) {
    balance += amount;
    lastDeposit = amount;
}
void CheckBook::displayChecks() {
    for (int i = numOfChecks - 1; i >= 0; i--) {
        std::cout << "Check " << checks[i].CheckNum << ": $" << checks[i].CheckAmount << ", Memo: " << checks[i].CheckMemo << std::endl;
    }
}
bool CheckBook::writeCheck(float amount, const std::string& memo) {
    if (amount <= balance && numOfChecks < N) {
        Check& newCheck = checks[numOfChecks];
        newCheck.CheckAmount = amount;
        newCheck.CheckMemo = memo;
        newCheck.CheckNum = numOfChecks + 1;
        balance -= amount;
        numOfChecks++;
        return true;
    }
    return false;
}

int main() {
    CheckBook myCheckBook(1000);
    myCheckBook.deposit(500);
    myCheckBook.writeCheck(150, "Utility Bill");
    myCheckBook.writeCheck(200, "Groceries");
    std::cout << "Displaying Checks:" << std::endl;
    myCheckBook.displayChecks();

    return 0;
}

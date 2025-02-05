#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(int accNum, double bal) {
        accountNumber = accNum;
        balance = bal;
    }

    // Friend function declaration
    friend void displayAccountDetails(BankAccount);
};

// Friend function definition
void displayAccountDetails(BankAccount account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Balance: $" << account.balance << endl;
}

int main() {
    // Create a BankAccount object with account number and balance
    BankAccount myAccount(123456, 2500.75);

    // Call the friend function to display account details
    displayAccountDetails(myAccount);

    return 0;
}

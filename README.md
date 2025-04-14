# Bank-Account-Management-System
A Bank Account Management System for a local bank where customers can manage their personal accounts by performing basic operations such as creating an account, depositing money, withdrawing money, checking their balance, and viewing account details.
You are a software developer tasked with building a Bank Account Management System for a local bank. The bank requires a system where customers can manage their personal accounts by performing basic operations such as creating an account, depositing money, withdrawing money, checking their balance, and viewing account details.

The bank has a few simple rules:
Each account must have an initial deposit greater than 0.
Deposits must be greater than 0.
Withdrawals cannot exceed the current account balance.
The system will allow the user to create a bank account and perform multiple operations until they choose to exit

4.1 You are tasked with developing a Bank Account Management System for a small bank. The system should allow users to:
a)    Create a new account: The user inputs their name, account number, and initial deposit.
b)    Deposit money into the account.
c)     Withdraw money from the account.
d)    Check the account balance.
e)    Display account details (name, account number, and current balance).
f)      Exit the system when they are done.

The system should allow users to perform multiple actions (deposit, withdraw, check balance, etc.) until they choose to exit.
Instructions:
You are required to create the following functions:

4.1.1 createAccount(string &name, int &accountNumber, double &balance):
Prompts the user for their name, account number, and initial deposit (must be greater than 0).

4.2.1 depositMoney(double &balance):
Allows the user to deposit money into their account. The deposit must be greater than 0.

4.3.1 withdrawMoney(double &balance):
Allows the user to withdraw money, ensuring the withdrawal does not exceed the current balance. The withdrawal amount must also be greater than 0.

4.4.1 checkBalance(const double &balance):
Displays the current account balance.

4.5.1 displayAccountDetails(const string &name, const int &accountNumber, const double &balance):
Displays the account holder’s name, account number, and current balance.

4.6.1  Use a menu-driven loop to allow users to perform actions repeatedly until they choose to exit.

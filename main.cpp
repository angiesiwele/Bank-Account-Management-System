 #include <iostream>
 #include <string>
 using namespace std;
 //Function prototypes
 void createAccount(string &name, int &accountNumber, double &balance);
 void depositMoney(double &balance);
 void withdrawMoney(double & balance);
 void checkBalance(const double &balance);
 void displayAccountDetails(const string &name, const int &accountNumber, const double
 &balance);
 void menu();
 int main() {
 string name;
 int accountNumber;
 double balance =0.0;
 bool accountCreated =false;
 int choice;
 do {
 menu();
 cout << "Enter your choices (1-6): ";
 cin >> choice;
 switch (choice) {
 case 1:
 if(!accountCreated) {
 createAccount(name, accountNumber, balance);
 accountCreated = true;
 }else {
 cout << "Account already exists." << endl;
 }break;
 case 2:
 if (accountCreated) {
 depositMoney(balance);
 }else {
 cout << "Please create an account first.\n";
 }break;
 case 3:
 if (accountCreated) {
 withdrawMoney(balance);
 }else {
 cout << "Please create an account first.\n";
 }break;
 case 4:
 if (accountCreated) {
 checkBalance(balance);
 }else {
 cout << "Please create an account first.\n";
 }break;
case 5:
 if (accountCreated) {
 displayAccountDetails(name, accountNumber, balance);
 } else {
 cout << "Please create an account first.\n";
 }break;
 case 6:
 cout << "Exiting the system. Goodbye!\n";
 }
 }while (choice != 6);
 return 0;
 }
 void createAccount(string &name, int &accountNumber, double &balance) {
 cout << "Enter your name: ";
 cin.ignore(); // Ignore leftover newline character from previous input
 getline(cin, name);
 cout << "Enter your account number: ";
 cin >> accountNumber;
 do {
 cout << "Enter your initial deposit (must be greater than 0): ";
 cin >> balance;
 if (balance <= 0) {
 cout << "Initial deposit must be greater than 0. Please try again.\n";
 }
 } while (balance <= 0);
 cout << "Account created successfully!\n";
 }
 void depositMoney(double &balance) {
 double deposit;
 do {
 cout << "Enter deposit amount (must be greater than 0): ";
 cin >> deposit;
 if (deposit <= 0) {
 cout << "Deposit amount must be greater than 0. Please try again.\n";
 }
 } while (deposit <= 0);
 balance += deposit;
 cout << "Deposit successful! New balance: " << balance << "\n";
 }
 void withdrawMoney(double & balance) {
 double withdrawal;
 do {
 cout << "Enter withdrawal amount (must be greater than 0 and not exceed current
 balance): ";
 cin >> withdrawal;
 if (withdrawal <= 0) {
cout << "Withdrawal amount must be greater than zero. Please try again.\n";
 }else if ( withdrawal > balance) {
 cout << "Insufficient balance. Please try again.\n";
 }
 }while (withdrawal<= 0 || withdrawal > balance);
 balance-= withdrawal;
 cout << "Withdrawal successfull. New balance: " << balance << "\n";
 }
 void checkBalance(const double &balance) {
 cout << "Current balance is " << balance << "\n";
 }
 void displayAccountDetails(const string &name, const int &accountNumber, const double
 &balance) {
 cout << "---Account Details---\n";
 cout << "Account Holder: " << name << "\n";
 cout << "Account Number: " << accountNumber << "\n";
 cout << "Current Balance: " << balance << "\n";
 }
 void menu() {
 cout << "\n---Bank Account Management System---\n";
 cout << "1. Create Account\n";
 cout << "2. Deposit Money\n";
 cout << "3. Withdraw Money\n";
 cout << "4. Check Balance\n";
 cout << "5. Display Account Details\n";
 cout << "6. Exit\n";
 }

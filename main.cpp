#include <iostream>
#include <string>
#include <cassert>

using namespace std;


int main() {
int balance=0, menu, amount;

cout<< "-----BANKING SYSTEM-----"<<endl;
cout<< "1. Deposit Money"<<endl;
cout<< "2. Withdraw Money"<<endl;
cout<< "3. Check Balance"<<endl;
cout<< "4. Exit"<<endl;

do {
    cout<< "Choose an option: ";
    cin>> menu;

switch (menu) {
case 1: {
cout<< "Enter amount to deposit: ";
cin>> amount;
if(amount > 0) {
balance += amount;
cout<< "Deposited Money: $" << amount << "Current Balance: $" << balance <<endl;
assert (balance >= 0);
} else {
cout<<"Amount to deposit has to be greater than 0"<<endl;
    }
    break;
}

case 2: {
cout<< "Enter amount to withdraw: ";
cin>> amount;
if (amount > 0) {
if (amount <= balance) {
balance -= amount;
cout<< "Withdrew: $" <<amount<< "Current balance: $"<<balance<<endl;
} else {
cout<< "Insufficient funds! Withdrawal failed" <<endl;
}
assert (balance >= 0);
} else {
cout<< "Amount to withdraw has to be greater than 0"<<endl;
}
    break;
}

case 3: {
cout<< "Your current balance is: $"<<balance<<endl;
    break;
}

case 4: {
cout<< "Exiting the banking system. Thank you for using our service!" <<endl;
    break;
}
default: {
cout<< "Invalid option! Please choose a valid menu option" <<endl;
    break;
}
}

} while (menu != 4);  

return 0;
}

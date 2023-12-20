#include <iostream>
using namespace std;

double balance = 1000;

void displayMenu() {
    cout << "\nBanking System Menu:\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
}

void checkBalance() {
    cout << "Current Balance: PKR " << balance << endl;
}

void deposit() {
    double depositAmount;
    cout << "Enter deposit amount: $";
    cin >> depositAmount;

    if (depositAmount < 0) {
        cout << "Warning: Cannot deposit a negative amount.\n";
    } else {
        balance += depositAmount;
        cout << "Deposit successful. Updated Balance: PKR " << balance << endl;
    }
}

void withdraw() {
    double withdrawAmount;
    cout << "Enter withdrawal amount: PKR ";
    cin >> withdrawAmount;

    if (withdrawAmount > balance) {
        cout << "Warning: Insufficient funds for withdrawal.\n";
    } else if (withdrawAmount < 0) {
        cout << "Warning: Cannot withdraw a negative amount.\n";
    } else {
        balance -= withdrawAmount;
        cout << "Withdrawal successful. Updated Balance: PKR " << balance << endl;
    }
}

int main() {
    string password;
    do {
        cout << "Enter account password: ";
        cin >> password;
    } while (password != "giki");

    while (true) {
        displayMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                cout << "Exiting the program. Thank you!\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}

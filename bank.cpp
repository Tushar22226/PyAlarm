#include <iostream>
#include <string>
using namespace std;

class bankAccount {
private:
    int accountNumber;
    string name;
    string accountType;
    double balance;

public:
    bankAccount(int accountNumber, string name, string accountType, double balance) {
        this->accountNumber = accountNumber;
        this->name = name;
        this->accountType = accountType;
        this->balance = balance;
    }

    bankAccount() : accountNumber(123456), name("Sachin Sharma"), accountType("Savings Account"), balance(45000) {}

    void withdrawAmount(double withdrawalAmount) {
        if (withdrawalAmount > balance) {
            cout << "Cannot Withdraw - Balance is low" << endl;
        } else {
            balance = balance - withdrawalAmount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void depositAmount(double depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount;
            cout << "Amount deposited successfully" << endl;
        } else {
            cout << "Invalid Amount" << endl;
        }
    }

    void getBankDetails(){
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }

    double getDepositAmount()  {
        double depositAmount;
        cout << "Enter an amount for deposit: ";
        cin >> depositAmount;
        return depositAmount;
    }

    double getWithdrawalAmount() {
        double withdrawalAmount;
        cout << "Enter an amount for withdrawal: ";
        cin >> withdrawalAmount;
        return withdrawalAmount;
    }

    void showBankMenu()  {
        cout << "1. Display Account Details" << endl;
        cout << "2. Deposit money in bank account" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
    }
};

int main() {
    bankAccount account; 
    bankAccount accountP(12345678, "Tushar Shah", "Current Account", 67000); 

    int chooseBankAccount;
    int choice;

    cout << "Choose your account (1 for parameterized, 2 for default): ";
    cin >> chooseBankAccount; 

    switch (chooseBankAccount) {
    case 1:
        do {
            accountP.showBankMenu();
            cin >> choice;
            switch (choice) {
            case 1:
                accountP.getBankDetails();
                break;
            case 2: {
                double depositMoney = accountP.getDepositAmount();
                accountP.depositAmount(depositMoney);
                break;
            }
            case 3: {
                double withdrawAmnt = accountP.getWithdrawalAmount();
                accountP.withdrawAmount(withdrawAmnt);
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice. Choose Again!" << endl;
                break;
            }
        } while (choice != 4);
        break;

    case 2:
        do {
            account.showBankMenu();
            cin >> choice;
            switch (choice) {
            case 1:
                account.getBankDetails();
                break;
            case 2: {
                double depositMoney = account.getDepositAmount();
                account.depositAmount(depositMoney);
                break;
            }
            case 3: {
                double withdrawAmnt = account.getWithdrawalAmount();
                account.withdrawAmount(withdrawAmnt);
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid Choice. Choose Again!" << endl;
                break;
            }
        } while (choice != 4);
        break;

    default:
        cout << "Invalid Choice!" << endl;
        break;
    }

    return 0;
}
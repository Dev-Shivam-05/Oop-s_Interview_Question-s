#include<iostream>
using namespace std;

class BankAccount
{
private:
    long int bank_account_number;
    string bank_holder_name;
    int bank_account_balance;
public:
    void setBankAccount(long int bank_account_number,
                        string bank_holder_name,
                        int bank_account_balance)
    {
        this->bank_account_number = bank_account_number;
        this->bank_holder_name = bank_holder_name;
        this->bank_account_balance = bank_account_balance;
    }
};

int main()
{
    BankAccount ba;

    long int bank_account_number;
    string bank_holder_name;
    int bank_account_balance;

    cout << "Enter Bank Account Number :- ";
    cin >> bank_account_number;
    cin.ignore();
    cout << "Enter Account Holder Name :- ";
    getline(cin, bank_holder_name);
    cout << "Enter Bank Account Balance :- ";
    cin >> bank_account_balance;

    ba.setBankAccount(bank_account_number, bank_holder_name, bank_account_balance);
    int deposit_amount, withdraw_amount;
    int choice;
    do {
        cout << endl << "----- Welcome To Bank Of Baroda -----" << endl;
        cout << "Press 1 To Deposit." << endl;
        cout << "Press 2 To Withdraw." << endl;
        cout << "Press 3 To View Balance." << endl;
        cout << "Press 0 To Exit." << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "----- Thanks For Coming -----" << endl;
            break;
        case 1:
            cout << "Your Current Balance Is :- " << bank_account_balance << endl;
            cout << "Enter Deposit Amount :- ";
            cin >> deposit_amount;
            bank_account_balance = bank_account_balance + deposit_amount;
            ba.setBankAccount(bank_account_number, bank_holder_name, bank_account_balance);
            cout << "Your Current Balance Is :- " << bank_account_balance << endl;
            break;
        case 2:
            cout << "Your Current Balance Is :- " << bank_account_balance << endl;
            cout << "Enter WithDraw Amont :- ";
            cin >> withdraw_amount;
            bank_account_balance = bank_account_balance - withdraw_amount;
            ba.setBankAccount(bank_account_number, bank_holder_name, bank_account_balance);
            cout << "Your Current Balance Is :- " << bank_account_balance << endl;
            break;
        case 3:
            cout << endl << "Your Current Balance Is :- " << bank_account_balance << endl;
            break;
        default:
            break;
        }
    }
    while (choice != 0);

    return 0;
}

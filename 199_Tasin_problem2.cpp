 /*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
 #include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:

    void setAccountNumber(int accountNumber)
    {
        this->accountNumber = accountNumber;
    }

    void setAccountHolder(string accountHolder)
    {
        this->accountHolder = accountHolder;
    }

    void setBalance(double balance)
    {
        if (balance >= 0)
        {
            this->balance = balance;
        }
        else
        {
            cout << "Invalid Balance!" << endl;
        }
    }


    int getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolder()
    {
        return accountHolder;
    }

    double getBalance()
    {
        return balance;
    }
};

int main()
{
    BankAccount b1;

    b1.setAccountNumber(199);
    b1.setAccountHolder("TASIN");
    b1.setBalance(5000);

    cout << "Bank Account Information" << endl;
    cout << "Account Number: " << b1.getAccountNumber() << endl;
    cout << "Account Holder: " << b1.getAccountHolder() << endl;
    cout << "Balance: " << b1.getBalance() << endl;

    return 0;
}


/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void processPayment() = 0;

    virtual ~Payment()
    {
    }
};

class CreditCardPayment : public Payment
{
public:
    void processPayment()
    {
        cout << "Payment processed using Credit Card." << endl;
    }
};

class MobileBankingPayment : public Payment
{
public:
    void processPayment()
    {
        cout << "Payment processed using Mobile Banking." << endl;
    }
};

int main()
{
    Payment *p;

    p = new CreditCardPayment();
    p->processPayment();
    delete p;

    p = new MobileBankingPayment();
    p->processPayment();
    delete p;

    return 0;
}


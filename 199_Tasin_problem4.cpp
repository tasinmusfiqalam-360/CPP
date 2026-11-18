/*
MD MUSFIQ ALAM TASIN
ID:20262103199
*/
#include <iostream>
using namespace std;

class Smartphone
{
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;

    virtual ~Smartphone()
    {
    }
};

class Android : public Smartphone
{
public:
    void takeSelfie()
    {
        cout << "Android is taking a selfie." << endl;
    }

    void makeCall()
    {
        cout << "Android is making a call." << endl;
    }
};

class IPhone : public Smartphone
{
public:
    void takeSelfie()
    {
        cout << "iPhone is taking a selfie." << endl;
    }

    void makeCall()
    {
        cout << "iPhone is making a call." << endl;
    }
};

int main()
{
    Smartphone *s1 = new Android();
    Smartphone *s2 = new IPhone();

    cout << "Android Operations:" << endl;
    s1->takeSelfie();
    s1->makeCall();

    cout << "\nIPhone Operations:" << endl;
    s2->takeSelfie();
    s2->makeCall();

    delete s1;
    delete s2;

    return 0;
}


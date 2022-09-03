#include <iostream>

class Something
{
public:
    Something() { topSecretValue = 42; }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

class newSomething
{    public:
        int getTopSvalue () const
        {
            return topSecretValue;
        }
        bool b;
        int i;
        std::string str;
    private:
        int topSecretValue;
};

int main ()
{
    Something obj;

    newSomething* ptr = (newSomething*)(&obj);

    std::cout << ptr -> getTopSvalue () << std::endl;
}
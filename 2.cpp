#include <iostream>

class Parent 
{
    private:
        int basedata = 4;
};

class Child1:public Parent
{

};

class Child2:public Parent
{

};

class Grandchild:public Child1,Child2
{
    public:
        int getData () 
        {
            int* ptr = (int*)(this); //or reinterpret_cast
            return *ptr;
        }
};

int main ()
{
    Grandchild obj;
    std::cout << obj.getData () << std::endl;
}
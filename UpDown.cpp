#include <iostream>

class A
{
    public:
        virtual void print (int x = 4) { std::cout << "class A -> " << x << std::endl; }
        virtual ~A () {}
};

class B: public A
{
    public:
        void print (int x = 7) override { std::cout << "class B -> " << x << std::endl; }
};

int main ()
{
    A* ptr1 = new B;      // upcast
    ptr1 -> print ();

    B* ptr2 = (B*) new A; // downcast
    ptr2 -> print ();

    delete ptr1;
    delete ptr2;
}
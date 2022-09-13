#include <iostream>

class Stack
{
public:
    Stack() { top = -1; } //constructor
    void push(int var) { st[++top] = var; } // put number on stack
    int pop() { return st[top--]; } // take number off stack
protected:
    enum { MAX = 3 }; // size of stack array
    int st[MAX]; // stack: array of integers
    int top; // index to top of stack
};

class newStack: public Stack
{
    public:
        newStack() { top = -1; } 
        void push(int var) 
        {
            if (2 == top) 
            {
                f_warning ();
                return;
            }
             st[++top] = var; 
        } 
        int pop() 
        {
            if (-1 == top)
            {
                e_warning ();
                return -1; 
            }
             return st[top--]; 
        }
    protected:
        enum { MAX = 3 };
        int st[MAX];
        int top;
    private:
        void e_warning () { std::cout << "WARNING! Array is empty" << std::endl; }
        void f_warning () { std::cout << "WARNING! Array is full" << std::endl;} 
};

int main ()
{
    // some code 
}
#include <iostream>

class Singleton
{
    public:
        static Singleton& get_instance ()
        {
            static Singleton m_instance;
            return m_instance;
        }
    private:
        Singleton () {}
};

int main ()
{
    Singleton& ins1 = Singleton::get_instance ();
    Singleton& ins2 = Singleton::get_instance ();

    std::cout << &ins1 << '\n' << &ins2 << std::endl;
}
#include <iostream>

class Singleton
{
    public:
        static Singleton* get_instance ()
        {
            if (instance == nullptr)
            {
                instance = new Singleton;
            }
            return instance;
        }
    private:
        static Singleton* instance;
        Singleton () {}
        ~Singleton ()
        {
            delete instance;
            instance = nullptr;
        }
};
Singleton* Singleton::instance = nullptr;

int main ()
{
    Singleton* ins1 = Singleton::get_instance ();
    Singleton* ins2 = Singleton::get_instance ();

    std::cout << ins1 << '\n' << ins2 << std::endl;
}
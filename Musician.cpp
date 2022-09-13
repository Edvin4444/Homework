#include <iostream>

class Musician
{
    public:
        virtual void play () = 0;
        virtual void listen (Musician&) = 0;
        virtual bool isPlaying () = 0;
        virtual ~Musician () {}
};

class Saxophonist: public Musician 
{
    public:
        void play () override 
        {
            if (isplaying) { isplaying = false; }
            else { isplaying = true; }

        }
        void listen (Musician& obj) override 
        {
            if (isPlaying ()) { std::cout << "Saxophonist is playing" << std::endl; }
            else { std::cout << "Saxophonist isn't playing" << std::endl; }
        }
        bool isPlaying () override 
        {
             if (isplaying)
             {
                std::cout << "Yes" << std::endl;
                return true;
             }
             else 
             {
                std::cout << "No" << std::endl;
                return false;
             }
        }
    private:
        bool isplaying = false;
};

class Pianist: public Musician 
{
    public:
        void play () override 
        {
            if (isplaying) { isplaying = false; }
            else { isplaying = true; }

        }
        void listen (Musician& obj) override 
        {
            if (isPlaying ()) { std::cout << "Pianist is playing" << std::endl; }
            else { std::cout << "Pianist isn't playing" << std::endl; }
        }
        bool isPlaying () override 
        {
             if (isplaying)
             {
                std::cout << "Yes" << std::endl;
                return true;
             }
             else 
             {
                std::cout << "No" << std::endl;
                return false;
             }
        }
    private:
        bool isplaying = false;
};

class Bassist: public Musician 
{
    public:
        void play () override 
        {
            if (isplaying) { isplaying = false; }
            else { isplaying = true; }

        }
        void listen (Musician& obj) override 
        {
            if (isPlaying ()) { std::cout << "Bassist is playing" << std::endl; }
            else { std::cout << "Bassist isn't playing" << std::endl; }
        }
        bool isPlaying () override 
        {
             if (isplaying)
             {
                std::cout << "Yes" << std::endl;
                return true;
             }
             else 
             {
                std::cout << "No" << std::endl;
                return false;
             }
        }
    private:
        bool isplaying = false;
};

class Drummer: public Musician 
{
    public:
        void play () override 
        {
            if (isplaying) { isplaying = false; }
            else { isplaying = true; }

        }
        void listen (Musician& obj) override 
        {
            if (isPlaying ()) { std::cout << "Drummer is playing" << std::endl; }
            else { std::cout << "Drummer isn't playing" << std::endl; }
        }
        bool isPlaying () override 
        {
             if (isplaying)
             {
                std::cout << "Yes" << std::endl;
                return true;
             }
             else 
             {
                std::cout << "No" << std::endl;
                return false;
             }
        }
    private:
        bool isplaying = false;
};

int main ()
{
    //some code
}
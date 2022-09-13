#include <iostream>

int main ()
{
    int size;
    std::cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < size - count; ++i)
    {
        if (0 == arr[i])
        {
            std::swap(arr[i],arr[size - 1 - count]);
            --i;
            ++count;
        }
    }

    delete [] arr;
}
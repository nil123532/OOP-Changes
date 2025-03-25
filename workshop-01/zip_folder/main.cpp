#include <iostream>

extern int count(int[],int);               // this tells C++ that this function is defined elsewhere

int main()
{
        int array[7] = {7,5,4,6,7,8,99};
        std::cout << "The number is: " << count(array, 7) << std::endl;
}

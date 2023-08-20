#include <iostream>
#include "include/myArray.h"

/*
----------------------------------------------------------------
2023-08-15 17:50~
This program is finished, it can setted with any template and can be input any length.
~
Swyrias ~
*/
int main()
{
    myArray<int> obj(-44, -3);
    myArray<int> obj1(54, 88);
    myArray<int> esp(-9, 5);
    esp[-3] = 3;
    std::cout << "esp[-3]: " << esp[-3] << std::endl;

    myArray<std::string> obj2(5);
    myArray<char*> obj3(6);
    obj[-42] = 34;
    obj1[65] = 10;
    obj2[0] = "Rena";
    obj2[1] = "Ryuugu";
    obj3[0] = "Dyrias Falan";
    obj3[1] = "Swyrias";
    std::cout << "obj[-42]: " << obj[-42] << std::endl;
    std::cout << "obj1[65]: " << obj1[65] << std::endl;
    std::cout << "obj2[0]: " << obj2[0] << " " << obj2[1] << std::endl;
    std::cout << "obj3[0]: " << obj3[0] << std::endl;
    std::cout << "obj3[1]: " << obj3[1] << std::endl;
    int a = -43;
    std::cout << a - 3;
    return 0;
}

// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* str1 = "  One     2to Thr3 Four five 6ix  \n";
    std::cout << "Строка: "<< str1 << std::endl;
    std::cout << "faStr1 : " << faStr1(str1) << std::endl;
    std::cout << "faStr2 : " << faStr2(str1) << std::endl;
    std::cout << "faStr3 : " << faStr3(str1) << std::endl;
    return 0;
}

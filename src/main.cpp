// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* str1 = "  One     2to Thr3 Four five 6ix  \n";
    printf("String:  %s", str1);
    printf("faStr1 : %d\n", faStr1(str1));
    printf("faStr2 : %d\n", faStr2(str1));
    printf("faStr3 : %d", faStr3(str1));
    return 0;
}

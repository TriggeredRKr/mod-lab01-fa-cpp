// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>
#include <math.h>
unsigned int faStr1(const char* str) {
    int count = 0;
    const char* c = str;
    bool word = false;
    bool correct = true;
    while (*c != '\0') {
        if (isspace(*c)) {
            if (word && correct) {
                count++;
            }
            word = false;
            correct = true;
        } else if (isdigit(*c)) {
            word = true;
            correct = false;
        } else if (isalpha(*c)) {
            word = true;
        }
        c++;
    }
    if (word && correct) {
        count++;
    }
    return count;
}

unsigned int faStr2(const char* str) {
    int count = 0;
    const char* c = str;
    bool word = false;
    bool correct = true;
    while (*c != '\0') {
        if (isupper(*c) && word == false) {
            correct = true;
            word = true;
        } else if (word == true && !islower(*c) && !isspace(*c)) {
            correct = false;
        } else if (isspace(*c)) {
            if (correct && word) {
                count++;
            }
            word = false;
            correct = false;
        }
        c++;
    }
    if (word && correct) {
        count++;
    }
    return count;
}

unsigned int faStr3(const char* str) {
    int count = 0;
    int length = 0;
    bool word = false;
    const char* c = str;
    while (*c != '\0') {
        if (!isspace(*c) && !word) {
            word = true;
            length++;
        }
        else if (isspace(*c) && word) {
            count++;
            word = false;
        }
        else if (word) {
            length++;
        }
        c++;
    }
    if (word) {
        count++;
    }
    if (count != 0) {
        return (round(static_cast<double>(length) / count));
    } else {
        return 0;
    }
}

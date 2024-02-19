#include "caracteres.h"

bool isUpperCase(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool isLowerCase(char c) {
    return (c >= 'a' && c <= 'z');
}

bool isLetter(char c) {
    return (isUpperCase(c) || isLowerCase(c));
}

bool isNumber(char c) {
    return (c >= '0' && c <= '9');
}

int isOtherCharacter(int c) {
    if (isLetter(c) || isNumber(c)) {
        return 0;
    } else {
        return 1;
    }
}

int isEnter(int c) {
    return (c == '\n');
}

char toUpperCase(char c) {
    if (isLowerCase(c)) {
        return c - 32;
    } else {
        return -1;
    }
}

int toLowerCase(int c) {
    if (isUpperCase(c)) {
        return c + 32;
    } else {
        return -1;
    }
}

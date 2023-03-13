// Функция смены системы счисления с десятичной на указанную во втором аргументе ф-ии.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM 10

int change (int a, int b){
    int c = 0;
    if(a / b == 0){
        printf("%d", a % b);
    }
    else {
        change (a / b, b);
        printf("%d", a % b);
    }
}

int main() {
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);
    change(x, y);
    return 0;
}

// 10011101110101
// 2333
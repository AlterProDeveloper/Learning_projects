// strcmp(const char *str1, const char *str2)
/* Функция strncmp() осуществляет лексикографическое сравнение не более чем count символов из двух строк, оканчивающихся нулевыми символами.
    Если строки равны возвращается 0 !!! ВАЖНО ЗАПОМНИТЬ, НА ЭТОМ МОЖНО ПОГОРЕТЬ
    Если str1 меньше, чем str2 возвращается <0
    Если str1 больше, чем str2 возвращается >0
    */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 50

int max_string (char){

}

int main()
{
    char main_str[MAX] = {0}, str[MAX] = {0}, str_max[MAX] = {0};
    int i = 0, count = 0, start = 0, max = 0, length = 0, pos= 0;

    fgets(main_str, MAX, stdin);

    char * p = main_str;
    char symb = 0, symb1 = *p;

    while(*p != 0)
    {

        if (*p == symb1){
        str[i] = *p;
        
        }
        else
        {
            i = 0;
            max = (strlen(str) > strlen(str_max)); // strcmp сравнивает не по количеству символов в строке, а по коду символа, на который указывает str_max
            if (max == 1)
            {
                strcpy(str_max, str);
            }
            memset(str, 0, MAX);
            str[i] = *p;
            symb = *p;
            max = 0;
        }

        if(*p != 10)
        {
            symb1 = *p;
        }
        *p++;
        i++;
        count++;
    }
    length = strlen(str_max);
    pos = count - length;
    char * istr = strstr(main_str, str_max);
    printf("%d,%d%c\n", pos, length, symb1);
    printf("%s, %s\n%p", str_max, main_str, istr);



    return 0;
}
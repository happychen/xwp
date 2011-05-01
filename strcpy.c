/*copystring!
 * */
#include <stdio.h>
#include <string.h>

void my_strcpy(char *str_1, char *str_2);
int main(int argc, const char *argv[])
{
    char str_1[1024] = "hellowold!";
    char str_2[1024];

    printf("The string1 is :\t%s\n", str_1);
    my_strcpy(str_1, str_2);
    
    printf("The string2 is :\t%s\n", str_2);
    return 0;
}
void my_strcpy(char *str_1, char *str_2)
{
    char *p = str_1;
    char *q = str_2;
    while(*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';

    strcpy(str_2, str_1);
}

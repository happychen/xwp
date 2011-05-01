/*在字符串中，删除指定的字符
 * */
#include <stdio.h>
#include <string.h>

void delete_ch(char *str, char ch);
int main(int argc, const char *argv[])
{
    char str[] = "helloworld";
    char ch = 'l';

    printf("The string is :\t%s\n", str);
    delete_ch(str, ch);
    printf("The new string is:\t%s\n", str);
    return 0;
}
void delete_ch(char *str, char ch)
{
    char tmp[4096];
    char *q = tmp;
    char *p = str;

    while(*p != '\0')
    {
        if (ch == *p) 
        {
            p++;
        }
        else
        {
            *q = *p;
            q++;
            p++;
        }
    }
    *q = '\0';
    strcpy(str, tmp);
}

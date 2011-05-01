/*求两个整数的之和，要求在函数体内不得使用+、-、*、/
 * */
#include <stdio.h>

int add(int num1, int num2)
{
    if(num2 == 0)
    return num1;

    int sum = num1 ^ num2;
    int carry = (num1 & num2) << 1;
    return add(sum, carry);
}
int main(int argc, const char *argv[])
{
    int num1 = 57;
    int num2 = 64;
    int result;
    result = add(num1, num2);
    printf("%d\n", result);
    return 0;
}

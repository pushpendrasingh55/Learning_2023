#include <stdio.h>
void greatestnum(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("largest number is %d", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("largest number is %d", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("largest number is %d", num3);
    }
    else
    {
        printf("invalid number");
    }
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    greatestnum(a, b, c);

    return 0;
}
#include<stdio.h>
int main()
{
    float f,c;
    printf("enter the farenheit value");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("result:%f",c);
    return 0;
}

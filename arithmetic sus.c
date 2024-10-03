#include<stdio.h>
int main()
{
    float b,d,r,gs;
    printf("\n enter your salary");
    scanf("%f",&b);
    d=b*0.4;
    printf("\n%f dearness allo",d);
    r=b*0.2;
    printf("\n%f rental allowance is ",r);
    gs=d+b+r+gs;
    printf("\n%f gross salary is",gs);
    return 0;
}



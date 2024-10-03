#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    printf ("\n enter 5 sub marks");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    average=total/5;
    printf("total is %d \n the average is %f", total,average);
return 0;
}



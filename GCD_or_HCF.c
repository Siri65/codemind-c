#include<stdio.h>
int main()
{
    int a,b;
    int h=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=1;i<= a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            h=i;
        }
    }
    printf("%d",h);
}
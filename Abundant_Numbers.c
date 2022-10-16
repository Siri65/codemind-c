#include<stdio.h>
int main()
{
    int num;
    int s=0;
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            s=s+i;
        }
    }
    if(s>num)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
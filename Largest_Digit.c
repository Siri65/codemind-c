#include<stdio.h>
int main()
{
    int num,la=0,res=0;
    scanf("%d",&num);
    while(num>0)
    {
        res=num % 10;
        if(res>la)
        {
            la=res;
        }
        num=num/10;
    }
    printf("%d",la);
}
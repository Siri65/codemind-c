#include<stdio.h>
int main()
{
    int rem=0;
    int rev=0,num;
    scanf("%d",&num);
    int tmp;
    tmp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(tmp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
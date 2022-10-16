#include<stdio.h>
int main()
{
    int num,rev=0,r=0,res=0,p=0;
    scanf("%d",&num);
    r=num*num;
    while (num>0) 
    {
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    res=rev*rev;
    while (res>0) 
    {
        int tmp=res%10;
        p=p*10+tmp;
        res=res/10;
    }
    if(p==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
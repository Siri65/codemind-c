#include<stdio.h>
int main()
{
    int n,r,p;
    scanf("%d",&n);
    scanf("%d",&r);
    for(int i=1; i<=r;i++)
    {
        if(i%2!=0)
        {
            p=n*i;
            printf("%d x %d = %d",n,i,p);
            printf("
");
        }
    }
}
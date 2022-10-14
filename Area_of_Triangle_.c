#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,ar;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",ar);
}
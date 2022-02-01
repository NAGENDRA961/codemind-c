#include<stdio.h>
int main()
{
    int n,i,rev=0,f;
    scanf("%d",&n);
    f=n;
    while(n!=0)
    {
        i=n%10;
        rev=rev*10+i;
        n=n/10;
    }
        if(f==rev)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}
#include<stdio.h>
int main()
{
    long a;
    int i;
    scanf("%ld",&a);
    for(i=a+1;;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            break;
        }
    }
}

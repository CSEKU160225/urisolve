#include<stdio.h>
int main()
{
    int i=1,j=7;

    for(i=1;i<=9;i=i+2)
    {
        j=7;
         printf("I=%d J=%d\n",i,j);
         j=j-1;
          printf("I=%d J=%d\n",i,j);
          j=j-1;
           printf("I=%d J=%d\n",i,j);

    }

}

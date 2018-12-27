#include<stdio.h>
int main()
{
    int a[20],b[20],c,i,j;
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }
     i=20;
    for(j=0;j<20;j++)
    {
        if(i==0)
        {
            break;
        }


          i--;
        b[j]=a[i];



        printf("N[%d] = %d\n",j,b[j]);
    }
}

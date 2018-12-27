#include<stdio.h>
int main()
{
    int b,d,i,j;
    char s;
    float a=0.0,sum=0.0,c=0.0,m[12][12];
    scanf("%c",&s);

    for(i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            scanf("%f",&m[i][j]);
        }

    }
    for(i=0;i<12;i++)
    {
        for(j=1;j<12;j++)
        {

            sum=sum+m[i][j];
            c++;
        }
    }
    if(s=='S'){
     printf("%.1f\n",sum);
    }
    else if(s=='M')
    {
        a=sum/c;
          printf("%.1f\n",a);
    }

}

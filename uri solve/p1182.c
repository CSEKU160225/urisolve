#include<stdio.h>
int main()
{
int a,i,j;
float m[12][12],d=0,b=0;
char s;
scanf("%d %c",&a,&s);
for(i=0;i<12;i++)
{
    for(j=0;j<12;j++)
    {
        scanf("%f",&m[i][j]);
    }
}
if(s=='S')
{
    for(i=0;i<12;i++)
    {
        b=b+m[i][a];
    }

   printf("%.1f\n",b);
}
else if(s=='M')
{
    for(i=0;i<12;i++)
    {
        b=b+m[i][a];
    }
    d=b/12;
    printf("%.1f\n",d);
}



}

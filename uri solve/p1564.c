#include<stdio.h>
int main()
{
    int a;
   while(scanf("%d",&a)!=EOF)
   {
         if(a>=0||a<=100)
    {
         if(a==0)
    {
        printf("vai ter copa!\n");
    }
    else{
          printf("vai ter duas!\n");
    }
    }
   }


}

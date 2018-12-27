#include<stdio.h>
int main()
{
    int i;
   char ch[8];
   for(i=0;i<8;i++)
   {
       scanf("%c",&ch[i]); ///0 is here so 8 number input
   }

       printf("%c%c/%c%c/%c%c\n",ch[3],ch[4],ch[0],ch[1],ch[6],ch[7]);
         printf("%c%c/%c%c/%c%c\n",ch[6],ch[7],ch[3],ch[4],ch[0],ch[1]);
         printf("%c%c-%c%c-%c%c\n",ch[0],ch[1],ch[3],ch[4],ch[6],ch[7]);

}

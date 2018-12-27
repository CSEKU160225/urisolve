#include<stdio.h>
int main()
{

    int a,b=2002;
    while(1){
        scanf("%d",&a);
        if(a==b)
        {
            printf("Acesso Permitido\n");
              break;
        }
        else
        {
            printf("Senha Invalida\n");

        }


    }

}

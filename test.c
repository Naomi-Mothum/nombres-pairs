#include<stdio.h>

int nombrepositif(){

int n;


    printf("entrez un nombre : ");
    scanf("%d",&n);

        while(n<0){
            
            printf("entrez uniquement un nombre positif: ");
            scanf("%d",&n);
        }

    return n;
}

int main (){

    int n;

    n = nombrepositif();

    printf("les nombres pairs compris entre 1 et %d sont: " ,n );

    for(int i=1; i<=n; i++)
    {

        if(i % 2 == 0)

            printf("%d; ",i);

    }

    printf("\n");

    return 0;
}
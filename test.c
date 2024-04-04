#include<stdio.h>

int main (){

    int i,n;

printf("entrez un nombre:");
scanf("%d",&n);

printf("les nombres premiers compris entre 1 et %d sont:\n" ,n );

for(i=1;i<=n;i++){

    if(i%2==0){

        printf("%d\n" ,i);

        
    }
}

printf("\n");

    return 0;
}
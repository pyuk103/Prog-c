#include <stdio.h>
int pgcd(int a,int b);

int main (){
    int a,b;
    printf("saisir a \n");
    scanf("%d",&a);
    printf("saisir b\n");
    scanf("%d",&b);
    printf("le pgcd est %d",pgcd(a,b));
}

int pgcd(int a,int b){
    if(a<b){
        return pgcd(b,a);
    }

    if(a==1 || b==1){
        return b;
    }

    if(b==0){
        return a;
    }

    else{
        return pgcd(b,a%b);
    }

    }

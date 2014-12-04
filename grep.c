#include <stdio.h>
int grep(char[],char[]);

int main(){
    char mot1[]="ma belle babouche";
    char mot2[]="babouche";

    int i=grep(mot1,mot2);
    printf("la fonction grep renvoie %d",i);
}

int grep (char m1[] , char m2[]){
    int r=-1; //r la valeur a rtourner a la fin
    int i,j;

    for(i=0;m1[i]!='\0';i++){
        if(m1[i]==m2[0]){
            j=0;
            while(m2[j]==m1[j] || m2[j]!='\0'){
                j++;}
            if (j==strlen(m2)){ //strlen(m2) renvoie la longueur de m2.
                r=i;
                }
        }
    }
    return r;

}

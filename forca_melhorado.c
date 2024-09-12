#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char palavrasecreta[26];
char chutes[26];
int  tentativa = 0;

void apresenta(){
    printf("*****************\n");
    printf("****BEM Vindo****\n");
    printf("*****************\n");
}

int acerto(char letra){

int achou = 0;

    for (int j = 0; j < tentativa; j++)
    {

        if (chutes[j] == letra)
        {
            achou = 1;
            break;
        }
    }
    return achou;
}

void montapalavra(){

    for (int i = 0; i < (int)strlen(palavrasecreta); i++)
    {

        if (acerto(palavrasecreta[i]))
        {

            printf("%c", palavrasecreta[i]);
        }
        else
        {

            printf("_ ");
        }
    }
}

int ganhou(){

    for(int i = 0; i <= strlen(palavrasecreta); i++){

        if(acerto(chutes[i])){

            

        }

    }

}


int main(){

    int  acertou = 0;
    int  enforcou = 0;


    apresenta();

    sprintf(palavrasecreta, "melancia");

    do{

        montapalavra();

        char chute;
        printf("\nQual o seu chute? ");
        scanf(" %c", &chute);
        chutes[tentativa] = chute;
        tentativa++;



    }while (!acertou && !enforcou);


}
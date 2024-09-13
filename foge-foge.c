#include <stdio.h>
#include <stdlib.h>
#include "foge-foge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

void move(char direcao){

    m.matriz[heroi.x][heroi.y] = '.';
    
    switch(direcao){
        case 'a':
            m.matriz[heroi.x][heroi.y-1] = '@';
            heroi.y--;
            break;
        case 'w':
            m.matriz[heroi.x-1][heroi.y] = '@';
            heroi.x--;
            break;
        case 's':
            m.matriz[heroi.x+1][heroi.y] = '@';
            heroi.x++;
            break;
        case 'd':
            m.matriz[heroi.x][heroi.y+1] = '@';
            heroi.y++;
            break;
    }
}

int main(){

    lemapa(&m);
    encontramapa(&m, &heroi, '@');

    do{
        imprimemapa(&m);
        scanf(" %c", &comando);
        move(comando);
    }while(!acabou());

    
    
    liberamapa(&m);

}
#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"

void encontramapa(MAPA* m, POSICAO p, char c){
    
    for(int = i, i < m->linhas; i++){
        for(int = j, j < m->colunas; j++){
            if(m->matriz[i][j] == c){
                p->x = i;
                p->y = j;
                break;
            }
        }
}

void liberamapa(MAPA* m){
    for(int i=0; i < m->linhas; i++){
        free(m->.matriz[i]);
    }
    free(m->.matriz);
}

void lemapa(MAPA* m){
    FILE* f;

    f = fopen("mapa.txt", "r");
    if(f == 0){
        printf("Erro na leitura do mapa");
        exit(1);
    }

    fscanf(f, "%d %d", &(m->linhas), &(m->colunas));

    alocamapa(m);

    for(int i = 0; i < m->colunas + 1; i++){
        fscanf(f, "%s", m->matriz[i]);
    }

    fclose(f);
}

void alocamapa(MAPA* m){
    
    //Alocação dinâmica de memória
    m->matriz = malloc(sizeof(char*) * m->linhas);
    for(int i = 0; i < m->linhas; i++){
        m->matriz[i] = malloc(sizeof(char) * (m->colunas + 1));
    }
    //
}

void imprimemapa(MAPA* m){
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", m->matriz[i]);
    } 
}

int acabou(){
    return 0;
}


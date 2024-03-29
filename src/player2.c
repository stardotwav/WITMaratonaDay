#include <stdlib.h>
#include <stdio.h>
#include "player2.h"

//retorna o primeiro movimento válido encontrado
pos player2(game* g){
    unsigned i, j;
    pos p;
    int x;

    for(i = 0; i < g->b->nrows; i++){
        for(j = 0; j < g->b->ncols; j++){
            p = make_pos(i, j);
            melhor_lado(g, &x, &p);

            if(flanqueia(g, p)){
                return p;
            }
        }
    }
}
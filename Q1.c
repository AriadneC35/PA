#include<stdio.h>
#include<stdlib.h>

int main(){
    int n_p; // Profundidade
    int n_l; // Linhas
    int n_c;  // Colunas

    printf("Digite o tamanho da matriz 3D(Profundidade, linhas, colunas)");
    scanf("%d %d %d",&n_p,&n_l,&n_c);

    /*************ALOCAÇÃO DA MATRIZ*************/
    int ***m = (int***) calloc(n_p,sizeof(int**));

    //profundidade
    for(int p = 0; p < n_p; p++){
            m[p] = (int**) calloc(n_p,sizeof(int*));
        //linhas
        for(int l = 0; l < n_l; l++){
            m[p][l] = (int*) calloc(n_l,sizeof(int));
        }
    }
    /*************FIM***************/

    int cont = 0;
    //printf("&m = %p, m = %p\n\n", &m,m);

    //Para cada profundidade
    for(int p = 0; p < n_p; p++){
            printf("%d\n", m[p]);
            //Linha
            for(int l = 0; l < n_l; l++){
                    printf("%d\n", m[p][l]);
                    //Coluna
                    for(int c = 0; c < n_c; c++){
                            m[p][l][c] = cont++;
                            printf("%d\n", m[p][l][c]);
                    }
                    puts("");
            }
        puts("");

    }

    return 0;
}

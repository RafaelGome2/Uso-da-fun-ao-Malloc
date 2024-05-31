#include <stdio.h>
#include <stdlib.h>
void print(int mat[3][3]){
    printf("imprimindo a matriz\n");
    int linha ,coluna;
     for(linha=0; linha<3;linha++){
        for(coluna=0;coluna<3;coluna++)
            printf("%d",mat[linha][coluna]);
            printf("\n");
        }
    };

void print2(int **mat){
    printf("imprimindo a matriz\n");
    int linha ,coluna;
     for(linha=0; linha<3;linha++){
        for(coluna=0;coluna<3;coluna++)
            printf("%d",mat[linha][coluna]);
            printf("\n");
        }
    };
int main()
{
    int i,linha, coluna, mat[3][3];
    int **mat2;
    mat2 = malloc(3*sizeof(int*));

    for(i=0; i<3; i++){
            mat2[i] = malloc(3*sizeof(int));
    }

    for(linha=0; linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            scanf("%d",&mat2[linha][coluna]);

        }
    }
    print2(mat2);

    return 0;
}

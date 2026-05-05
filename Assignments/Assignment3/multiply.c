#include <stdio.h>
void pmatrix(int r, int c, int s[r][c]);

int main() {
    int n, m; //store the size of a
    printf("Enter the number of rows and columns for matrix a: ");
    /* TODO: read the size of a */
    scanf("%d %d",&n, &m);


    int p, q; //store the size of b
    printf("Enter the number of rows and columns for matrix b: ");
    /* TODO: read the size of b */
    scanf("%d %d",&p, &q);


    int a[n][m], b[p][q], c[n][q]; //declaring 3 matrices

    /* TODO: if the sizes are compatible, read a and b from the user, multiply them and store the result in c, and print all three matrices.
             if the sizes are not compatible, print an error and exit the program. Return -1. 
             your output format must match the sample output shown in the pdf. */
    if (m != p){
        printf("The given matrix sizes are not compatible!\n");

    } else {
        printf("Enter %d values for matrix a: ", n * m);
        
        for (int i = 0; i < n; i++){
             for (int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter %d values for matrix b: ", p * q);

        for (int i = 0; i < p; i++){
             for (int j = 0; j < q; j++){
                scanf("%d", &b[i][j]);
            }
        }

        //for each entry of output matrix
        for (int i = 0; i < n; i++){
            for (int j = 0; j < q; j++){
                int sum = 0;
                
                for (int x = 0; x < m; x++){
                    sum += a[i][x] * b[x][j];
                }
                c[i][j] = sum;
            }    
        }

        //Print
            
        printf("Matrix a:\n");
        pmatrix(n,m,a);
        
        printf("Matrix b:\n");
        pmatrix(p,q,b);
        
        printf("Matrix c:\n");
        pmatrix(n,q,a);
        
    }

    return 0;
}

void pmatrix(int r, int c, int s[r][c]){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

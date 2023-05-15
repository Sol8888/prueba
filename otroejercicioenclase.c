
#include <stdio.h>

#define M 20
#define N 20

int main () 
{
    int filas, columnas, i, j, A[M][N], B[M][N], R[M][N];

    printf ("escribe numero de filas: ");
    scanf ("%d", &filas);
    printf ("escribe numero de columnas: ");
    scanf ("%d", &columnas);

    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; i++)
        {
            printf ("ingrese el elemento A[%d][%d]: ", i+1, j+1);
            scanf ("%d", & A[i][j]);
            
        }
        
    }
    
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; i++)
        {
            printf ("ingrese el elemento B[%d][%d]: ", i+1, j+1);
            scanf ("%d", & B[i][j]);
        }
        
    }
    
   for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; i++)
        {
         R[i][j] = A[i][j] + B[i][j]; 
        }
        
    } 
    for ( i = 0; i < filas; i++)
    {
        for ( j = 0; j < columnas; i++)
        {
         printf ("%d\t", R[i][j]);  
        }
        printf("\n");
    }

    return 0;

}

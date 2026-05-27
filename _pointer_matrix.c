#include <stdio.h>
#include <stdlib.h>  
int main() 
{
    int m, n;          
    int i, j;          
    int **ptr;         
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    ptr=(int**) malloc(m*sizeof(int*));

    for(i=0; i<m; i++) 
	{
        ptr[i]=(int*) malloc(n*sizeof(int));
    }

    printf("Enter elements of the matrix:\n");
    for(i=0; i<m; i++)
	 {
        for(j=0; j<n; j++) 
		{
            scanf("%d", &ptr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < m; i++)
	 {
        free(ptr[i]);
     }
    free(ptr);

}


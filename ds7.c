#include <stdio.h>

#define SROW 50
#define MROW 20
#define MCOL 20

int main()
{
    int mat[MROW][MCOL], sparse[SROW][3];
    int i, j, nzero = 0, mr, mc, sr, s, elem;

    printf("Enter number of rows:\n");
    scanf("%d", &mr);
    printf("Enter number of columns:\n");
    scanf("%d", &mc);

    printf("Enter the matrix\n");
    for (i = 0; i < mr; i++)
    {
        for (j = 0; j < mc; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0)
            {
                nzero++;
            }
        }
    }

    sr = nzero + 1;
    sparse[0][0] = mr;
    sparse[0][1] = mc;
    sparse[0][2] = nzero;
    s = 1;

    for (i = 0; i < mr; i++)
    {
        for (j = 0; j < mc; j++)
        {
            if (mat[i][j] != 0)
            {
                sparse[s][0] = i;
                sparse[s][1] = j;
                sparse[s][2] = mat[i][j];
                s++;
            }
        }
    }

    printf("\nSparse matrix is \n");
    printf("Row\tCol\tValue\n");
    for (i = 1; i < sr; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sparse[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element to be searched\n");
    scanf("%d", &elem);

    for (i = 1; i < sr; i++)
    {
        if (sparse[i][2] == elem)
        {
            printf("Element found at (row,col)=(%d,%d)\n", sparse[i][0], sparse[i][1]);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
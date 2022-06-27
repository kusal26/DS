
#include <stdio.h>
int main()
{
    int i, j, k, m, n, p, q;
    int first[5][5], second[5][5], join[5][5],product[5][5];
    printf("no of 0row and column\n");
    scanf("%d %d", &m, &n);
    printf("first matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            scanf("%d", &first[i][j]);
        }
    }
    printf("no of 0row and column of 2nd matrix\n");
    scanf("%d %d", &p, &q);
    printf("second matrix\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)

        {
            scanf("%d", &second[i][j]);
        }
    }
   
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)

        {
           join[i][j]=first[i][j]||second[i][j];
        }
    }
     printf("\nsum\n");
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)

        {
            printf(" %d\t",join[i][j]);
        }
        printf("\n");
}
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)

        {
           product[i][j]=first[i][j]&&second[i][j];
        }
    }
    printf("product\n");
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)

        {
            printf(" %d\t",product[i][j]);
        }
        printf("\n");
    }
}
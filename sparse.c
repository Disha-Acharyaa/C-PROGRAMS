#include<stdio.h>

typedef struct
{
    int row;
    int col;
    int value;
}sparse;

int main()
{
    void generate_sparse(int a[][10], int m, int n, sparse s[]);
    void transpose_sparse(sparse s[], sparse t[]);
    void print_sparse(sparse s[]);

    sparse s[100], t[100];
    int a[10][10], m, n, i, j;

    printf("Enter order of input matrix R x C \n");
    scanf("%d%d", &m, &n);

    printf("Enter matrix with few nonzero elements \n");

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    printf("Entered matrix - sparse\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d \t", a[i][j]);

        printf("\n");
    }

    generate_sparse(a, m, n, s);

    printf("Sparse matrix in triples format \n");
    print_sparse(s);

    transpose_sparse(s, t);

    printf("Sparse matrix - Transpose format \n");
    print_sparse(t);

    return 1;
}


void print_sparse(sparse s[])
{
    int i;

    printf("ROW      COL      VALUE \n");

    for(i=0; i<=s[0].value; i++)
        printf("%d \t %d \t %d \t\n", s[i].row, s[i].col,
               s[i].value);
    printf("\n");
    return;
} 


void generate_sparse(int a[][10], int m, int n,
                     sparse s[])
{
    int k, i, j;

    k=0;
    s[0].row = m;
    s[0].col = n;

    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            if(a[i][j]!=0)
            {
                k++;
                s[k].row = i;
                s[k].col = j;
                s[k].value = a[i][j];
            }
        }

    s[0].value = k;
    return;
} 


void transpose_sparse(sparse s[], sparse t[])
{
    int n, count, i, j;

    n= s[0].value;

    t[0].row = s[0].col;
    t[0].col = s[0].row;
    t[0].value = s[0].value;

    count =0;

    for(i=0; i<s[0].col; i++)
        for(j=1; j<=n; j++)
        {
            if (s[j].col == i)
            {
                count++;
                t[count].row = s[j].col;
                t[count].col = s[j].row;
                t[count].value = s[j].value;
            }
        }

    return;
}
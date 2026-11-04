
#include<stdio.h>

void tower(int n, char source_peg, char auxiliary_peg, char destination_peg)
{
    if(n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source_peg, destination_peg);
        return;
    }

    tower(n-1, source_peg, destination_peg, auxiliary_peg);

    printf("Move disk %d from %c to %c\n", n, source_peg, destination_peg);

    tower(n-1, auxiliary_peg, source_peg, destination_peg);
}

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');

    return 0;
}

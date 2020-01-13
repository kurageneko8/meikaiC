#include<stdio.h>

void sum_diff(int  n1, int  n2, int *sum, int *diff)
{
    n1 = n1;
    n2 = n2;
    *sum = n1 + n2;
    *diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}

int main(void)
{
    int na, nb;
    int wa = 0, sa = 0;
    puts("input 2 int.");
    printf("A:");   scanf("%d", &na);
    printf("B:");   scanf("%d", &nb);

    sum_diff(na, nb, &wa, &sa);
    printf("sum is %d, diff is %d.\n", wa, sa);

    return 0;
}

#include<stdio.h>

void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2) swap(n1, n2);
    if (*n2 > *n3) swap(n2, n3);
    if (*n1 > *n2) swap(n1, n2);   
}

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    puts("input 3 int");
    printf("intA:"); scanf("%d", &n1);
    printf("intB:"); scanf("%d", &n2);
    printf("intC:"); scanf("%d", &n3);
     
    sort3(&n1, &n2, &n3);

    puts("ascend orderd");
    printf("intA is %d.\n", n1);
    printf("intB is %d.\n", n2);
    printf("intC is %d.\n", n3);
    
    return 0;
}

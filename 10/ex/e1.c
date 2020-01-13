#include <stdio.h>
void adjust_point(int *n)// reffer the object in the address indirectly
{
    if (*n < 0)
    {
        *n = 0;
    }

    if (*n > 100)
    {
        *n = 100;
    }

}

int main(void)
{
    int n;
    printf("input int:");
    scanf("%d", &n);

    adjust_point(&n);// pass address
    printf("adjusted number:%d", n);
    
    return 0;
}

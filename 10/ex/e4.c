#include<stdio.h>
void set_idx(int *v, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(v+i) = i;
    }
    
}

int main(int argc, char const *argv[])
{
    int v[] = {153,642,643,644,5765,88};
    set_idx(v, 6);

    for (int i = 0; i < 6; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
    
    return 0;
}

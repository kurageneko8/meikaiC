#include <stdio.h>

int count_bits(unsigned){}
int int_bits(void){}

void print_nbits(unsigned x, unsigned n)
{
    int i = int_bits();
    i = (n < i) ? n - 1 : i - 1;
    for ( ; i >= 0; i--)
    {
        putchar(((x >> i) & 1U) ? '1' : '0');
    }
    
}



int main(int argc, char const *argv[])
{
    
    unsigned i;
    for ( i = 0; i < 65535U; i++)
    {
        printf("%5u ", i);
        print_nbits(i, 16);
        printf("%06o %04X\n ", i, i);
    }
    
    return 0;
}

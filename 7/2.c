#include <stdio.h>
#include <limits.h>

int main() {
    puts("this system's char type is ");

    if (CHAR_MIN){
        puts("sign");
    } else {
        puts("unsign");
    }
    

    return 0;
}
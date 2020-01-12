#include<stdio.h>
int main(int argc, char const *argv[])
{
    int retry;
    do {
        int no;
        printf("input int");
        scanf("%d", &no);

        if(no % 2) {
            puts("odd num");
        } else {
            puts("even");
        }

        printf("again? [Yes...0 / No...9]: ");
        scanf("%d", &retry);
    } while(retry == 0);

    return 0;
}

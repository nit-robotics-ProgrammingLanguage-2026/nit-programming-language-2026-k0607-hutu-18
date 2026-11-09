
#include <stdio.h>

int main(void)
{
    int n;
    int i, j;
    int count = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("NG\n");
        return 0;
    }

    for (i = 0; i <= 50; i++) {
        j = n - i;

        if (j >= 0 && j <= 50 && i != j) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

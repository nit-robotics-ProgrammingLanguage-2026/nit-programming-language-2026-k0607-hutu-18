#include <stdio.h>

int main(void)
{
    int n;
    int i, j;
    int count = 0;

    scanf("%d", &n);
    if (n < 0) {
        printf("NG\n");
    } else {
        for (i = 0; i <= 50; i++) {
            for (j = 0; j <= 50; j++) {
                if (i != j && i + j == n) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }  /* TODO: 課題0607 */
    return 0;
}

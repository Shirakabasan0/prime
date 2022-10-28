#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, n_root, i, flag = 0;
    printf("Please enter a natural number less than or equal to 10,000:");
    scanf("%d", &n);
    n_root = sqrt(n);

    for (i = 2; i <= n_root; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("%d は素数です。\n", n);
    }
    else
    {
        printf("%d は素数ではありません。\n", n);
    }

    return 0;
}
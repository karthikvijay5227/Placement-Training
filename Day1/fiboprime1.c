#include <stdio.h>

int main()
{
    int fi, p = 1, flag, n;
    int f = 0, s = 1, t;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            fi = f;
            t = s + f;
            f = s;
            s = t;
            printf("%d ", fi);
        }
        else
        {
            for (int j = p + 1;; j++)
            {
                flag = 0;
                for (int k = 2; k < j; k++)
                {
                    if (j % k == 0)
                    {
                        flag = 1;
                    }
                }
                if (flag == 0)
                {
                    p = j;
                    printf("%d ", p);
                    break;
                }
            }
        }
    }

    return 0;
}
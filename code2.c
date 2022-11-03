#include <stdio.h>

int main (void)
{
    int n;          // наше число
    int i;          // счетчик цикла
    int s = 1;      // является ли простым (0 - нет)

    // получаем n с клавиатуры:
    scanf("%d", &n);
    if (n > 10000) return -1;

    // теперь надо определить является ли число простым..
    if (n < 2)  // еcли 0 или 1
    {
        s = 0;
    }
    else
    {
        for (i=2; i*i <= n; i++)
        {
            if (n%i == 0)
            {
                s = 0;  // если разделилось нацело, то составное
                break;
            }
        }
    }

    if (s > 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}

#include <stdio.h>

void main()
{
    int n, c, e, s, q = 0;
    char excedeu = 'N';
    scanf("%d %d", &n, &c);

    while(n--)
    {
        scanf("%d %d", &s, &e);
        q = q + e - s;
        if (q > c)
        {
            excedeu = 'S';
        }
    }

    printf("%c\n", excedeu);
    return 0;
}
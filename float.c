#include <stdio.h>
int main()
{
    int sn, sl;
    scanf("%d %d", &sn, &sl);
    int x = (int)((sn - sl) * 100.0 / sl + 0.5);
    if (sn * 2 >= sl * 3)
    {
        printf("Exceed %d%%. License Revoked\n", x);
    }
    else if (sn * 10 >= sl * 11)
    {
        printf("Exceed %d%%. Ticket 200\n", x);
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
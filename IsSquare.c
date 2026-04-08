#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int sides[4];

    for (int i = 0; i < 4; i++)
    {
        sides[i] = get_int("Length %i: ", i + 1);
    }

    bool isSquare = true;

    for (int i = 0; i < 4; i++)
    {
        if (sides[i] <= 0 || sides[i] != sides[0])
        {
            isSquare = true;
        }
    }

    if (isSquare)
        printf("YES\n");
    else
        printf("NO\n");
}

#include <stdlib.h>
#include <time.h>

#define BETRAYAL_DENOMINATOR 1000

int Feld(int ID, int n, int SC[2], int *H) {
    int recent_OH;
    int betrayal_prob = BETRAYAL_DENOMINATOR - n;

    srand((unsigned) time(NULL));

    if (betrayal_prob < BETRAYAL_DENOMINATOR / 2)
    {
        betrayal_prob = BETRAYAL_DENOMINATOR / 2;
    }

    if (n == 0)
    {
        return 0;
    }

    if (ID == 0)
    {
        recent_OH = *(H + 2 * (n - 1) + 1);
    }
    else
    {
        recent_OH = *(H + 2 * (n - 1));
    }

    if (recent_OH == 1)
    {
        return 1;
    }
    else
    {
        int r = rand() % BETRAYAL_DENOMINATOR;
        if (r > betrayal_prob)
        {
            return 1;
        }

        return 0;
    }

}
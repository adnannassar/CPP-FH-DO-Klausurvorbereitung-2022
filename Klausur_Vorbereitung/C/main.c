
#include <stdio.h>
#include <stdlib.h>

void pointerAufgabe()
{
    int a = 100, b = 101;
    int *c[2];
    c[0] = &a;
    c[1] = &b;
    int **z;
    z = &c[0];
    **z = b++;
    **(z + 1) = b;
    printf("a = %d, b = %d\n", a, b); // Was ist die Ausgabe ?
}


void pointerAufgabe2()
{
    int a = 10, b = 11;
    int *c[2];
    c[1] = &a;
    c[0] = &b;
    int **ptr;
    ptr = &c[0];
    **ptr = ++(*c[1]);
    **(ptr + 1) = b;
    printf("a = %d, b = %d\n", a, b); // Was ist die Ausgabe ?
}

int recFack(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * recFack(n - 1);
    }

    //  return n == 1 ? 1 : n * recFack(n - 1);
}

int len(char *s);
int strcompare(char *s, char *t)
{

    if (len(s) > len(t))
    {
        return 1;
    }
    else if (len(t) > len(s))
    {
        return -1;
    }
    else
    {
        while (*s)
        {
            if (*s != *t)
            {
                return -1;
            }
            s++;
            t++;
        }
        return 0;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        printf("Summe = %d\n", (atoi(argv[1]) + atoi(argv[2])));
    }

   // printf("Fak von 4 = %d\n", recFack(4));
    // printf("%d\n", strcompare("abc", "Xbc"));
    pointerAufgabe2();
    return 1;
}

int len(char *s)
{
    int count = 0;

    while (*s)
    {
        s++;
        count++;
    }
    return count;
}

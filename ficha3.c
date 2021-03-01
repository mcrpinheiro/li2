#include <stdio.h>
#include <assert.h>

void asterisco (int a) {
    while (a>0) {
        putchar('*');
        a--;
    }
}
void ponto (int a) {
    while (a>0) {
        putchar('.');
        a--;
    }
}
void imprime (int a) {
    int b,
        c,
        d;
    b = 1;
    c = ((2*a)-1);
    d = a-1;
    while (b <=c) {
        if (b <= a) {
            int e;
            e = 2*a-2*b;
            asterisco(b),
            ponto(e),
            asterisco (b);
           putchar ('\n');
        b++;
        }
        else {
            asterisco(d),
            ponto (2*a - 2*d),
            asterisco(d);
            putchar('\n');
            b++;
            d--;

        }
    }
}
    int main() {
        int a;
        assert (scanf ("%d", &a) == 1);
        imprime (a);
        return 0;
    }

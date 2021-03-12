#include <stdio.h>
#include <assert.h>

void impNr (int a, int b) {
    int i = a;
    if (a> 0) {
        while (i>0) {
            printf ("%d", b);
            i--;
        }
        }
    }

void escolhe () {
    int dcf [10][10] = {0},
            i = 0;
    while (i != -1) {
        assert((scanf("%d", &i)) == 1);
        int de = i/10,
            uni = i%10;
        dcf[de][uni] += 1;
    }
    int j = 0;
      while (j<=9) {
        printf("%d|", j);
        int k = 0;
        while (k<=9){
            if (dcf[j][k] != 0) {
                impNr(dcf[j][k], k);
            }
        k++;
        }
        j++;
        putchar('\n');
    }
    }

int main () {
    escolhe ();
    return 0;
}


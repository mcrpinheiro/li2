#include <stdio.h>
#include <math.h>
#include <assert.h>

int main() {
    int a, b, c;
    assert(scanf("%d %d %d", &a, &b, &c)==3);
    int per = (a+b+c);
    double semi = ((a+b+c)/2.0);
    double area = (sqrt (semi*(semi-a)*(semi-b)*(semi-c)));
    {
        if
                (a + b > c && b + c > a && a + c > b) {
            if (a == b && b == c && a == c)
                printf("%s " "%d " "%.2lf\n", "EQUILATERO", per, area);
            else {
                if (a == b && b != c && a != c)
                    printf("%s " "%d " "%.2lf\n", "ISOSCELES", per, area);
                else {
                    if (c*c == a*a + b*b || c*c + a*a == b*b || a*a == c*c + b*b)
                        printf("%s " "%d " "%.2lf\n", "RETANGULO", per, area);
                    else printf("%s " "%d " "%.2lf\n", "ESCALENO", per, area);
                }
            }
        }
        else printf("%s\n", "INVALIDO");
    } }



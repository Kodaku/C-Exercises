#include <stdio.h>

#define N 10
#define INC(x) x + 1
#define SUB(x, y) x - y
#define SQR(x) ((x) * (x))
#define CUBE(x) (SQR(x) * (x))
#define M1(x, y) x##y
#define M2(x, y) #x #y

int main(void)
{
    int a[N], i, j = 4, k = 3, m, jk = 2;
#ifdef N
    i = j;
    printf("%d\n", i);
#else
    j = i;
#endif
    i = 10 * INC(j);
    printf("%d\n", i);
    i = SUB(j, k);
    printf("%d\n", i);
    i = SQR(SQR(j));
    printf("%d\n", i);
    i = CUBE(j);
    printf("%d\n", i);
    i = M1(j, k);
    printf("%d\n", i);
    puts(M2(i, j));

#undef SQR
    // i = SQR(j);
#define SQR
    i = SQR(j);
    printf("%d\n", i);

    return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
    int n,m , f1,f2,f3;
    f1 = 1;
    f3 = 1;
    f2 = 0;

    printf("Enter n \n");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++) {
        f1 = i * f1;
    }
    printf("F1 equal %d\n",f1);
    for (int i = 1;i<=n;i++) {
        f2 = i + f2;
    }
    printf("F2 equal %d\n",f2);

    printf("Enter m \n");
    scanf("%d",&m);
    for (int i = 1;i<=n;i++) {
        f3 = f3 * m;
    }
    printf("Result %d", f3);
    return 0;

}

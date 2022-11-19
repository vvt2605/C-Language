#include <stdio.h>
#include <math.h>
int fun(int n ) {
    int s =0;
    if (n == 1) {
        return 0;
    }
    for (int i =2 ; i < n ;i++) {
        if (n % i ==0 ) {
            s = s+1;
        }
    }
    if (s == 0 ) {
        return 1;
    }
    else {return 0;}
}
 
int foo(int c) {
    int i =0 ;

    while (c >=0) {
        
        c = c-i;
        i++;

    }
    return i-2;
}
int main() {
    printf("fun(2) = %d\n", fun(2));
    printf("fun(1) = %d\n", fun(1));
    printf("fun(5) = %d\n", fun(5));
    printf("fun(6) = %d\n", fun(6));
    printf("\n");
    printf("foo(9) = %d\n", foo(9));
    printf("foo(10) = %d\n", foo(10));
    printf("foo(11) = %d\n", foo(11));
    printf("foo(15) = %d\n", foo(15));
    printf("foo(15) = %d\n", foo(16));

    

}
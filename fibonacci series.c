#include<stdio.h>

int main() {
    int i, n, j= 0, k= 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d, ", j);
        nextTerm = j+ k;
        j= k;
        k= nextTerm;
    }
    return 0;
}

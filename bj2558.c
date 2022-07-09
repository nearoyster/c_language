#include <stdio.h>

int main(void){
    int n1; scanf("%d", &n1);
    int a, b, c; scanf("%1d%1d%1d", &c, &b, &a);
    int ans = (n1 * c) * 100 + (n1 * b) * 10 + n1 * a;    
    printf("%d\n%d\n%d\n%d\n", n1 * a, n1 * b, n1 * c, ans);
    return 0;
}

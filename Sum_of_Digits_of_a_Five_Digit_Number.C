#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int sum=0,remainder;
    while(n>0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("%d", sum);
    return 0;
}

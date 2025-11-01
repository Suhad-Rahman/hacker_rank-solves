#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    int original_a= *a;
    int origina_b= *b;
    
    *a = origina_b + original_a;
    *b = abs(original_a - origina_b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

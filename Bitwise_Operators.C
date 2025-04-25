#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int mand=0,mor=0,mnor=0;
for(int i=1;i<=k;i++){

    for(int x=i+1; x<=n;x++){
    int And= i&x;
    int Or= i|x;
    int Nor= i^x;
        if(And>mand && And<k){
            mand=And;
        }
        if(Or>mor && Or<k){
            mor=Or;
        }
        if(Nor>mnor && Nor<k){
            mnor=Nor;
        }
    }
}
    printf("%d\n", mand);
    printf("%d\n", mor);
    printf("%d\n", mnor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

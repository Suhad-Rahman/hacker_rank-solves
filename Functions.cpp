#include<iostream>

using namespace std;

int greatest(int a, int b, int c, int d){
    
    int max = (a>b ? a : b);
    max = (max>c ? max : c);
    max= (max>d ? max : d);    
        return max;
}




int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int ans = greatest(a, b, c, d);
    
    cout<<ans;
    
    return 0;
}

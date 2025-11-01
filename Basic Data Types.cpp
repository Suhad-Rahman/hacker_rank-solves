#include<iostream>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin>>a>>b>>c>>d>>e;
    
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    printf("%.3f\n", d);
    printf("%.9lf", e);

    return 0;
}

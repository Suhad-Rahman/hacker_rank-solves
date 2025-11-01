#include<iostream>
#include<vector>

using namespace std;

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    
    vector<string>s = {{"one"}, {"two"}, {"three"}, {"four"}, {"five"}, {"six"}, {"seven"}, {"eight"}, {"nine"}};
    
    for(int i=a; i<=b; i++){
        
        if(i>9 && i%2==0){
            cout<<"even"<<"\n";
        }
        else if(i>9 && i%2==1){
            cout<<"odd"<<"\n";
        }
        
        else{
            cout<<s[i-1]<<"\n";
        }
    }
    
    
    
    
    
    return 0;
}
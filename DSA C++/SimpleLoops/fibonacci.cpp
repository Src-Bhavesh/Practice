#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int a=0;
    int b=1;
    int c=0;
    // cout<<a<<endl;
    while(i<=n){
        
        c=a+b;
        a=b;
        b=c;
        // cout<<a<<endl;
        i++;
    }
    cout<<a;
    return 0;
}
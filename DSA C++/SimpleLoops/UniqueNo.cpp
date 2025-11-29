#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int u=0;
    while(n>0){
        i=n%10;
        u=u^i;
        n=n/10;
    }
   
    
    cout<<u;
    return 0;
}
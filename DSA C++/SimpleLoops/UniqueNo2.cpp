#include <iostream> 
using namespace std; 

int main(){ 
    int n; 
    cin>>n; 
    int a=0; 
    int i=1; 
    while(i<=n){ 
        int s; 
        cin>>s; 
        a=a^s; 
        i++; 
    } 
    cout<<a; 
    return 0; 
}
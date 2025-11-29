#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int f=1;
    int m;
    m=(n+1)/2;
    while(f<=n){
        while(f==1){
            cout<<"*";
            f++;
        }
        while(f<m-1){
            cout<<" ";
            f++;
        }
        while(m<=f<n){
            cout<<"*";
            f++;
        }
        
    }
   return 0;
}
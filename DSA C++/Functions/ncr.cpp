#include <iostream>
using namespace std;


int factorial(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n , int r){
    int N =factorial(n);
    int R =factorial(r);
    int NR =factorial(n-r);

    int ncr=N/(R*NR);
    return ncr;

}

int main(){
    // int n;
    // cin>>n;
    // int r;
    // cin>>r;
    // cout<<factorial(n)<<endl;
    // cout<<factorial(r)<<endl;
    // cout<<factorial(n-r)<<endl;
    cout<<nCr(7,3)<<endl;
}
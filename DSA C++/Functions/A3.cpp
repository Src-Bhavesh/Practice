#include <iostream>
using namespace std;

void factorial(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    cout<<ans;
}

int main(){
    factorial(5);
}
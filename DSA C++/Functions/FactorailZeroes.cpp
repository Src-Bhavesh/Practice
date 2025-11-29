#include <iostream>
using namespace std;

int Trailing_zeroes(int n){
    int ans=0;
    for(int i=5; n/i>=1;  i=i*5){
        ans+=n/i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<Trailing_zeroes(n);

}

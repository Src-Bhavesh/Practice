#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<n<<" is not a Prime Number";
            break;
        }
        else{
            cout<<n<<"  is a Prime Number";     
           }
    i++;

    }
    return 0;
}
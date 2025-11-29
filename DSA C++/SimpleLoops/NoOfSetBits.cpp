#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int c=0;
    while(n>0){
        int s=0;
        s=(n%10);
        n=n/10;
        if(s==1){
            c++;
        }

    }
    cout<<c;
    return 0;
}
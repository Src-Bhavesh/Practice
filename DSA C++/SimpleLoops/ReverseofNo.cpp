#include <iostream>
using namespace std;
int main(){
    int long n;
    cin>>n;
    int i;
    int s=0;
    while(n>0){
        i=n%10;
        s=s*10+i;
        n=n/10;
    }
    cout<<s<<endl;
    
    return 0;
}
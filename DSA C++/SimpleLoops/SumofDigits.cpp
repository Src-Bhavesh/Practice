#include <iostream>
using namespace std;
int main(){
    int n;

    cin>>n;
    int i;
    int s=0;
    int k;
    while(n>0){
        i=n%10;
        s=s+i;
        n=n/10;

        
       
    }
    cout<<s<<endl;
    
    return 0;
}
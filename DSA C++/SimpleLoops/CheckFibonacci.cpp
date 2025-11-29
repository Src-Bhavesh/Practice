#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int a=0;
    int b=1;
    int c=0;
    // cout<<a<<endl;
    while(i<=INT_MAX){
        
        c=a+b;
        a=b;
        b=c;
        if(a=n){
            cout<<"True";
            break;
        }
        i++;
    }

    
        
    }
    return 0;
}
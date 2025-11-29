#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int j=1;
    while(j<=n){
        cout<<"*";
        j++;
    }
    i++;
    cout<<endl;
    while(i<n){
        
        cout<<"*";
        int p;
        while(p<=n-2){
            cout<<" ";
            p++;
        }
        cout<<"*";
        cout<<endl;
        i++;
        
    }
    int k=1;
    while(k<=n){
        cout<<"*";
        k++;
    }
    return 0;
}
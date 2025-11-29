#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;    
    int m;
    m=(n+1)/2;
    // m=n-(n/2);
    int i =1;
    while(i<=m){
        int j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;         
    }
        
    return 0;
}

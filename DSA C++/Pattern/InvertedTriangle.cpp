#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
        while(j<=n-row+1){
            cout<<"*";
            j++;

        }
        row++;
        cout<<endl;
        
    }
    return 0;
}
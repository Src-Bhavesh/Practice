#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int j=1;
        int l=1;
        while(j<=n-row){
            cout<<' ';
            j++;
        }
        while(l<=(2*row)-1){
            cout<<"*";
            l++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
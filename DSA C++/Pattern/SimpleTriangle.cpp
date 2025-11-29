#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
        int l=1;
        while(j<=n-row){
            cout<<" ";
            j=j+1;
        }
        while(l<=row){
            cout<<"* ";
            l=l+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
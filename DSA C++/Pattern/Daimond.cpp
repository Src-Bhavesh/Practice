#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    int m;
    m=(n+1)/2;
    while(row<=m){
        int j=1;
        int l=1;
        while(j<=m-row){
            cout<<" ";
            j=j+1;
        }
        while(l<=row){
            cout<<" *";
            l=l+1;
        }
        cout<<endl;
        row=row+1;
    }
    int d=1;

    while(row<=n){
        int p=1;
        int r=1;
        while(p<=d){
            cout<<' ';
            p++;
        }
        while(r<=n-row+1){
            cout<<" *";
            r++;
        }
        cout<<endl;
        row++;
        d++;

    }
    return 0;

}
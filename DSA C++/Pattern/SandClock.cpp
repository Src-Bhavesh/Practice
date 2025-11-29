#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int m;
    m=(n+1)/2;
    while(row<=m){
        int j=1;
        int l=1;
        while(j<=row-1){
            cout<<' ';
            j++;
        }
        while(l<=m-row+1){
            cout<<"* ";
            l++;
        }
        cout<<endl;
        row++;
    }
    int d=2;
    while(row<=n){
         int j=1;
        int l=1;
        while(j<=n-row){
            cout<<" ";
            j=j+1;
        }
        while(l<=d){
            cout<<"* ";
            l=l+1;
        }
        cout<<endl;
        row=row+1;
        d++;
    }
    return 0;
    }
    

    





    
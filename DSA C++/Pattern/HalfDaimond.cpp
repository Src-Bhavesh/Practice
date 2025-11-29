#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    int m;
    m=(n+1)/2;
//  Triangle Patten    
    while(row<=m){
        int j=1;
        while(j<=row){
            cout<<"*";
            j++;
        }
        cout<<endl;
        row++;
    }

// Inverted Triangle Pattern 
    
    // int k;
    // k=row;
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
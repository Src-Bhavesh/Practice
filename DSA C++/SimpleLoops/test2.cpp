#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    m=(n+1)/2;
    int f=1;
    int i=1;
    while (f<=2*m-1){
        cout<<"*";
        f++;
    }
    cout << endl;
    i++;

    int u=1;
    
    while(i<=m){
        int j=1;
        int l=1;
        int k=1;

        while(j<=m-u){
            cout<<"*";
            j++;
        }
        while(l<=2*u-1){
            cout<<" ";
            l++;
        }
        while(k<=m-u){
            cout<<"*";
            k++;
        }

        u++;
        i++;
        cout<<endl;
    }
    int r=2;

    while(i<=n){
        int s=1;
        int h=1;
        int m=1;
        while(s<=r){
            cout<<"*";
            s++;
        }

        while(h<=2*(n-i)-1){
            cout<<" ";
            h++;          
        }

        while(m<=r){
            cout<<"*";
            m++;
        }
    i++;
    r++;
    cout<<endl;
    }
    

    return 0;
}

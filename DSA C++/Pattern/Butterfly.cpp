#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int f=1;

    while (f<=2*n-1){
        cout<<"*";
        f++;
    }
    cout << endl;

    int u=1;
    int i=1;
    while(i<=n){
        int j=1;
        int l=1;
        int k=1;

        while(j<=n-u){
            cout<<"*";
            j++;
        }
        while(l<=2*u-1){
            cout<<" ";
            l++;
        }
        while(k<=n-u){
            cout<<"*";
            k++;
        }

        u++;
        i++;
        cout<<endl;
    }

    return 0;
}

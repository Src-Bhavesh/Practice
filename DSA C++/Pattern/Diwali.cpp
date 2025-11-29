#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = (n+1)/2;
    int i=1;
    while(i<=m){
        int j=1;
        int l=1;
        int y=1;
        while(y<=(2*n)-1){
            cout<<" ";
            y++;
        }
        while(j<=m-i){
            cout<<" ";
            j++;
        }
        while(l<=(2*i)-1){
            cout<<"*";
            l++;
        }
        i++;
        cout<<endl;
    }
    int k=1;
    int t=n-m;
    while(i<=n){
        int j=1;
        int l=1;
        int y=1;
        while(y<=(2*n)-1){
            cout<<" ";
            y++;
        }
        while(j<=k){
            cout<<" ";
            j++;
        }
        while(l<=(2*t)-1){
            cout<<"*";
            l++;
        }
        i++;
        k++;
        t--;
        cout<<endl;
    }
    int h=0;
    int s = (2*n)-h;
    int o = (2*s)+1;
    int f = 1;
    int p = 0;
    while(f<2*n){
        int j=1;
        int l=1;
        while(j<=p){
            cout<<" ";
            j++;
        }
        while(l<=o){
            cout<<"*";
            l++;
        }
        h++;
        f++;
        p++;
        cout<<endl;
    }
    return 0;
} 
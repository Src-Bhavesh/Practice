#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int k=1;
    while (i<=n){
        int j=1;
        int l=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        while(l<=i){
            cout<<k;
            l++;
            k++;
        }
        cout<<endl;
        i++;

    }
    return 0;

}
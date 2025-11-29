#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int s=1;
        int j=1;
        while(j<=i){
            cout<<s<<" ";
            s=s*(i-j)/j;
            j++;
        }
        i++;
        cout<<endl;
    }
return 0;
}
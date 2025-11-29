#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;

    for(i=1; i<=n; i++){
        int j;
        for(j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
        
    }
    return 0;
}

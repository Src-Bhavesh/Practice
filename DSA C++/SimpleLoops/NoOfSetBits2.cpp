#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int k=0; k<=ceil(log(n)); k++){
        if (n>>k&1){
            c++;
        }
    }
    cout<<c<<endl;
    cout<<ceil(log(n));
    return 0;
}
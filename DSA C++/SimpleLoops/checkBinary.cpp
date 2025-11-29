#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int i=1;
    int a;
    a=(n>>k & i);
    if(a%10==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;

}
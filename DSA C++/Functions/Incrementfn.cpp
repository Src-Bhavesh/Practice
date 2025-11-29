#include <iostream>
using namespace std;
int increment(int &n){
    return n++;
} 
int main(){
    int n;
    cin>>n;
    cout<<increment(n)<<endl;
    cout<<n;
    return 0;
}
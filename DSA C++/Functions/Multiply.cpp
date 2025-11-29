#include <iostream>
using namespace std;
int Multiply(int a , int b){
    return a*b;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<Multiply(x,y)<<endl;
    return 0;
}
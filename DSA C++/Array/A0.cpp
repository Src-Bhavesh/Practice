#include <iostream>
using namespace std;
int main(){
    int arr[]={10 , 20 , 30 , 40 , 50};
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    arr[0]=2;
    arr[1]=4;
    arr[2]=6;
    arr[3]=9;

    cout<<arr[3]<<endl;

    int a[]={};
    cout<<a[1];

    return 0;
}
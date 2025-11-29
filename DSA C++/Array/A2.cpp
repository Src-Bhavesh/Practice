#include <iostream>
using namespace std;
int main(){
    cout<<"Enter no. of values"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    cout<<"Enter a value"<<endl;
    while(i<n){
        int j;
        cin>>j;
        arr[i]=j;
        i++;

    }
    cout<<"Enter the value to find";
    int t;
    cin>>t;
    int s=0;
    for (int l=0; l<n; l++){
        if(arr[l]==t){
            s=l;
        }

    }
    cout<<s;



return 0;
}
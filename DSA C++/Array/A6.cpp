#include <iostream>
using namespace std;
int main(){
    cout<<"Enter no. of values"<<endl;
    int n;
    cin>>n;
    int arr[n];
    int ar[n];
    int i=0;
    cout<<"Enter Index from where you want to rotate"<<endl;
    int k;
    cin>>k;
    cout<<"Enter a values"<<endl;
    while(i<n){
        int j;
        cin>>j;
        arr[i]=j;
        i++;
    }

    for(int i=0; i<n; i++){
        if(i<k){
            ar[i]=arr[k+1+i];

        }
        else{
            ar[i]=arr[i-k];
        }
    }
    
    for(int l=0; l<n; l++){
        cout<<ar[l]<<" ";
    }
    



return 0;
}
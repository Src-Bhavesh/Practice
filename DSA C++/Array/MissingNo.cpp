#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,2,5,7,8,};
    int n =sizeof(arr)/sizeof(int);
    int l=1;
    for(int i=0; i<=n; i++){
        for(int j=0; j<n; j++){
            if(arr[j]==l){
                l++;
            }
            else{
                cout<<arr[j];
                
            }
        }
        break;
    }
    return 0;
}

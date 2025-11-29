// Largest of n numbers
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter no. of digits";
    int n;
    cin>>n;
    
    int i=1;
    int s=INT_MIN;
    while(i<=n){
        int m;
        cin>>m;
        if(m>s) {
            s=m;
        }
        
        i++;


    }
    cout<<s<<" is the smallest number";
    return 0;

}
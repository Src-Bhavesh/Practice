#include <iostream>
using namespace std;

    void update(int x){
        // Value will not change in the original function 
        x=x+1;

        cout<<"In Function"<<x<<endl;
    }


    int main(){
        int x=5;
        cout<<"Before Update"<<x<<endl;

        update(x);
        cout<<"After Update"<<x;

        return 0;
    }
    

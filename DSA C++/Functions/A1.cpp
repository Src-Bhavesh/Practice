#include <iostream>
using namespace std;


// Void Function 
//    It never return null 

void print(){
    cout<<"Mirai"<<endl;
}

// Int Function 
// It always return something
int sum(int x , int y){
    int s=x+y;
    return s;
}


int main(){
    print();
    print();  //Call of the function
    print();
    

    cout<<sum(45,45)<<endl;
    cout<<sum(34,45);

    return 0;
}
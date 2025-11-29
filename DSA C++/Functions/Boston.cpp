#include <iostream>
using namespace std;

int sumofdigits(int n){
    int s=0;
    while(n>0){
        int i=n%10;
        s=s+i;
        n=n/10;
    }
    return s;
}

bool checkprime(int n){
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3; i*i<n; i=i+2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int sumofprime(int n){
    int sum=0;
    while(n%2==0){
        sum += 2;
        n=n/2;
    }
    for(int i=3; i*i<n; i=i+2){
        while(n%i==0){
            sum += sumofdigits(i);
            n=n/i;
        }
    }
    if(n>2){
        sum=sum+sumofdigits(n);
    }
    return sum;
}




int main(){
    int n;
    cin>>n;


    if(checkprime(n)){
        cout<<"Not a Boston number";
        
    }

    if(sumofdigits(n)==sumofprime(n)){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

    return 0;
}



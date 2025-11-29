#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    m=(n+1)/2;
    
    int i=1;
    for(int f=1; f<=n; f++){
        cout<<"*";   
    }
    cout << endl;
    i++;

    int u=1;
    while(i<=m){
        
        for(int j=1; j<=m-u; j++){
            cout<<"*";       
        }
        for(int l=1; l<=2*u-1; l++){
            cout<<" ";            
        }
        for(int k=1; k<=m-u; k++){
            cout<<"*";         
        }

        u++;
        i++;
        cout<<endl;
    }
    int r=2;

    while(i<=n-1){        
        for(int s=1; s<=r; s++){
            cout<<"*";    
        }
        for(int h=1; h<=2*(n-i)-1; h++){
            cout<<" ";                     
        }
        for(int m=1; m<=r; m++){
            cout<<"*";            
        }
    i++;
    r++;
    cout<<endl;
    }
    
     for(int o=1; o<=n; o++){
        cout<<"*";
        
    }
    cout << endl;
    i++;
    

    return 0;
}

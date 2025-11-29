// #include <bits/stdc++.h> 
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    cout<<sizeof(v);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    v.push_back(5);
    v.pop_back();
    v.pop_back();

    
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    for(auto x : v){
        cout<< x<< " ";
    }
    cout<<endl;
    int vsize = v.size();
    cout<<sizeof(v);

    return 0;
}
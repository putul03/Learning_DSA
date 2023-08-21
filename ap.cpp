#include<iostream>
using namespace std;

int ap(int n){
    int ap = 7;
    for(int i=0;i<=n;i++){
        ap = 3*i + 7;

    }
    
    return ap;
}

int main(){
    int n;
    cin>>n;
    cout<<"Nth term of ap is :"<<ap(n)<<endl;
}
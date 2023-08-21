#include<iostream>
using namespace std;

void fibo(int n){
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    
    for(int i=0; i<n-2;i++){
        int next_num = a+b;
        cout<<next_num<<" ";

    a=b;
    b=next_num;
    }
    return ;
}

int main(){
    int n ;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;

    fibo(n);
    
}
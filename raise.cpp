#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a,b;

    int result=a;
    for(int i=1;i<=b;i++){

        result*=a;
        cout<<result<<endl;
    }



    return 0;
}
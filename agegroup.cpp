#include<iostream>
using namespace std;

int main(){

    int age;
    cin>>age;

    if(age<12){
        cout<<"child"<<endl;
    }
    else if(18>age>50){
        cout<<"adult"<<endl;
    }
    else if(age>50){
        cout<<"senior"<<endl;
    }
    else{
        cout<<"teenager"<<endl;
    }

    return 0;
}
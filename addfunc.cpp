#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}

int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}

int main(){

    int a=2;
    int b=3;

    float c=3.6;
    float d=3.2;

    cout<<add(a,b)<<endl;




    return 0;
}
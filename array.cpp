#include<iostream>
using namespace std;


int main(){

    int array[]={1,2,3,4};

    //cout<<sizeof(array)<<endl;
    //cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size = sizeof(array)/sizeof(array[0]);

    //for loop
    for(int idx=0;idx<size;idx++){
        //cout<<array[idx]<<endl;
    }

    //for each loop
    for(int ele:array){
        //cout<<ele<<endl;
    }

    //while loop
    int index=0;
    while(index<size){
        //cout<<array[index]<<endl;
        index++;
    }

    char vowels[5];

    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }

    
    for(char &element:vowels){
        cin>>elements;
    }
    
    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }



    return 0;
}
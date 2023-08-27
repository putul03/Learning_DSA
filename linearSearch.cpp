#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int i= 0; i<size; i++){
        if (arr[i] == key){
            return 1;
        }
    
    }
    return 0;
}

int main(){

    int arr[10] = {0, 1, 2, 3, 44, 7, 5, 6, 4, 10};
    
    cout<< "enter" << endl;
    int key;
    cin>>key;

    bool found = search (arr, 10, key);
    if (found){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
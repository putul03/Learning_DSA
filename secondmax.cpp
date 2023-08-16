#include<iostream>
using namespace std;

int LargestElementIndex(int array[], int size){
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main(){

    int array[]={2,3,5,7,6,1};
    int indexofLargest = LargestElementIndex(array,6);
    cout<<array[indexofLargest]<<endl;
    array[indexofLargest]=-1;
    int indexofsecondLargest = LargestElementIndex(array,6);
    cout<<array[indexofsecondLargest]<<endl;

    return 0;
}
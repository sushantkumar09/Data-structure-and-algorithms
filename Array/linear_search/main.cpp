#include <iostream>
using namespace std;

int linear_search(int arr[],int length,int value){
    for(int i=0;i<length;i++){
        if(arr[i]==value)
            return i;
    }
    return -1;
    }

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
    
int main(){
    int arr[10]{5,12,9,15,3,7,21,35,10,16};
    display(arr,10);
    cout<<"enter the value to be searched"<<endl;
    
    int value;
    cin>>value;
    cout<<"found at index "<<linear_search(arr,10,value)<<endl;
    
}
    
    
#include <iostream>
using namespace std;

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int binary_search(int arr[],int length,int value){
    int low=0,high=length-1,mid;
    
    
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==value)
            return mid;
        else if(value>arr[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
    
}

int main(){
    int arr[10]{4,7,8,11,14,16,19,21,25,33};
    int value;
    display(arr,10);
    cout<<"enter the value to be searched"<<endl;
    cin>>value;
    
    cout<<"element found at index "<<binary_search(arr,10,value)<<endl;
    return 0;
}
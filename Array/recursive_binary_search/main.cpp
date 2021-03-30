#include <iostream>
using namespace std;
void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int recursive_binary_search(int arr[],int low,int high,int value){
    int mid;
    
    mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==value)
            return mid;
        else if(value>arr[mid])
            return recursive_binary_search(arr,low=mid+1,high,value);
        else
            return recursive_binary_search(arr,low, high=mid-1,value);
    }
    return -1;
    
}
int main(){
    int arr[10]{4,7,8,11,14,16,19,21,25,33};
    int value;
    display(arr,10);
    cout<<"enter the value to be searched"<<endl;
    cin>>value;
    cout<<"element found at index "<<recursive_binary_search(arr,0,9,value)<<endl;
}   
   
   
   
#include <iostream>
#include <string>
using namespace std;
void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void insert(int arr[],int *length,int index, int value){
     if(index>=0 && index<*length){
          for(int i=*length;i>index;i--){
            arr[i]=arr[i-1];
    }
        arr[index]=value;
        *length=*length+1;
         
     }
     else
         cout<<"invalid index"<<endl;
}

void remove(int arr[],int *length,int index){
    //int x=arr[index];
    for(int i=index;i<*length-1;i++){
        arr[i]=arr[i+1];
    }
    *length=*length-1;
}

void append(int arr[],int *length,int value){
    arr[*length]=value;
    *length=*length+1;
}

int main()
{
    int arr[20];
    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    display(arr,10);
    int length=10,index=7,value=20;
    
    //index 7->20 value insert
   
    insert(arr,&length,index,value);
    display(arr,length);
    remove(arr,&length,3);
    display(arr,length);
    append(arr,&length,45);
    display(arr,length);
    return 0;
}

#include <iostream>
using namespace std;

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}


void unsorted_array(int a[],int length,int k){
    int i,j;
    for(i=0;i<length;i++){
        for(j=i+1;j<length;j++){
            if(a[i]+a[j]==k)
                cout<<"("<<a[i]<<","<<a[j]<<")";
        }
    }
    cout<<endl;
}
void unsorted_using_hash(int a[],int length,int k,int max){
    int H[max+1]{0},i;
    for(i=0;i<length;i++){
        if(H[k-a[i]]!=0 && a[i]<=k)
            cout<<"("<<a[i]<<","<<k-a[i]<<")";
        H[a[i]]++;
            
    }
    cout<<endl;
}

void sorted_array(int a[],int length,int k){
    int i=0,j=length-1;
    while(i<j){
        if(a[i]+a[j]==k){
             cout<<"("<<a[i]<<","<<a[j]<<")";
             i++;j--;
        }
        else if(a[i]+a[j]>k)
            j--;
        else 
            i++;
            
        
    }
    cout<<endl;
}

int main(){
    int a[10]{6,3,8,10,16,7,5,2,9,14};
    display(a,10);
    unsorted_array(a,10,10);
    unsorted_using_hash(a,10,10,16);
    int b[10]{1,3,4,5,6,8,9,10,12,14};
    display(b,10);
    sorted_array(b,10,10);
}

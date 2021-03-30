#include <iostream>
using namespace std;

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void sorted_array(int a[],int length){
    int last_duplicate=0,j;
    for(int i=0;i<length-1;i++){
        if(a[i]==a[i+1] && a[i]!=last_duplicate){
            j=i+1;
            while(a[j]==a[i])j++;
            cout<<a[i]<<" "<<"appears "<<j-i<<" times "<<",";
            i=j-1;
            last_duplicate=a[i];
        }
        
            
    }
    cout<<endl;
}

void sorted_using_hashing(int a[],int length){
    int H[a[length-1]+1]{0},i;
    for(i=0;i<length;i++){
        H[a[i]]++;
    }
    for(i=0;i<a[length-1]+1;i++)
        if(H[i]>1)
            cout<<i<<" appears"<<" "<<H[i]<<" times "<<",";
    cout<<endl;
}

void unsorted_array(int a[],int length){
    int count,i,j;
    for(i=0;i<length-1;i++){
        count=1;
        if(a[i]!=-1){
            for(j=i+1;j<length;j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=-1;
                }
                
            }
            if(count>1)
                    cout<<a[i]<<" appears "<<count<<" times "<<",";
                
        }
    }
    cout<<endl;
}

void unsorted_using_hash(int a[],int length,int max){
    int H[max+1]{0},i;
    for(i=0;i<length;i++)
        H[a[i]]++;
    for(i=0;i<max+1;i++)
        if(H[i]>1)
            cout<<i<<" appears "<<H[i]<<" times "<< ",";
        cout<<endl;
}

int main(){
    int a[10]{3,6,8,8,10,12,15,15,15,20};
    display(a,10);
    sorted_array(a,10);
    sorted_using_hashing(a,10);
    int b[10]{8,3,6,4,6,5,6,8,2,7};
    display(b,10);
    unsorted_array(b,10);
    unsorted_using_hash(b,10,8);
}
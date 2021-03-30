#include <iostream>
using namespace std;

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void first_n_natural_no(int a[],int length,int n){
    int sum1=0;
    for(int i=0;i<length;i++){
        sum1+=a[i];
    }
    int sum2=n*(n+1)/2;
    if(sum1==sum2)
        cout<<"no element missing"<<endl;
    else
        cout<<sum2-sum1<<endl;
}
void single_missing_sorted(int a[],int length){
    int low=a[0],high=a[length-1],diff=low-0;
    for(int i=0;i<length;i++){
        if(a[i]-i!=diff){
            cout<<diff+i<<endl;
            break;
        }
    }
}
void multiple_missing_sorted(int a[],int length){
    int low=a[0],high=a[length-1],diff=low-0;
    for(int i=0;i<length;i++){
        if(a[i]-i!=diff){
            while(diff<(a[i]-i)){
                cout<<i+diff<<" ";
                ++diff;
                
            }
                
        }
    }
    cout<<endl;
}

void unsorted_missing(int a[],int length,int l,int h){
    int H[h+1]{0};
    for(int i=0;i<length;i++){
        H[a[i]]++;
    }
    for(int i=l;i<=h;i++){
        if(H[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
}


int main(){
    int a[11]{6,7,8,9,10,11,13,14,15,16,17};
    display(a,11);
    single_missing_sorted(a,11);
    
    int b[11]{6,7,8,9,11,12,15,16,17,18,19};
    display(b,11);
    multiple_missing_sorted(b,11);
    int c[11]{1,2,3,4,5,6,8,9,10,11,12};
    display(c,11);
    first_n_natural_no(c,11,12);
    int d[10]{3,7,4,9,12,6,1,11,2,10};
    display(d,10);
    unsorted_missing(d,10,1,12);
    
}
/* if the array is unsorted then first sort the array then the procedure is similar to the merg algorithm*/

#include <iostream>
using namespace std;

void display(int arr[],size_t size){
    for(size_t i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
bool lsearch(int a[],int l,int value){
    for(int i=0;i<l;i++){
        if(a[i]==value)
            return false;
    }
    return true;
    
}
// return the number of element in the union arrary
int unsorted_union(int a[],int b[],int c[],int m,int n, int o){
    int i,j,k,count=0;
    for(i=0,k=0;i<m;i++,k++){
        c[k]=a[i];
        count++;
    }
    for(j=0;j<n;j++){
        if(lsearch(a,m,b[j])){
            c[k++]=b[j];
            count++;
        }
        
    }
    return count;
    
}

int main(){
    int a[6]{0,3,2,7,9,4},b[7]{0,2,1,6,7,10,12},c[13];
    display(a,6);
    display(b,7);
    
    int count=unsorted_union(a,b,c,6,7,13);
    cout<<count<<endl;
    display(c,count);
    return 0;
    
    }
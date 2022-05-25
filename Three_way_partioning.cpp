// Three way partitoning of an array around given value
// Dutch Algorithm

// Time complexity - 0(n)
// Space complexity - 0(1)
#include<bits/stdc++.h>
using namespace std;

void threeWaayPartit(int arr[] , int a, int b,int n){
    int start = 0; int end = n-1; int i = 0;

    while(i<=end){
        if(arr[i]<a){
        swap(arr[i],arr[start]);
        i++;
        start++;
        }

        else if(arr[i]>b){
            swap(arr[i],arr[end]);
            end--;

        }
        else{
            i++;
        }

    }
}

int main(){
    int arr[] = {1,14,5,20,4,2,54,20,87,98,3,1,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a= 2;
    int b = 8;
    threeWaayPartit(arr,10,20,n);
    cout<<"The array is:" ;
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}
#include<iostream>

using namespace std;



int partition(int* arr, int s, int e){
    
    int i = s-1;
    int j = s;
    int pivot = arr[e];

    for(; j <=e-1;){
        if(arr[j] <= pivot){
            i= i + 1;
            swap(arr[i],arr[j]);


        }
        //expand the result.
        j = j + 1;
        
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quickSort(int* arr,int s, int e){

    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);

    
    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);

}

int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    

    quickSort(a,0,n-1);

    for(int i = 0; i < n ; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
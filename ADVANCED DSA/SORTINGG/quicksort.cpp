#include <bits/stdc++.h>
using namespace std;

int partition (vector<int> &arr , int start , int end){
    int idx = start - 1;
    int pivot = arr[end];

    for(int j = start ; j < end ; j++){
        if(arr[j]< pivot){
            idx++;
            swap(arr[j] , arr[idx]);

        }
    }
    idx++;
    swap(arr[end] , arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr , int start , int end){
    if (start<end){
        int pivIdx =  partition(arr, start , end);

        quickSort(arr , start , pivIdx - 1);
        quickSort(arr , pivIdx + 1 , end);
    }
}


int main(){
    vector<int> arr = {5,1,2,4,6,3};

    quickSort(arr , 0 , arr.size()-1 );

    for(int val : arr){
        cout << val << " ";

    }
    cout << endl;




    return 0;
}
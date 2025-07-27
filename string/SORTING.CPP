#include <iostream>   
#include <algorithm> 
using namespace std;
void bubblesort (int arr[] , int n){
    for (int i = 0; i < n-1 ; i++ ){
        for (int j = 0 ; j < n-i-1 ; j++){
            if (arr[j] > arr[j+1]){
                swap( arr[j] , arr[j+1]);
            }
        }

    }
}

void printarray (int arr[] , int n ){
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " " ; 
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {3 ,5 ,7 ,9  ,2};
    bubblesort(arr , n);
    printarray(arr , n);
}
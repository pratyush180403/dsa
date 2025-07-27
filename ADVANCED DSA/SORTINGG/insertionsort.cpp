#include <iostream>   
#include <algorithm> 
using namespace std;
void insertionsort (int arr[] , int n){
    for (int i = 1; i < n ; i++ ){
        int current = arr[i];
        // previous is   a pointer 
        int previous = i-1;

        while (previous >= 0 && current < arr[previous]){
            arr[previous + 1] = arr[previous];
            previous-- ; 

        }
        arr[previous+1] = current;

        

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
    insertionsort(arr , n);
    printarray(arr , n);
}

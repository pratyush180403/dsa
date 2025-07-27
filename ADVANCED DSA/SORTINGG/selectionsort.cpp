#include <iostream>   
#include <algorithm> 
using namespace std;

void printarray (int arr[] , int n ){
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " " ; 
    }
    cout << endl;
}
void selectionesort (int arr[] , int n){
    for (int i = 0; i < n-1 ; i++ ){
        int smallestIndex = i;
        for (int j=i+1 ; j < n ; j++){
            if (arr[j] < arr[smallestIndex]){
                smallestIndex = j ;
            }
        }
        swap(arr[i] , arr[smallestIndex]);

    }
}



int main(){
    int n = 5;
    int arr[] = {5,2,1,4,3};
    selectionesort(arr , n);
    printarray(arr , n);
    return 0;
}
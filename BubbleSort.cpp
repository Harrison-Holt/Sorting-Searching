#include<iostream>
#include<vector>
using namespace std;

template <typename T>
void bubbleSort(vector<T> &arr) {

 int size = arr.size(); 
 
 for(int i = 0; i < size - 1; i++) {
     
     for(int j = 0; j < size - 1; j++) {
         
         if(arr[j] > arr[j + 1]) {
             
             T temp = arr[j + 1]; 
             arr[j + 1] = arr[j];
             arr[j] = temp; 
         }
     }
 }
}
template <typename T>
void printArray(vector<T> &arr) {
    
    int size = arr.size(); 
    
    for(int i = 0; i < size; i++) {
        
        cout << arr[i] << " "; 
    }
}
int main() {
    
    vector<int> arr = {5, 4, 3, 2, 1, 89, 56, 123, 34};
    
    bubbleSort(arr); 
    
    printArray(arr); 
    return 0; 
}

/** Binary Search 
 * Harrison S. Holt 
 * February 16, 2023 
 * CPSC 2120
**/ 
#include <iostream>
#include <vector>
using namespace std; 

template <typename T>
int binarySearch(vector<T> arr, int target) {
    
    int low = 0; 
    int high = arr.size() - 1; 
    
    int mid; 
    
    while (low <= high) {
        
        mid = (low + high) / 2; 
        
        if (target == arr[mid]) {
            
            return mid; 
        } 
        else if (target > arr[mid]) {
            
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    } 
    return -1; 
}
int main() {
    
    vector<char> arr = {'a', 'b', 'c', 'd', 'e', 'f' ,'g'}; 
    
    char num; 
    
    cout << "Enter a value: "; 
    cin >> num; 
    
    int result = binarySearch(arr, num); 
    
    if (result >= 0) {
        
        cout << "The number " << arr[result] << " was found at index " << result << endl; 
    } 
    else {
        cout << "The number " << num << " was not found!" << endl; 
    }
    return 0; 
}


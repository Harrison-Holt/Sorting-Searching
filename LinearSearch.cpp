/** Linear Search Algorithm 
 * Harrison S. Holt 
 * February 16, 2023
 * CPSC 2120
**/ 
#include <iostream>
#include <vector>
using namespace std; 

template <typename T>
int linearSearch(vector<T> arr, int target) {
    
    int size = arr.size(); 
    
    for(int i = 0; i < size; i++) {
         
        if(target == arr[i]) {
            
            return i; 
        }
    }
    
    return -1; 
}

int main() {
    
    vector<char> arr = {'h', 'a', 'c', 'q', 's'}; 
    
    char num; 
    
    cout << "Enter a value: "; 
    cin >> num; 
    
    int result = linearSearch(arr, num); 
    
    if (result >= 0) {
        
        cout << "The number " << arr[result] << " was found at index " << result << endl; 
    } 
    else {
        cout << "The number " << num << " was not found!" << endl; 
    }
    return 0; 
}
 



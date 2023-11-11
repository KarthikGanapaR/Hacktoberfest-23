/*example
sample input 1
1 3 7 5 4 
sample output 1
7

sample input 2
-1 0 2 9 4
sample output 2
9

explanation
     9
    2  4
   0 
-1

9 is the peak of mountain
*/

#include<iostream>
#include<vector>
int mountPeak(std::vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end) {
        
       if ( arr[mid]<arr[mid+1]) {
            start = mid + 1;
        } else {
            end = mid ;
        }
       mid = start + (end - start) / 2;
       
    }
    return start;
}

int main(){
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;
    std::vector<int> arr(size);

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
   int peakmountain = mountPeak(arr);
   std::cout<<peakmountain;
}

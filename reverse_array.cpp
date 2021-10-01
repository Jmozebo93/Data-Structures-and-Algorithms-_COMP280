#include "reverse_array.h"
#include <iostream>
#include <algorithm>
using std::cout;


void ReverseArray(std::vector<int32_t> &arr) {
  // Implement this function.
  
  reverse(arr.begin(), arr.end());

  for (uint32_t i = 0; i < arr.size(); i++){
    std::cout << arr[i] << " ";

  }

  
  
}

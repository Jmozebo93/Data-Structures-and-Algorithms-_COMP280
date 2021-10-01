#include "search.h"

int32_t LinearSearch(const std::vector<int32_t> &numbers, int32_t n) {
    // Implement this
    
    for(uint32_t index = 0; index < numbers.size(); index++){
        if( n == numbers[index]){
            return index;
       }   
        
    }
    return -1;
}

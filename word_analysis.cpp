#include "word_analysis.h"
using namespace std;

uint32_t MinimumWordLength(std::vector<std::string> &words) {
  // Implement this
  uint32_t length = 0;
  if(words.size() == 0){
    return 0;
  }
  else {
    string smallest = words[0];
    

    for (uint32_t i = 1; i < words.size(); i++){
      if(words[i].length() < smallest.length() || words[i].length() == smallest.length()){
        smallest = words[i];
        length = words[i].length();

      }
      else if(words[i].length() > smallest.length()) {
		    	  length = smallest.length();
		  }
        
    }
    return length;
  }
  
  
}

uint32_t MaximumWordLength(std::vector<std::string> &words) {
  // Implement this
  uint32_t len = 0;
  if(words.size() == 0){
    return 0;
  }
  else {
    string max = words[0];
    

    for (uint32_t i = 1; i < words.size(); i++){
      if(words[i].length() > max.length() || words[i].length() == max.length()){
        max = words[i];
        len = words[i].length();

      }
      else if(words[i].length() < max.length()) {
		    	  len = max.length();
		  }
        
    }
    return len;
  }

  
}

uint32_t RangeOfWordLengths(std::vector<std::string> &words) {
  // Implement this
  uint32_t max = 0;
  uint32_t min = 0;
  uint32_t range = 0;
  if(words.size() == 0){
    return 0;
  }
  else {
    max = MaximumWordLength(words);
    min = MinimumWordLength(words);

    range = max - min;

    return range;

  }


  
}

uint32_t WordLengthMean(std::vector<std::string> &words) {
   //Implement this
   uint32_t sum = 0;
   uint32_t mean = 0;
   if(words.size() == 0){
    return 0;
  }
  else{
    for (uint32_t i = 0; i < words.size(); i++){
      sum += words[i].length();

    }
    mean =  sum / words.size();

    return mean;

  }

}

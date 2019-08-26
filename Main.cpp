#include <vector>
#include <algorithm> //For using push_back

std::vector<int> MonkeyCount(int n) {
  std::vector<int> V;     //We create own vector
  for(int k=1;k<n+1;k++){
    V.push_back(k);      //We put our number in the end
  }
  return V;              //we return our work!
}//P.S.:https://github.com/d9nchik

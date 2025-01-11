#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;
  vec.push_back(true);
  vec.push_back(false);
  
  // Access elements using at() to avoid space optimization issues
  if(vec.at(0)) {
    std::cout << "First element is true\n";
  }

  //Alternative: Use a different container
  std::vector<int> vec2; //Or any other standard container
  vec2.push_back(1);
  vec2.push_back(0);
  
  if (vec2[0]){
     std::cout<<"First element is true\n";
  }
  return 0;
}

#include <math.h>
#include <iostream>

bool narcissistic( int value ){
  //Code away
  int res = 0;
  int digits = std::to_string(value).length();
  int copy = value;
  while (value){  
    res += pow(value % 10,digits); 
    value = value / 10;
  }
  return res == copy;
}

int main() {
    int x;
    std::cin>>x;
    std::cout << narcissistic(x) <<std::endl;
}
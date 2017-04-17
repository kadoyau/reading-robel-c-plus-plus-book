#include <iostream>

bool Input(double& n){
  std::cin >> n;
  return n >= 0;
}

bool Average(){
  int count;
  double n;
  double avr = 0;

  for(count = 0; Input(n); ++count){
    avr += n;
}
  if(count == 0){
    return false;
  }

  avr /= count;
  std::cout << "平均値は" << avr << "です" << std::endl;
  return true;
}

int main(){
  while(Average()){
  }
}

#include "InputStream.h"
#include <iostream>
#include "ArrayStream.h"


bool Average(Stream& stream){
  int count;
  double avr = 0;

  for(count = 0; stream.Set() ; ++count){
    avr += stream.Get();
  }
  if(count == 0){
    return false;
  }

  avr /= count;
  std::cout << "平均値は" << avr << " です" << std::endl;
}


int main(){
  // stream.Set();

  // std::cout<< stream.Get() << std::endl;



  InputStream istream;

  Average(istream);

  static const double ARRAY[] ={0.5, 1.5, -1};
  ArrayStream astream(ARRAY);
  Average(astream);


  std::cout << "> " << std::flush;
  istream.Set();
  std::cout << istream.Get() << std::endl;
}


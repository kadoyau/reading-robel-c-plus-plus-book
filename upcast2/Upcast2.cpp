#include <iostream>
#include "InputStream.h"
#include "ArrayStream.h"


void Show(const Stream& stream){
  std::cout << stream.Get() << std::endl;
}

int main(){
  InputStream istream;
  std::cout << "> " << std::flush;

  istream.Set();
  Show(istream);

  static const double ARRAY[] ={3, -1};
  ArrayStream astream(ARRAY);

  astream.Set();
  Show(astream);

}


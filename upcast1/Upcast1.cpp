#include <iostream>
#include "InputStream.h"

int main(){
  InputStream stream;
  std::cout << "> " << std::flush;

  stream.Set();

  const Stream& ref = stream;
  std::cout << ref.Get() << std::endl;
}


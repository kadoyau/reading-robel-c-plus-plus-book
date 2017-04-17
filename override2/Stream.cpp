#include <iostream>
#include "Stream.h"


double Stream::Get() const{
  return m_n;
}

bool Stream::Set(){
  std::cout <<"Stream::Set" <<std::endl;
  m_n = -1;
  return false;
}

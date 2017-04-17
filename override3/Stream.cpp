#include <iostream>
#include "Stream.h"


double Stream::Get() const{
  return m_n;
}

bool Stream::Set(){
  SetBase();
  return m_n >= 0;
}

void Stream::SetBase(){
  std::cout << "Stream::SetBase()" << std::endl;
  m_n = -1;
}

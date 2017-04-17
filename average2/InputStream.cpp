#include <iostream>
#include "InputStream.h"

double InputStream::Get() const{
  return m_n;
}

bool InputStream::Set(){
  std::cin >> m_n;
  return m_n >=0;
}

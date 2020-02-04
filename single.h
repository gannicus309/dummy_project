#ifndef SINGLE_H
#define SINGLE_H
#include <iostream>
namespace singleton {

template <typename T, typename I = T>
I& single() {
  static T t;
  return t;
}

}  // namespace singleton

#endif  // SINGLE_H

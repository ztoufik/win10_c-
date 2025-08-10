/**
 * Author: Nikolaus Mayer, 2014  (mayern@informatik.uni-freiburg.de)
 * Generic C++ + CMake example
 */

// System/STL
#include <iostream>
#include <windows.h>


#include"hello.h"

/**
 * MAIN
 */
int main( int argc, char** argv ) {
  
  hellos();
  std::cout << "Hello World!"
            << std::endl;

  /// Bye!
  return 0;
}


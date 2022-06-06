#include <iostream>
#include "lib_temp/lib_temp.h"
#include "math/matrix.h"


int main() {
    std::cout << "HW" << std::endl;

	classA a;
	a.print();

	Math::Matrix2D m1(3, 4);

	std::cout << m1.str() << std::endl;

	Math::Matrix2D m2 = m1;
	std::cout << m2.str() << std::endl;

	m1[1][2] = 2;

	std::cout << m1.str() << std::endl;

	Math::Vect v1(5);

	std::cout << v1.str() << std::endl;

  return 0;
}


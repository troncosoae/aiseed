#include <iostream>
#include <vector>
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

	std::vector<int> vec1 = {1, 2, 3, 4};

	Math::Vect v2(vec1);
	
	std::cout << v2.str() << std::endl;

	std::vector<std::vector<int>> matr1 = {
		{1, 2, 3, 5},
		// {4, 3, 2},
		{4, 3, 2, 1}
	};

	Math::Matrix2D m3(matr1);

	std::cout << m3.str() << std::endl;

	int res1 = v2*v2;
	std::cout << "res1: " << res1 << std::endl;
	Math::Vect v3 = m3*v2;

	std::cout << v3.str() << std::endl;

  return 0;
}


#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

#include <vector>
#include <stdint.h>


namespace Math
{

class Matrix2D
{
public:
	Matrix2D() :
		mWidth(10),
		mHeight(10)
	{};
	Matrix2D(int width, int height) :
		mWidth(width),
		mHeight(height)
	{
		std::vector<int> x;
	};

	void print();

private:
	std::vector<std::vector<int>> mMatrix;
	uint32_t mWidth, mHeight;

};

} // namespace Math

#endif


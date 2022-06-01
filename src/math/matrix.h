#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

#include <vector>
#include <string>
#include <stdint.h>


namespace Math
{

class Matrix2D
{
public:
	Matrix2D() :
		mWidth(10),
		mHeight(10),
		mMatrix(mWidth, std::vector<int>(mHeight, 0))
	{};
	Matrix2D(int width, int height) :
		mWidth(width),
		mHeight(height),
		mMatrix(mWidth, std::vector<int>(mHeight, 0))
	{};
	Matrix2D(const Matrix2D& matrix)
	{
		mWidth = matrix.mWidth;
		mHeight = matrix.mHeight;
		mMatrix = matrix.mMatrix;
	}

	void print();
	std::string str();

private:
	uint32_t mWidth, mHeight;
	std::vector<std::vector<int>> mMatrix;

};

} // namespace Math

#endif


#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

#include <vector>
#include <string>
#include <stdint.h>
#include <tuple>

namespace Math
{

class Vect
{
public:
	Vect() :
		mLength(10),
		mVector(mLength, 0)
	{};
	Vect(int length) :
		mLength(length),
		mVector(mLength, 0)
	{};
	Vect(const Vect& vect) 
	{
		mLength = vect.mLength;
		mVector = vect.mVector;
	};

	int& operator[](const int i)
	{
		return mVector[i];
	};

	std::tuple<uint32_t> shape()
	{
		return {mLength};
	}
	std::string str();

private:
	uint32_t mLength;
	std::vector<int> mVector;

};


class Matrix2D
{
public:
	Matrix2D() :
		mWidth(10),
		mHeight(10),
		mMatrix(mWidth, Vect(mHeight))
	{};
	Matrix2D(int width, int height) :
		mWidth(width),
		mHeight(height),
		mMatrix(mWidth, Vect(mHeight))
	{};
	Matrix2D(const Matrix2D& matrix)
	{
		mWidth = matrix.mWidth;
		mHeight = matrix.mHeight;
		mMatrix = matrix.mMatrix;
	};

	Vect& operator[](const int i)
	{
		return mMatrix[i];
	};
	Vect operator*(const Vect& vect);
	Matrix2D operator*(const Matrix2D& matrix);

	std::tuple<uint32_t, uint32_t> shape()
	{
		return {mWidth, mHeight};
	}
	std::string str();

private:
	uint32_t mWidth, mHeight;
	std::vector<Vect> mMatrix;

};

} // namespace Math

#endif


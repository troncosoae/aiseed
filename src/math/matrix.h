#ifndef MATH_MATRIX_H
#define MATH_MATRIX_H

#include <vector>
#include <string>
#include <tuple>
#include <cassert>
#include <stdint.h>


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
	Vect(const std::vector<int> vect)
	{
		mLength = vect.size();
		mVector = vect;
	};
	void operator=(const Vect& vect)
	{
		mLength = vect.mLength;
		mVector = vect.mVector;
	};

	int& operator[](const int i)
	{
		return mVector[i];
	};
	int operator*(Vect& vect);

	std::tuple<uint32_t> shape() const
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
	using vectorSizeType = std::vector<int>::size_type;

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
	Matrix2D(const std::vector<std::vector<int>> matrix) :
		mWidth(matrix.size()),
		mHeight(matrix[0].size()),
		mMatrix(mWidth, Vect(mHeight))
	{
		vectorSizeType firstRowSize = matrix[0].size();
		mMatrix[0] = matrix[0];
		for (vectorSizeType i=1; i < matrix.size(); ++i)
		{
			assert(matrix[i].size() == mHeight);
			mMatrix[i] = matrix[i];
		}
	};

	Vect operator[](const int i) const
	{
		return mMatrix[i];
	};
	Vect operator*(Vect& vect);
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


#include "matrix.h"
#include <iostream>
#include <string>
#include <sstream>
#include <assert.h>
#include <tuple>


namespace Math
{

std::string Matrix2D::str()
{
	std::stringstream ss;
	for (uint32_t i=0; i<mWidth; i++)
	{
		if (i==0) ss << "{";
		else ss << "\n ";
		ss << "{";
		for (uint32_t j=0; j<mHeight; j++)
		{
			ss << mMatrix[i][j];
			if (j!=mHeight-1) ss << " ";
		}
		ss << "}";
	}
	ss << "}";

	return ss.str();

}

Vect Matrix2D::operator*(Vect& vect)
{
	//TODO: use math exceptions
	assert(std::get<0>(vect.shape()) == mHeight);
	Vect output(mWidth);

	for (uint32_t i=0; i<mWidth; ++i)
	{
		output[i] = mMatrix[i]*vect;
	}
	
	return output;
}


std::string Vect::str()
{
	std::stringstream ss;
	for (uint32_t i=0; i<mLength; i++)
	{
		if (i==0) ss << "{";
		else ss << "\n ";
		ss << mVector[i];
	}
	ss << "}";

	return ss.str();
}

int Vect::operator*(Vect& vect)
{
	//TODO: use math exceptions
	assert(std::get<0>(vect.shape()) == mLength);

	int output;

	for (uint32_t i=0; i<mLength; ++i)
	{
		output += mVector[i]*vect[i];
	}
	
	return output;
}



} //Math


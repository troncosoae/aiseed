#include "matrix.h"
#include <iostream>
#include <string>
#include <sstream>


namespace Math
{

void Matrix2D::print()
{
	std::cout << "mMatrix" << std::endl;
}

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
	ss << "}\n";


	return ss.str();

}



} //Math


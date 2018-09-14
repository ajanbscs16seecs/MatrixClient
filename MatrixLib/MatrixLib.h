// MatrixLib.h


#include <vector>




#pragma once  

#ifdef MATRIXLIB_API_EXPORTS  
#define MATRIXLIB_API __declspec(dllexport)   
#else  
#define MATRIXLIB_API __declspec(dllimport)   
#endif  

using namespace std;

namespace MatrixLib {

	class MatrixMultiplication
	{
	public:
		/***
		* this method does matrix multiplication for you.
		* input matrix a and b of type vector<vector<int>>
		* result in vector<vector<int>>
		*/
		static MATRIXLIB_API vector<vector<int>> multiply(vector<vector<int>> a, vector<vector<int>> b);
		static MATRIXLIB_API int multiplynumber(int a, int b);
	}; 

	class MatrixTranspose
	{
	public:
		/***
		* this method does matrix tranpose for you.
		* input matrix a  of type vector<vector<int>>
		* result in vector<vector<int>>
		*/
		static MATRIXLIB_API vector<vector<int>> transpose(vector<vector<int>> a);
	};


	class MatrixAddSub
	{
	public:
		/***
		* this method does matrix addition or subtraction for you.
		* input matrix a and b of vector<vector<int>> and add boolean by which you can tell either to add or subtract, true for addition and false for subtraction
		* result in vector<vector<int>>
		*/
		static MATRIXLIB_API vector<vector<int>> add(vector<vector<int>> a, vector<vector<int>> b, bool add);
	};
	
}

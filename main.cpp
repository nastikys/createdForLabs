
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 4;
	int* matrixPtr;
	int matrix[4][4] = { {1,2,3,4},
					             {5,6,7,8},
						           {1,5,4,5},
						           {6,1,8,9} };
	matrixPtr = *matrix;
	cout << "Matrix before sorting" << endl;
  
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
    {
			int temp;
			if (matrix[i][0] > matrix[j][0])
			{
				for (int k = 0; k < n; k++) 
          {
					temp = matrix[i][k];
					matrix[i][k] = matrix[j][k];
					matrix[j][k] = temp;
				  }
				
			}
		}

	}
	cout << "Matrix after sorting" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Diagonal of the modified matrix is:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout<<matrix[i][i]<<" ";
	}
	

}

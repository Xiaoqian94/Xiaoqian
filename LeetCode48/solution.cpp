#include "solution.h"
#include<algorithm>
void Solution::rotate(vector<vector<int> >& matrix)
{
	int n = matrix.size();
	if(n <= 1) return;
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			swap(matrix[i][j], matrix[j][i]);//б�ԳƱ任 
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n/2; j++)
		{
			swap(matrix[i][j], matrix[i][n-1-j]);
		}
	} 
}

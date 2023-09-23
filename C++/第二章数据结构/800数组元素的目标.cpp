#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 100010;

/*这题是因为有唯一解所以可以用双指针算法来优化*/

//int main()
//{
//	//初始化数组与参数
//	int n = 4, m = 5, x = 6;
//	int a[N] = { 1, 2, 4, 7 }, b[N] = {3, 4, 6, 8,9};
//
//	for (int i = 0, j = m - 1; i < n; i ++ )
//	{
//		//双指针法,初始的时候j = m - 1
//
//		while (j >= 0 && a[i] + b[j] > x) j --;
//		if (a[i] + b[j] == x)
//		{
//			cout << i << j << endl;
//			break;
//		}
//	}
//
//	return 0;
//}


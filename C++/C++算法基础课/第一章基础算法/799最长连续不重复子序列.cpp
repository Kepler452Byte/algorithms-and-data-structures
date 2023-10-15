#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 10010;
//
//int n;
////存储当前的数;
//int a[N];
////存储i与j之前的数出现的个数;
//int s[N];
//
//
//
//int main()
//{
//	n = 5;
//	//数组赋值的时候不能再次声明变量类型
//	a[0] = 1;
//	a[1] = 2;
//	a[2] = 2;
//	a[3] = 3;
//	a[4] = 5;
//
//	int res = 0;
//	//错误的声明变量 int i = 0, intj = 0
//	for (int i = 0, j = 0; i < n; i++)
//	{
//		//统计a[i]这个数出现的个数;
//		s[a[i]]++;
//		//i 与 j之间出现了重复的数,则s[a[i]] > 1;
//		while (s[a[i]] > 1)
//		{
//			//两个数重复时一定有a[i] = a[j]
//			s[a[j]]--;
//			j++;
//		}
//
//		res = max(res, i - j + 1);
//	}
//
//	cout << res << endl;
//
//	return 0;
//}
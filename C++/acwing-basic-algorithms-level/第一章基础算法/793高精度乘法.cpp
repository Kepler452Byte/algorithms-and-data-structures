#include <iostream>
#include <vector>

using namespace std;
//
//vector<int> mul(vector<int>& A, int b)
//{
//	vector<int> C;
//
//	//设置进位项;
//	int t = 0;
//	//i循环结束并且t为零,做完乘法运算;
//	for (int i = 0; i < A.size() || t; i++)
//	{
//		if (i < A.size()) t += A[i] * b;
//		//只取个位数进行保留;
//		C.push_back(t % 10);
//		//取得进位位;
//		t /= 10;
//	}
//
//	return C;
//}
//
//int main()
//{
//	string a = "31711";
//	int b = 2;
//
//	vector<int> A;
//	//这里的i是从零开始的，所以a.size()需要减1;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//
//	auto C = mul(A, b);
//
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//
//	return 0;
//}
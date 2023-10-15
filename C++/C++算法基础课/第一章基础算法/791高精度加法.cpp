#include <iostream>
#include <vector>

using namespace std;
//这里加一个10是为了防止出现边界问题;
//const int N = 1e6 + 10;
////加引用是为了提高效率,如果不加引用程序会将整个vector copy一遍;
////C = A + B
//vector<int> add(vector<int> &A, vector<int> &B )
//{
//	vector<int> C;
//
//	//设置一个进位项;
//	int t = 0;
//	for (int i = 0; i < A.size() || i < B.size(); i++)
//	{
//		if (i < A.size()) t += A[i];
//		if (i < B.size()) t += B[i];
//		//C[i]的值就是t对10取余;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	//如果最高位还有进位的话就在最高位上补上一个1
//	if (t) C.push_back(1);
//	return C;
//}
//
//
//
//
//int main()
//{
//	string a, b;
//	vector<int> A, B;
//
//	a = "123456";
//	b = "654321";
//	//https://blog.csdn.net/Qinhaifu/article/details/88865639C语言字符减去‘0’的含义
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');// A = [6, 5, 4, 3, 2, 1]
//	for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//	auto C = add(A, B);
//
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	return 0;
//
//}
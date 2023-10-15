#include <iostream>
#include <vector>

using namespace std;
////这里加一个10是为了防止出现边界问题;
//const int N = 1e6 + 10;
////加引用是为了提高效率,如果不加引用程序会将整个vector copy一遍;
////C = A + B
//vector<int> sub(vector<int>& A, vector<int>& B)
//{
//	vector<int> C;
//	//在左减法之前一定保证了A.size > B.size ,从低位开始计算;
//	for (int i = 0, t = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		//判断B是否越界,没越界才去减B[i]
//		if (i < B.size()) t -= B[i];
//		//这样写可以将两种情况合并
//		C.push_back((t + 10) % 10);
//		if (t < 0) t = 1;
//		else t = 0;
//	}
//	//删除前导零,并且当C = 0的时候不能删除那个零;将位于高位的前导零删除;
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//
//	return C;
//}
//
//bool cmp(vector<int>& A, vector<int>& B)
//{
//	if (A.size() != B.size()) return A.size() > B.size();
//	//对比A, B每一位的大小
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		//如果最大的那一位不相等,那就返回
//		if (A[i] != B[i])
//		{
//			return A[i] > B[i];
//		}
//	}
//	//如果两者相等的话也返回true
//	return true;
//}
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
//	//先判断A，B两个数的大小
//	if (cmp(A, B))
//	{
//		auto C = sub(A, B);
//		//满足条件就直接输出C
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	}
//	else 
//	{
//		auto C = sub(B, A);
//		cout << "-";
//		for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//
//	}
//
//	return 0;
//
//}
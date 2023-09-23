#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

////除法会返回商C和余数r
//vector<int> div(vector<int> &A, int b, int &r)
//{
//	vector<int> C;
//
//	r = 0;
//	//从最高位开始算;i可以取到0,前面的初试值要减1;
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		r = r * 10 + A[i];
//		C.push_back(r / 10);
//		r %= b;
//	}
//	//这时r在最高位在前,最低位在后,可以reverse一下;
//	reverse(C.begin(), C.end());
//	//删除前导零;
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//
//
//	return C;
//}
//
//int main()
//{
//	string a = "100";
//	int b = 6;
//
//	vector<int> A;
//	//这里的i是从零开始的，所以a.size()需要减1;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//
//	int r;
//	auto C = div(A, b, r);
//
//	//第一行输出商;
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	cout << endl;
//	//第二行输出余数;
//	cout << endl << r << endl;
//	return 0;
//}
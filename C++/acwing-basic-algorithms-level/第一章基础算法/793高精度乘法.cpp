#include <iostream>
#include <vector>

using namespace std;
//
//vector<int> mul(vector<int>& A, int b)
//{
//	vector<int> C;
//
//	//���ý�λ��;
//	int t = 0;
//	//iѭ����������tΪ��,����˷�����;
//	for (int i = 0; i < A.size() || t; i++)
//	{
//		if (i < A.size()) t += A[i] * b;
//		//ֻȡ��λ�����б���;
//		C.push_back(t % 10);
//		//ȡ�ý�λλ;
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
//	//�����i�Ǵ��㿪ʼ�ģ�����a.size()��Ҫ��1;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//
//	auto C = mul(A, b);
//
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//
//	return 0;
//}
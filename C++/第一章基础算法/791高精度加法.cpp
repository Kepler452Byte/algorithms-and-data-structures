#include <iostream>
#include <vector>

using namespace std;
//�����һ��10��Ϊ�˷�ֹ���ֱ߽�����;
//const int N = 1e6 + 10;
////��������Ϊ�����Ч��,����������ó���Ὣ����vector copyһ��;
////C = A + B
//vector<int> add(vector<int> &A, vector<int> &B )
//{
//	vector<int> C;
//
//	//����һ����λ��;
//	int t = 0;
//	for (int i = 0; i < A.size() || i < B.size(); i++)
//	{
//		if (i < A.size()) t += A[i];
//		if (i < B.size()) t += B[i];
//		//C[i]��ֵ����t��10ȡ��;
//		C.push_back(t % 10);
//		t /= 10;
//	}
//	//������λ���н�λ�Ļ��������λ�ϲ���һ��1
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
//	//https://blog.csdn.net/Qinhaifu/article/details/88865639C�����ַ���ȥ��0���ĺ���
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');// A = [6, 5, 4, 3, 2, 1]
//	for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//	auto C = add(A, B);
//
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	return 0;
//
//}
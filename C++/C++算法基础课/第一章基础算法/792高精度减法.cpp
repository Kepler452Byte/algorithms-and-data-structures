#include <iostream>
#include <vector>

using namespace std;
////�����һ��10��Ϊ�˷�ֹ���ֱ߽�����;
//const int N = 1e6 + 10;
////��������Ϊ�����Ч��,����������ó���Ὣ����vector copyһ��;
////C = A + B
//vector<int> sub(vector<int>& A, vector<int>& B)
//{
//	vector<int> C;
//	//�������֮ǰһ����֤��A.size > B.size ,�ӵ�λ��ʼ����;
//	for (int i = 0, t = 0; i < A.size(); i++)
//	{
//		t = A[i] - t;
//		//�ж�B�Ƿ�Խ��,ûԽ���ȥ��B[i]
//		if (i < B.size()) t -= B[i];
//		//����д���Խ���������ϲ�
//		C.push_back((t + 10) % 10);
//		if (t < 0) t = 1;
//		else t = 0;
//	}
//	//ɾ��ǰ����,���ҵ�C = 0��ʱ����ɾ���Ǹ���;��λ�ڸ�λ��ǰ����ɾ��;
//	while (C.size() > 1 && C.back() == 0) C.pop_back();
//
//	return C;
//}
//
//bool cmp(vector<int>& A, vector<int>& B)
//{
//	if (A.size() != B.size()) return A.size() > B.size();
//	//�Ա�A, Bÿһλ�Ĵ�С
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		//���������һλ�����,�Ǿͷ���
//		if (A[i] != B[i])
//		{
//			return A[i] > B[i];
//		}
//	}
//	//���������ȵĻ�Ҳ����true
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
//	//https://blog.csdn.net/Qinhaifu/article/details/88865639C�����ַ���ȥ��0���ĺ���
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');// A = [6, 5, 4, 3, 2, 1]
//	for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//	//���ж�A��B�������Ĵ�С
//	if (cmp(A, B))
//	{
//		auto C = sub(A, B);
//		//����������ֱ�����C
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
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

////�����᷵����C������r
//vector<int> div(vector<int> &A, int b, int &r)
//{
//	vector<int> C;
//
//	r = 0;
//	//�����λ��ʼ��;i����ȡ��0,ǰ��ĳ���ֵҪ��1;
//	for (int i = A.size() - 1; i >= 0; i--)
//	{
//		r = r * 10 + A[i];
//		C.push_back(r / 10);
//		r %= b;
//	}
//	//��ʱr�����λ��ǰ,���λ�ں�,����reverseһ��;
//	reverse(C.begin(), C.end());
//	//ɾ��ǰ����;
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
//	//�����i�Ǵ��㿪ʼ�ģ�����a.size()��Ҫ��1;
//	for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//
//	int r;
//	auto C = div(A, b, r);
//
//	//��һ�������;
//	for (int i = C.size() - 1; i >= 0; i--) cout << C[i];
//	cout << endl;
//	//�ڶ����������;
//	cout << endl << r << endl;
//	return 0;
//}
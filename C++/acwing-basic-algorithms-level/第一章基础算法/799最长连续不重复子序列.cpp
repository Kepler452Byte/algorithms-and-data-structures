#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 10010;
//
//int n;
////�洢��ǰ����;
//int a[N];
////�洢i��j֮ǰ�������ֵĸ���;
//int s[N];
//
//
//
//int main()
//{
//	n = 5;
//	//���鸳ֵ��ʱ�����ٴ�������������
//	a[0] = 1;
//	a[1] = 2;
//	a[2] = 2;
//	a[3] = 3;
//	a[4] = 5;
//
//	int res = 0;
//	//������������� int i = 0, intj = 0
//	for (int i = 0, j = 0; i < n; i++)
//	{
//		//ͳ��a[i]��������ֵĸ���;
//		s[a[i]]++;
//		//i �� j֮��������ظ�����,��s[a[i]] > 1;
//		while (s[a[i]] > 1)
//		{
//			//�������ظ�ʱһ����a[i] = a[j]
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
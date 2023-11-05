//#include  <iostream>
//
//using namespace std;
//const int N = 100010;
//int q[N];
//
//
//int main()
//{
//
//	q[0] = 1;
//	q[1] = 2;
//	q[2] = 2;
//	q[3] = 3;
//	q[4] = 3;
//	q[5] = 4;
//	int n = 6;
//	int x = 3;
//
//
//	//���ȶ���һ����ʼ����
//	int l = 0, r = n - 1;
//	while (l < r)
//	{
//		int mid = 1 + r >> 1;
//		//���q[mid] >= x,��ô���ֵ�һ�������
//		if (q[mid] >= x)
//		{
//			r = mid;
//		}
//		else l = mid + 1;
//		//����޽�,���ֳ���������ߵ�>= x����,����������ߵ���һ������x;
//		if (q[l] != x) cout << "-1 - 1" << endl;
//		else
//		{
//			cout << l << ' ' << endl;
//			int l = 0, r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r >> 1;
//				if (q[mid] <= x)
//				{
//					l = mid;
//				}
//				else r = mid - 1;
//			}
//
//			cout << l << endl;
//		}
//	}
//
//	return 0;
//}


#include <iostream>
using namespace std;

const int N = 100005;

int n, q, x, a[N];

int main()
{
	cin >> n >> q;
	for (int i = 0; i < n; i++) cin >> a[i];

	while (q--) {
		cin >> x;
		int l = 0, r = n - 1;
		//����ߵ�l;
		while (l < r) {
			int mid = (l + r) >> 1;
			if (a[mid] < x) l = mid + 1;
			else r = mid;
		}
		if (a[l] != x) cout << "-1 -1" << endl;
		int l1 = 0, r1 = n - 1;
		while (l1 < r1) {
			int mid = (l1 + r1 + 1) >> 1;
			if (a[mid] <= x) l1 = mid;
			else r = mid;
		}
		cout << l << l1 << endl;
	}

	return 0;
}



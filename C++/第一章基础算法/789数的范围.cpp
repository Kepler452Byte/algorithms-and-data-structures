#include  <iostream>

using namespace std;
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
//	//首先二分一下起始坐标
//	int l = 0, r = n - 1;
//	while (l < r)
//	{
//		int mid = 1 + r >> 1;
//		//如果q[mid] >= x,那么二分点一定在左侧
//		if (q[mid] >= x)
//		{
//			r = mid;
//		}
//		else l = mid + 1;
//		//如果无解,二分出来的最左边的>= x的数,不存在最左边的数一定大于x;
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
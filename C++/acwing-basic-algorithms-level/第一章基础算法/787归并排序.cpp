#include  <iostream>

using namespace std;

//const int N = 100010;
//int q[N], tmp[N];
//int n;
//
//void merge_sort(int q[], int l, int r)
//{
//	//���������û��Ԫ�صĻ�,����,�����ݹ�;
//	if (l >= r) return;
//	//����һλ�൱�����2;
//	int mid = (l + r) >> 1;
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//	//���ȽϵĽ������һ��������,k��¼���˼�����,i,j��ָ��
//	int k = 0, i = l, j = mid + 1;
//	//����whileѭ��
//	while (i <= mid && j <= r)
//	{
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	//���i,jû�б�����,��ʣ�µ����ݶ���tmp����
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	//�������֮��tmp�����ֵ����q��������
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//
//}
//
//int main()
//{
//	int n = 5;
//	q[0] = 3;
//	q[1] = 1;
//	q[2] = 2;
//	q[3] = 5;
// 	q[4] = 4;
//
//	merge_sort(q, 0, n - 1);
//
//	for (int i = 0; i < 5; i++) cout << q[i] << endl;
//
//	//int n;
//	//scanf("%d", &n);
//	//for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	//merge_sort(q, 0, n - 1);
//
//	//for (int i = 0; i < n; i++) printf("%d ", q[i]);
//
//	return 0;
//}
//

//int main()
//{
//	int q[6];
//	q[0] = 1;
//	q[1] = 2;
//	q[2] = 2;
//	q[3] = 3;
//	q[4] = 3;
//	q[5] = 4;
//	int n = 5;
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
//
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
/**********************������ȱ���**********************/
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 100010;
//
//int n, m;
//int h[N], e[N], ne[N], idx;
//int d[N], q[N];
//
//int bfs()
//{
//	//��ʼ�����У�
//	int hh = 0, tt = 0;
//	//��һ��Ԫ�������1;
//	q[0] = 1;
//
//
//	memset(d, -1, sizeof d);
//
//	d[1] = 0;
//
//	while (hh <= tt)
//	{
//		//����;
//		int t = q[hh++];
//		//��չÿ������ڱ�;
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			//�浱ǰ��Ԫ��;
//			int j = e[i];
//			if (d[j] == -1)
//			{
//				d[j] = d[t] + 1;
//				q[++t] = j;
//			}
//
//		}
//		return d[n];
//	}
//}
//
//int add(int a, int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//
//}
//
//
//int main()
//{
//	cin >> n >> m;
//
//	memset(h, -1, sizeof h);
//
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		add(a, b);
//	}
//
//	cout << bfs() << endl;
//
//	return 0;
//
//}
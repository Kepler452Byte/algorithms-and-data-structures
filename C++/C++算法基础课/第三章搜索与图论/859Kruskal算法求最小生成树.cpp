#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
//
//const int N = 100010;
//
//int n, m;
////�洢���鼯��
//int p[N];
//
////����һ���ṹ��洢��ͱߣ�
//struct Edge
//{
//	int a, b, w;
//
//	//����С�ں�ʹ֮�ܹ��Ƚϱ�Ȩ��
//
//	bool operator< (const Edge& W)const
//	{
//		return w < W.w;
//	}
//
//}edges[N];
//
//int find(int x)
//{
//	if (p[x] != x) p[x] = find(p[x]);
//
//	return p[x];
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, w;
//		cin >> a >> b >> w;
//
//		edges[i] = { a, b, w };
//	}
//	/*��δ���ľ��庬���ǣ���һ���ṹ������edges��������
//	����edges��ÿ��Ԫ����һ��Edge���͵Ľṹ�壬��ʾһ���ߣ�
//	���������ֶΣ�a��b��w���ֱ��ʾ�ߵ���㡢�յ��Ȩֵ��
//	����ķ�Χ�Ǵ�edges�ĵ�һ��Ԫ�ص���m��Ԫ�أ�����������
//	����m��ʾ�ߵ�����������������Ǳߵ�Ȩֵ�����մ�С�����˳�����С�
//	��δ���ʹ����C++ STL���е�sort�����������ԶԸ����������͵�Ԫ��
//	�������������顢�����ȡ�sort����Ĭ��ʹ��С�ڲ�����
//	��operator<���������������Ҫ��Edge�ṹ��������С�ڲ�������
//	���ڱȽ������ߵĴ�С��ϵ����δ�����Kruskal�㷨�еĵ�һ�������ڹ�����С��������*/
//	sort(edges, edges + m);
//
//	//��ʼ�����鼯��
//	for (int i = 0; i < n; i++) p[i] = i;
//	//��С����ö�����еıߣ�
//	int res = 0, cnt = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
//
//		//�ж�a, b�Ƿ���ͬһ�������У�
//
//		a = find(a), b = find(b);
//
//		if (a != b)
//		{
//			p[a] = b;
//			res += w;
//			cnt++;
//		}
//	}
//
//	if (cnt < n - 1) puts("impossible");
//	else cout << res << endl;
//
//	return 0;
//
//}
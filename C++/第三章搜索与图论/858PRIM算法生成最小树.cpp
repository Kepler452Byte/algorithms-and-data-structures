#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 510, INF = 0x3f3f3f3f;
//
//int n, m;
//int g[N][N];
//int dist[N];
//bool st[N];
//
//int prim()
//{
//	//����ʼ�ľ����ʼ��Ϊ�����
//	memset(dist, 0x3f, sizeof dist);
//
//	//res�洢�������ıߵĺͣ�
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//		{
//			if (!st[t] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		}
//		//˵����ǰ��ͼ������ͨ�ģ�
//		if (i && dist[t] == INF) return INF;
//		if (i) res += dist[t];
//		//���������㵽���ϵľ��룻
//		for (int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);
//		st[t] = true;
//		
//	}
//
//	return res;
//}
//
//
//
//int main()
//{
//	cin >> n >> m;
//
//	//���������֮�����رߣ�������̱߼��ɣ�
//	memset(g, 0x3f, sizeof g);
//
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		 
//		//����ͼ�������������ͼ��
//
//		g[a][b] = g[b][a] = min(g[a][b], c);
//
//	}
//
//	int t = prim();
//
//	if (t == INF) puts("impossible");
//	else cout << t << endl;
//
//	return 0;
//}
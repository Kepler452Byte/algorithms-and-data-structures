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
//	//将初始的距离初始化为正无穷；
//	memset(dist, 0x3f, sizeof dist);
//
//	//res存储生成树的边的和；
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int t = -1;
//		for (int j = 1; j <= n; j++)
//		{
//			if (!st[t] && (t == -1 || dist[t] > dist[j]))
//				t = j;
//		}
//		//说明当前的图不是连通的；
//		if (i && dist[t] == INF) return INF;
//		if (i) res += dist[t];
//		//更新其他点到集合的距离；
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
//	//如果两个点之间有重边，保留最短边即可；
//	memset(g, 0x3f, sizeof g);
//
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		 
//		//无向图就是特殊的有向图；
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
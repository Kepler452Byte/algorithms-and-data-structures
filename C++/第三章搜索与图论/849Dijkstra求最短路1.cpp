#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 510;
//
//int n, m;
//int g[N][N];
//int dist[N];
//当前已经确定最短距离的点
//bool st[N];
//
//int dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);     //初始化距离  0x3f代表无限大
//
//    dist[1] = 0;  //第一个点到自身的距离为0
//
//    for (int i = 0; i < n; i++)      //有n个点所以要进行n次 迭代
//    {
//        int t = -1;       //t存储当前访问的点
//
//        for (int j = 1; j <= n; j++)   //这里的j代表的是从1号点开始
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        st[t] = true;
//
//        for (int j = 1; j <= n; j++)           //更新一下其他所有点到起点的距离
//            dist[j] = min(dist[j], dist[t] + g[t][j]);
//    }
//
//    if (dist[n] == 0x3f3f3f3f) return -1;  //如果第n个点路径为无穷大即不存在最低路径
//    return dist[n];
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//
//	memset(g, 0x3f, sizeof g);
//
//	while (m--)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		//题目中有重边,g[a][b]存储a到b最短的那条边;
//		g[a][b] = min(g[a][b], c);
//	}
//
//	int t = dijkstra();
//
//	printf("%d\n", t);
//
//	return 0;
//}
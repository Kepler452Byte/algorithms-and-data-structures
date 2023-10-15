//宽度优先;
#include <cstring>
#include <iostream>
#include <queue>

using namespace std;
//
//typedef pair<int, int> PII;
//const int N = 110;
//
//int n, m;
//
////存储迷宫地图
//int g[N][N];
////存储每个点到入口的距离
//int d[N][N];
//PII q[N * N];
////将bfs路径存储;
//PII Prev[N][N];
//
//
//int bfs()
//{
//	int hh = 0, tt = 0;
//
//	q[0] = { 0,0 };
//
//	memset(d, -1, sizeof d);
//	d[0][0] = 0;
//
//	int dx[4] = { -1, 0, 1, 0 }, dy[4] = {0, 1, 0, -1};
//
//	while (hh <= tt)
//	{
//		auto t = q[hh++];
//		//向上下左右判断是否有路径;
//		for (int i = 0; i < 4; i++)
//		{
//			int x = t.first + dx[i];
//			int y = t.second + dy[i];
//			if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1)
//			{
//				//当前的距离加1;
//				d[x][y] = d[t.first][t.second] + 1;
//				//保存当前路径坐标;
//				Prev[x][y] = t;
//				//当前坐标入队;
//				q[++ tt] = { x, y };
//			}
//		}
//	}
//	int x = n - 1, y = m - 1;
//	while (x || y)
//	{
//		cout << x << ' ' << y << endl;
//		auto t = Prev[x][y];
//		x = t.first, y = t.second;
//	}
//
//	return d[n - 1][m - 1];
//}
//
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			cin >> g[i][j];
//
//	cout << bfs() << endl;
//
//	return 0;
//
//}


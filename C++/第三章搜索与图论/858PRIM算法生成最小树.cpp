#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 510, INF = 0x3f3f3f3f;

int n, m;
int g[N][N];
int dist[N];
bool st[N];

int prim()
{
	//将初始的距离初始化为正无穷；
	memset(dist, 0x3f, sizeof dist);

	//res存储生成树的边的和；
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int t = -1;
		for (int j = 0; j < n; j++)
		{

		}
	}
}



int main()
{
	cin >> n >> m;

	//如果两个点之间有重边，保留最短边即可；
	memset(g, 0x3f, sizeof g);

	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		//无向图就是特殊的有向图；

		g[a][b] = g[b][a] = min(g[a][b], c);

	}

	int t = prim();

	if (t == INF) puts("impossible");
	else cout << t << endl;

	return 0;
}
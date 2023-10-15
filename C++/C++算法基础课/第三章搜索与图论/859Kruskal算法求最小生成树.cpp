#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
//
//const int N = 100010;
//
//int n, m;
////存储并查集；
//int p[N];
//
////定义一个结构体存储点和边；
//struct Edge
//{
//	int a, b, w;
//
//	//重载小于号使之能够比较边权；
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
//	/*这段代码的具体含义是，对一个结构体数组edges进行排序，
//	其中edges的每个元素是一个Edge类型的结构体，表示一条边，
//	包含三个字段：a、b和w，分别表示边的起点、终点和权值。
//	排序的范围是从edges的第一个元素到第m个元素（不包括），
//	其中m表示边的数量。排序的依据是边的权值，按照从小到大的顺序排列。
//	这段代码使用了C++ STL库中的sort函数，它可以对各种数据类型的元素
//	进行排序，如数组、容器等。sort函数默认使用小于操作符
//	（operator<）进行排序，因此需要在Edge结构体中重载小于操作符，
//	用于比较两条边的大小关系。这段代码是Kruskal算法中的第一步，用于构建最小生成树。*/
//	sort(edges, edges + m);
//
//	//初始化并查集；
//	for (int i = 0; i < n; i++) p[i] = i;
//	//从小到大枚举所有的边；
//	int res = 0, cnt = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
//
//		//判断a, b是否在同一个树当中；
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
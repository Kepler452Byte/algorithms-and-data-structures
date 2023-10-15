//#include <cstring>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//
//
//using namespace std;
//
//const int N = 100010;
//
//typedef pair<int, int> PII;
//
//int n, m;
////使用邻接表存储
//int h[N], w[N], e[N], ne[N], idx;
//
//int dist[N];
////当前已经确定最短距离的点
//bool st[N];
//
//void add(int a, int b, int c)
//{
//	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//
//int dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);     //初始化距离  0x3f代表无限大
//
//    dist[1] = 0;  //第一个点到自身的距离为0
//
//	//堆里面存储的是一个pair; greater是小顶堆关键字;
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	heap.push({ 0, 1 });
//
//	while (heap.size())
//	{
//		auto t = heap.top();
//		heap.pop();
//
//		//用t去更新之后的点到起点的距离;
//		int ver = t.second, distance = t.first;
//		if (st[ver]) continue;
//		st[ver] = true;
//
//		for (int i = h[ver]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > distance + w[i])
//			{
//				dist[j] = distance + w[i];
//				heap.push({ dist[j], j });
//
//			}
//		}
//
//	}
//
//
//    if (dist[n] == 0x3f3f3f3f) return -1;  //如果第n个点路径为无穷大即不存在最低路径
//    return dist[n];
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	//将邻接表初始化为空
//	memset(h, -1, sizeof h);
//
//	while (m--)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		//题目中有重边,g[a][b]存储a到b最短的那条边;
//		add(a, b, c);
//	}
//
//	int t = dijkstra();
//
//	printf("%d\n", t);
//
//	return 0;
//}
//
////升序队列
////priority_queue <int, vector<int>, greater<int> > q;
////降序队列
////priority_queue <int, vector<int>, less<int> >q;
//
////greater和less是std实现的两个仿函数（就是使一个类的使用看上去像一个函数。
//// 其实现就是类中实现一个operator()，这个类就有了类似函数的行为，就是一个仿函数类了）
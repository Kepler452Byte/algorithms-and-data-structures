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
//typedef pair<int, int> pii;
//
//int n, m;
////使用邻接表存储
//int h[N], w[N], e[N], ne[N], idx;
//
//int dist[N], cnt[N];
////当前已经确定最短距离的点
//bool st[N];
//
//void add(int a, int b, int c)
//{
//	e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
//}
//
//int spfa()
//{
//	queue<int> q;
//	//需要将所有点放在负环当中去,从每个点出发去找负环;
//	for (int i = 1; i <= n; i++)
//	{
//		st[i] = true;
//		q.push(i);
//	}
//
//	while (q.size())
//	{
//		int t = q.front();
//		q.pop();
//
//		st[t] = false;
//
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > dist[t] + w[i])
//			{
//				dist[j] = dist[t] + w[i];
//				cnt[j] = cnt[t] + 1;
//
//				//判断路径上是否有负环;
//				if (cnt[j] >= n) return true;
//
//				if (!st[j])
//				{
//					q.push(j);
//				}
//			}
//		}
//
//	}
//
//	return false;
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
//	int t = spfa();
//
//	if (spfa()) puts("Yes");
//	else puts("No"); 
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
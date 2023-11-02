#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

/**********************深度优先遍历**********************/

//const int N = 100010, M = N * 2;
//
//int n, m;
////h[N]链表的头指针,e[M]链表元素,ne[M]元素下一个指针;
//int h[N], e[M], ne[M], idx;
////开一个bool数组记录哪些点已经被遍历过了;
//bool st[N];
//
//int ans = N;
//
//void add(int a, int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
////返回以u为根的子树中点的数量;
//int dfs(int u)
//{
//	//标记当前的节点已经被遍历过了;
//	st[u] = true;
//	//sum:当前的子树的大小,res:将当前点删除后连通块大小的最大值;
//	int sum = 1, res = 0;
//	//遍历u的邻接链表,i = -1时完成遍历;
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		//如果j没有被遍历过,从j开始作为头节点遍历;
//		if (!st[j])
//		{
//			//用s来表示当前子树j的大小;
//			int s = dfs(j);
//			//返回子树的最大值;
//			res = max(res, s);
//			sum += s;
//		}
//	} 
//
//	//将res与非子树的值比较;
//	res = max(res, n - sum);
//	//与结果比较;
//	ans = min(res, ans);
//
//	return sum;
//}
//
//int main()
//{
//	//将所有的头节点初始化指向-1;
//	memset(h, -1, sizeof h);
//	cin >> n;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		//题目中的是无向图;
//		add(a, b), add(b, a);
//	}
//	dfs(1);
//
//	cout << ans << endl;
//	return 0;
//}



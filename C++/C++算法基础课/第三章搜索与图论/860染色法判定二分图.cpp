#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 100010, M = 200010;
//
//int n, m;
//int h[N], e[M], ne[M], idx;
//int color[N];
//
//void add(int a, int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
//bool dfs(int u, int c)
//{
//	color[u] = c;
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		//�����ǰ�Ľڵ�û�б�Ⱦɫ��ôȾɫ��
//		if (!color[j])
//		{
//			if (!dfs(j, 3 - c)) return false;
//		}
//		else if (color[j] == c) return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	memset(h, -1, sizeof h);
//
//	while (m--)
//	{
//		int a, b;
//		cin >> a >> b;
//		//�������Ҫ�����飻
//		add(a, b);
//		add(b, a);
//	}
//
//	bool flag = true;
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (!color[i])
//		{
//			if (!dfs(i, 1))
//			{
//				flag = false;
//				break;
//			}
//		}
//	}
//
//	if (flag) puts("Yes");
//	else puts("No");
//
//	return 0;
//}
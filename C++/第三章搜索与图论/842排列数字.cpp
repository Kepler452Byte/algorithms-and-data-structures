#include <iostream>

using namespace std;

//DFS����;

//const int N = 7;
//int n;
//int path[N];
////��һ����������,��¼��λ���Ƿ��ù���;
//bool st[N];
//
//void dfs(int u)
//{
//	//��������ɵ�ʱ����u = n;��path�������;
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)
//			cout << path[i];
//
//		//��һ��return֮����st[i] = false;��ʱu��ֵΪ2;
//		return;
//	}
//	//u < n ʱö��һ�µ�ǰλ�ÿ�������Щ��;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			path[u] = i;
//			st[i] = true;
//			//�ݹ��ߵ���һ��;
//			dfs(u + 1);
//			//��һ�εݹ����,���һ����֮��,ֱ�ӵ�����,��ʱi = 3�ָ��ֳ�;
//			st[i] = false;
//		}
//
//	}
//}
//
//int main()
//{
//	cin >> n;
//
//	dfs(0);
//
//	return 0;
//}

///**********************�ʼ�**********************/
///*https://www.acwing.com/solution/content/30988/ */
///**********************�ʼ�**********************/
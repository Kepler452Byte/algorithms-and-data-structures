#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

/**********************������ȱ���**********************/

//const int N = 100010, M = N * 2;
//
//int n, m;
////h[N]�����ͷָ��,e[M]����Ԫ��,ne[M]Ԫ����һ��ָ��;
//int h[N], e[M], ne[M], idx;
////��һ��bool�����¼��Щ���Ѿ�����������;
//bool st[N];
//
//int ans = N;
//
//void add(int a, int b)
//{
//	e[idx] = b, ne[idx] = h[a], h[a] = idx++;
//}
//
////������uΪ���������е������;
//int dfs(int u)
//{
//	//��ǵ�ǰ�Ľڵ��Ѿ�����������;
//	st[u] = true;
//	//sum:��ǰ�������Ĵ�С,res:����ǰ��ɾ������ͨ���С�����ֵ;
//	int sum = 1, res = 0;
//	//����u���ڽ�����,i = -1ʱ��ɱ���;
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		//���jû�б�������,��j��ʼ��Ϊͷ�ڵ����;
//		if (!st[j])
//		{
//			//��s����ʾ��ǰ����j�Ĵ�С;
//			int s = dfs(j);
//			//�������������ֵ;
//			res = max(res, s);
//			sum += s;
//		}
//	} 
//
//	//��res���������ֵ�Ƚ�;
//	res = max(res, n - sum);
//	//�����Ƚ�;
//	ans = min(res, ans);
//
//	return sum;
//}
//
//int main()
//{
//	//�����е�ͷ�ڵ��ʼ��ָ��-1;
//	memset(h, -1, sizeof h);
//	cin >> n;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		//��Ŀ�е�������ͼ;
//		add(a, b), add(b, a);
//	}
//	dfs(1);
//
//	cout << ans << endl;
//	return 0;
//}



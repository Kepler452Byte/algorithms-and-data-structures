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
////ʹ���ڽӱ�洢
//int h[N], w[N], e[N], ne[N], idx;
//
//int dist[N], cnt[N];
////��ǰ�Ѿ�ȷ����̾���ĵ�
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
//	//��Ҫ�����е���ڸ�������ȥ,��ÿ�������ȥ�Ҹ���;
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
//				//�ж�·�����Ƿ��и���;
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
//	//���ڽӱ��ʼ��Ϊ��
//	memset(h, -1, sizeof h);
//
//	while (m--)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		//��Ŀ�����ر�,g[a][b]�洢a��b��̵�������;
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
////�������
////priority_queue <int, vector<int>, greater<int> > q;
////�������
////priority_queue <int, vector<int>, less<int> >q;
//
////greater��less��stdʵ�ֵ������º���������ʹһ�����ʹ�ÿ���ȥ��һ��������
//// ��ʵ�־�������ʵ��һ��operator()���������������ƺ�������Ϊ������һ���º������ˣ�
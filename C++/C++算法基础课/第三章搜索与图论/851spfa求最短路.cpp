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
//int dist[N];
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
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//
//	queue<int> q;
//	q.push(1);
//	st[1] = true;
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
//				if (!st[j])
//				{
//					q.push(j);
//				}
//			}
//		}
//
//	}
//
//	if (dist[n] == 0x3f3f3f) return -1;
//	return dist[n];
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
//	if (t == -1) puts("impossible");
//	else printf("%d\n", t);
//
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
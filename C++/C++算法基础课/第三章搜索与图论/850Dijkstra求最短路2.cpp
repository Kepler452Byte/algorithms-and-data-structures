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
//int dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);     //��ʼ������  0x3f�������޴�
//
//    dist[1] = 0;  //��һ���㵽����ľ���Ϊ0
//
//	//������洢����һ��pair; greater��С���ѹؼ���;
//	priority_queue<PII, vector<PII>, greater<PII>> heap;
//	heap.push({ 0, 1 });
//
//	while (heap.size())
//	{
//		auto t = heap.top();
//		heap.pop();
//
//		//��tȥ����֮��ĵ㵽���ľ���;
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
//    if (dist[n] == 0x3f3f3f3f) return -1;  //�����n����·��Ϊ����󼴲��������·��
//    return dist[n];
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
//	int t = dijkstra();
//
//	printf("%d\n", t);
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
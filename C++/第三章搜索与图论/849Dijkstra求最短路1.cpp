#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 510;
//
//int n, m;
//int g[N][N];
//int dist[N];
//��ǰ�Ѿ�ȷ����̾���ĵ�
//bool st[N];
//
//int dijkstra()
//{
//    memset(dist, 0x3f, sizeof dist);     //��ʼ������  0x3f�������޴�
//
//    dist[1] = 0;  //��һ���㵽����ľ���Ϊ0
//
//    for (int i = 0; i < n; i++)      //��n��������Ҫ����n�� ����
//    {
//        int t = -1;       //t�洢��ǰ���ʵĵ�
//
//        for (int j = 1; j <= n; j++)   //�����j������Ǵ�1�ŵ㿪ʼ
//            if (!st[j] && (t == -1 || dist[t] > dist[j]))
//                t = j;
//
//        st[t] = true;
//
//        for (int j = 1; j <= n; j++)           //����һ���������е㵽���ľ���
//            dist[j] = min(dist[j], dist[t] + g[t][j]);
//    }
//
//    if (dist[n] == 0x3f3f3f3f) return -1;  //�����n����·��Ϊ����󼴲��������·��
//    return dist[n];
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//
//	memset(g, 0x3f, sizeof g);
//
//	while (m--)
//	{
//		int a, b, c;
//		scanf("%d%d%d", &a, &b, &c);
//		//��Ŀ�����ر�,g[a][b]�洢a��b��̵�������;
//		g[a][b] = min(g[a][b], c);
//	}
//
//	int t = dijkstra();
//
//	printf("%d\n", t);
//
//	return 0;
//}
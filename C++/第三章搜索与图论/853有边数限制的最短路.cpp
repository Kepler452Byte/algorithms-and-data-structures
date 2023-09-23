//#include<iostream>
//#include<cstring>
//
//using namespace std;
//
//const int N = 510, M = 10010;
//
//struct Edge {
//    int a;
//    int b;
//    int w;
//} e[M];//��ÿ���߱�����������
//int dist[N];
//int back[N];//���������ֹ����
//int n, m, k;//k�������·��������k����
//
//int bellman_ford() {
//    memset(dist, 0x3f, sizeof dist);
//    dist[1] = 0;
//    for (int i = 0; i < k; i++) {//k��ѭ��
//        memcpy(back, dist, sizeof dist);
//        for (int j = 0; j < m; j++) {//�������б�
//            int a = e[j].a, b = e[j].b, w = e[j].w;
//            dist[b] = min(dist[b], back[a] + w);
//            //ʹ��backup:�����a���º��������b, ����bһ�������·���Ͷ��������߳���
//        }
//    }
//    if (dist[n] > 0x3f3f3f3f / 2) return -1;
//    else return dist[n];
//
//}
//
//int main() {
//    scanf("%d%d%d", &n, &m, &k);
//    for (int i = 0; i < m; i++) {
//        int a, b, w;
//        scanf("%d%d%d", &a, &b, &w);
//        e[i] = { a, b, w };
//    }
//    int res = bellman_ford();
//    if (res == -1) puts("impossible");
//    else cout << res;
//
//    return 0;
//}

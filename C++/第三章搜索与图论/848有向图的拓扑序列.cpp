
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

//const int N = 100010;
//int h[N], e[N], ne[N], idx;
//int n, m;
//int q[N], d[N];//q��ʾ����,d��ʾ������
//
//void add(int a, int b)
//{
//    e[idx] = b;
//    ne[idx] = h[a];
//    h[a] = idx++;
//}
//
//bool topsort()
//{
//    int hh = 0, tt = -1;
//    for (int i = 1; i <= n; i++)
//        if (!d[i])
//            q[++tt] = i;//�����Ϊ��ĵ����
//    while (hh <= tt)
//    {
//        int t = q[hh++];
//        for (int i = h[t]; i != -1; i = ne[i])
//        {
//            int j = e[i];
//            d[j]--;//ɾ����tָ���j�ı�
//            if (d[j] == 0)//�����j�����Ϊ����,�ͽ���j���
//                q[++tt] = j;
//        }
//    }
//    return tt == n - 1;
//    //��ʾ���n���㶼����˻�,��ô��ͼΪ����ͼ,����true,���򷵻�false
//}
//
//int main()
//{
//    cin >> n >> m;
//    memset(h, -1, sizeof(h));//�������ʱ�����������û�м�����һ��
//    for (int i = 0; i < m; i++)
//    {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        add(a, b);//��Ϊ��aָ��b,����b������Ҫ��1
//        d[b]++;
//    }
//    if (topsort())
//    {
//        for (int i = 0; i < n; i++)
//            printf("%d ", q[i]);
//        //���Ϸ�ѭ�����Է��ֶ����еĵ�Ĵ��������������
//        //ע:�������еĴ𰸲���Ψһ,���Դӽ������ҵ�����
//        puts("");
//    }
//    else
//        puts("-1");
//
//    return 0;
//}



#include<iostream>

using namespace std;

//const int N = 100010;
//int p[N];//����������
//
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    /*
//    ���������Է���,ÿ��������ֻ�����ڽڵ��p[x]ֵ�������Լ�,��:
//    p[x]=x;
//    */
//    return p[x];
//    //�ҵ��˱㷵�����ڽڵ��ֵ
//}
//
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; i++) p[i] = i;
//    while (m--)
//    {
//        char op[2];
//        int a, b;
//        scanf("%s%d%d", op, &a, &b);
//        if (*op == 'M') p[find(a)] = find(b);//���Ϻϲ�����
//        else
//            if (find(a) == find(b))
//                //������ڽڵ�һ��,�����yes
//                printf("Yes\n");
//            else
//                printf("No\n");
//    }
//    return 0;
//}
//

#include<iostream>

using namespace std;

//const int N = 100010;
//int p[N];//定义多个集合
////size 是C++ 里面的一个关键字，不能使用
//int blocksize[N];
////使用size来维护集合的大小
//
////使用一个集合来维护连通块
//
//int find(int x)
//{
//    if (p[x] != x) p[x] = find(p[x]);
//    /*
//    经上述可以发现,每个集合中只有祖宗节点的p[x]值等于他自己,即:
//    p[x]=x;
//    */
//    return p[x];
//    //找到了便返回祖宗节点的值
//}
//
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; i++)
//    {
//        p[i] = i;
//        //每个块的初始大小为1
//        blocksize[i] = 1;
//    }
//        
//    while (m--)
//    {
//        char op[2];
//        int a, b;
//        scanf("%s%d%d", op, &a, &b);
//        if (*op == 'M') p[find(a)] = find(b);//集合合并操作
//        else
//            if (find(a) == find(b))
//                //如果祖宗节点一样,就输出yes
//                printf("Yes\n");
//            else
//                printf("No\n");
//    }
//    return 0;
//}



/**********************笔记**********************/
/*
1. 算法中的按秩合并是一种优化并查集的方法，它的目的
是在合并两个不相交集合时，让秩小的树（秩可以理解为树
高）依附到秩大的树上，从而减少树的高度，提高查询效率



*/

/**********************笔记**********************/
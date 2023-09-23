#include <iostream>

using namespace std;

//const int N = 1010;
//
//int n, m, q;
////a是原矩阵,b是差分矩阵
//int a[N][N], b[N][N];
//
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//	b[x1][y1] += c;
//	b[x2 + 1][y1] -= c;
//	b[x1][y2 + 1] -= c;
//	b[x2][y2] += c;
//
//}
//
//int main()
//{
//	//读入数组a;
//
//	//先假定a数组是空的,进行n * m 个插入操作;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			insert(i, j, i, j, a[i][j]);
//
//	//进行操作
//
//	//求前缀和
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			//b[i][j]直接返回前缀和
//			b[i][j] += b[i - 1][j] + b[i][j = 1] - b[i - 1][j - 1];
//
//	//结果输出
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= m; j++)
//			cout << b[i][j];
//
//	return 0;
//}
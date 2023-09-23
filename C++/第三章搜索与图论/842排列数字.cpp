#include <iostream>

using namespace std;

//DFS问题;

//const int N = 7;
//int n;
//int path[N];
////开一个布尔数组,记录该位置是否被用过了;
//bool st[N];
//
//void dfs(int u)
//{
//	//当遍历完成的时候有u = n;将path输出即可;
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++)
//			cout << path[i];
//
//		//第一次return之后到了st[i] = false;此时u的值为2;
//		return;
//	}
//	//u < n 时枚举一下当前位置可以填哪些数;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			path[u] = i;
//			st[i] = true;
//			//递归走到下一层;
//			dfs(u + 1);
//			//第一次递归结束,输出一组数之后,直接到这里,此时i = 3恢复现场;
//			st[i] = false;
//		}
//
//	}
//}
//
//int main()
//{
//	cin >> n;
//
//	dfs(0);
//
//	return 0;
//}

///**********************笔记**********************/
///*https://www.acwing.com/solution/content/30988/ */
///**********************笔记**********************/
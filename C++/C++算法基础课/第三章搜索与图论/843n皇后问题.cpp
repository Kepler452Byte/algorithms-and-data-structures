#include <iostream>

using namespace std;

//DFS问题;

//const int N = 20;
//int n;
//char g[N][N];
////开几个bool数组记录行，对角线，反对角线是否满足条件;
//bool row[N],col[N], dg[N], udg[N];

/**********************第一种顺序**********************/

//void dfs(int u)
//{
//	//当遍历完成的时候有u = n;将path输出即可;
//	if (u == n)
//	{
//		for (int i = 0; i < n; i++) puts(g[i]);
//		//换行
//		puts("");
//		//第一次return之后到了st[i] = false;此时u的值为2;
//		return;
//	}
//	//u < n 时枚举一下当前位置可以填哪些数;
//	for (int i = 0; i < n; i++)
//	{
//		if (!col[i] && !dg[u + i] && !udg[n - u + i])
//		{
//			//放置皇后
//			g[u][i] = 'Q';
//			//标记此处不能放皇后
//			col[i] = dg[u + i] = udg[n - u + i] = true;
//			//递归走到下一层;
//			dfs(u + 1);
//			//第一次递归结束,输出一组数之后,直接到这里,此时i = 3恢复现场;
//			col[i] = dg[u + i] = udg[n - u + i] = false;
//			g[u][i] = '.';
//		}
//
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			g[i][j] = '.';
//
//
//	dfs(0);
//
//	return 0;
//}


/**********************第二种顺序**********************/

//void dfs(int x, int y, int s)
//{
//	//这个时候要出界了,让y回到开始的地方;
//	if (y == n)
//	{
//		y = 0, x++;
//	}//此时到了最后一行,输出结果
//
//	if (x == n)
//	{
//		//所有皇后的位置都放好了;
//		if (s == n)
//		{
//			//puts(g[i])效果是每一行作为字符串输出,行与行之间有空格;
//			for (int i = 0; i < n; i++) puts(g[i]);
//			puts("");
//		}
//		return;
//	}
//	
//	dfs(x, y + 1, s);
//
//	//放置皇后;
//	if (!row[x] && !col[y] && !dg[x + y] && !udg[n - y + x])
//	{
//		//放置皇后
//		g[x][y] = 'Q';
//		//标记此处不能放皇后
//		row[x] = col[y] = dg[x + y] = udg[n - y + x] = true;
//		//不满足条件走到下一格;
//		dfs(x, y + 1, s + 1);
//		//第一次递归结束,输出一组数之后,直接到这里,此时i = 3恢复现场;
//		row[x] = col[y] = dg[x + y] = udg[n - y + x] = false;
//		g[x][y] = '.';
//	}
//}
//
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			g[i][j] = '.';
//
//	//从左上角开始搜索;
//	dfs(0, 0, 0);
//
//	return 0;
//}

///**********************笔记**********************/
///*https://www.acwing.com/solution/content/30988/ */
///**********************笔记**********************/
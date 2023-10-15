#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 10010;
////每个节点的子节点最多就是26个英文字母,cnt[N]存储相应的单词有多少个,idx与单链表相同表示当前用到的下标
//int son[N][26],cnt[N], idx;//下标是0的点,既是根节点又是空节点
//
////插入
//void insert(char str[])
//{
//	//设置根节点p = 0
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		//如果没有子节点,那就创建子节点
//		if (! son[p][u]) son[p][u] = ++idx;
//		p = son[p][u];
//	} 
//	//统计以son[p][n]为字母为单词末尾的单词个数
//	cnt[p]++;
//	
//}
//
////查询
//int	query(char str[])
//{
//	//设置查询的起点
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u]) return 0;
//		//存在就继续查找
//		p = son[p][u];
//	}
//
//	return cnt[p];
//}
//
//
//int main()
//{
//	char str1[5] = "abcd";
//	char str2[5] = "abcd";
//	char str3[5] = "asdd";
//	char str4[5] = "arfd";
//	char str5[5] = "abcd";
//
//	insert(str1);
//	insert(str2);
//	insert(str3);
//	insert(str4);
//	insert(str5);
//
//	cout << query(str1);
//
//
//
//}
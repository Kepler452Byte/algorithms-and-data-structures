#include <iostream>

using namespace std;

//const int N = 10010, M = 10010;

//int ne[N];

//int main()
//{
//	int n = 9, m = 5;
//	//next数组下标从开始,需要初试字符所有下标都加一个1
//	char p[N] = "*abacabaaa", s[M] = "*ababa";
//	
//	for (int i = 2, j = 0; i <= n; i++)
//	{
//		//这里的i从2开始是由于next数组必须要有两个字符才能比较前后缀
//		//可以以"ABACABA"举例便可得到
//
//		/*每当j && p[j + 1] != p[i]的时候，已经匹配了当前最长的前后缀，
//		* 这个时候可以用当前生成的next数组表直接移动p[j + 1]的位置
//		*使得p[j + 1]串的部分前缀与p[i]的部分后缀匹配，并继续匹配两
//		*者的前后缀。这是KMP算法的精髓。
//		*/
// 		while (j && p[i] != p[j + 1]) j = ne[j];
//
//		//每次j ++，就更新一次next数组表
//		if (p[i] == p[j + 1]) j ++;
//		ne[i] = j;
//	}
//
//	//kmp匹配过程
//	for (int i = 1, j = 0; i <= m; i++)
//	{
//		//这里i = 1, j = 0是因为这是两个字符串的比较
//		while (j && s[i] != p[j + 1]) j = ne[j];
//		if (s[i] == p[j + 1]) j++;
//		if (j == n)
//		{
//			cout << i - n << endl;
//			j = ne[j];
//		}
//	}
//
//	//cout << ne[N];
//	return 0;
//}
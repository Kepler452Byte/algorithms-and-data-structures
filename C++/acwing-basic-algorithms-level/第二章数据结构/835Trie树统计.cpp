#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 10010;
////ÿ���ڵ���ӽڵ�������26��Ӣ����ĸ,cnt[N]�洢��Ӧ�ĵ����ж��ٸ�,idx�뵥������ͬ��ʾ��ǰ�õ����±�
//int son[N][26],cnt[N], idx;//�±���0�ĵ�,���Ǹ��ڵ����ǿսڵ�
//
////����
//void insert(char str[])
//{
//	//���ø��ڵ�p = 0
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		//���û���ӽڵ�,�Ǿʹ����ӽڵ�
//		if (! son[p][u]) son[p][u] = ++idx;
//		p = son[p][u];
//	} 
//	//ͳ����son[p][n]Ϊ��ĸΪ����ĩβ�ĵ��ʸ���
//	cnt[p]++;
//	
//}
//
////��ѯ
//int	query(char str[])
//{
//	//���ò�ѯ�����
//	int p = 0;
//	for (int i = 0; str[i]; i++)
//	{
//		int u = str[i] - 'a';
//		if (!son[p][u]) return 0;
//		//���ھͼ�������
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
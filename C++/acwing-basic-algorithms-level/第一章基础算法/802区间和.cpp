#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//typedef pair<int, int> PII;
//
//const int N = 300010;
//
//int n, m;
////a�Ǵ����,s��ǰ׺��;
//int a[N], s[N];
//
////�洢������Ҫ��ɢ����ֵ;
//vector<int> alls;
//
//vector<PII> add, query;
//
////��x��ɢ��֮��Ľ��;
////��xӳ�䵽��1��ʼ��ֵ;
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	//�ҵ� >= x ��С��һ����;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (alls[mid] >= x) r = mid;
//		else l = mid + 1;
//	}
//	return r + 1; 
//}
//
//int main()
//{
//	cin >> n >> m;
//	//���Ƚ����еĲ������������;
//	//Ȼ�������õ����±�ȫ����ɢ��;
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		//���±�x��λ�ò���c;
//		cin >> x >> c;
//		//
//		add.push_back({ x, c });
//		//��x������ɢ����������;
//		alls.push_back(x);
//	}
//	//�������е���������
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		query.push_back({l, r});
//
//		//�������õ����±궼������alls������;
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//
//	//��alls�������ȥ��;
//	sort(alls.begin(), alls.end());
//	//unique�������ǰ�alls���ظ���Ԫ��ɾ��,�Ѳ��ظ���Ԫ�طŵ������ǰ��ȥ,��������������һ��λ��;
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//	//ʵ�����ֲ���,����;
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//
//	//Ԥ����ǰ׺��;
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//
//	//�����ѯ
//	for (auto item : query)
//	{
//		int l = find(item.first), r = find(item.second);
//		cout << s[r] - s[l - 1] << endl;
//	}
//	return 0;
//} 
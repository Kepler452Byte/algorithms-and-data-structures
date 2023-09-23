#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//typedef pair<int, int> PII;
//
//const int N = 300010;
//
//int n, m;
////a是存的数,s是前缀和;
//int a[N], s[N];
//
////存储所有需要离散化的值;
//vector<int> alls;
//
//vector<PII> add, query;
//
////求x离散化之后的结果;
////将x映射到从1开始的值;
//int find(int x)
//{
//	int l = 0, r = alls.size() - 1;
//	//找到 >= x 最小的一个数;
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
//	//首先将所有的插入操作读进来;
//	//然后将所有用到的下标全部离散化;
//	for (int i = 0; i < n; i++)
//	{
//		int x, c;
//		//在下标x的位置插入c;
//		cin >> x >> c;
//		//
//		add.push_back({ x, c });
//		//将x加入离散化的数组中;
//		alls.push_back(x);
//	}
//	//读入所有的左右区间
//	for (int i = 0; i < m; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		query.push_back({l, r});
//
//		//将所有用到的下标都放在了alls数组中;
//		alls.push_back(l);
//		alls.push_back(r);
//	}
//
//	//对alls数组进行去重;
//	sort(alls.begin(), alls.end());
//	//unique函数就是把alls中重复的元素删除,把不重复的元素放到数组的前面去,返回新数组的最后一个位置;
//	alls.erase(unique(alls.begin(), alls.end()), alls.end());
//
//	//实现两种操作,插入;
//	for (auto item : add)
//	{
//		int x = find(item.first);
//		a[x] += item.second;
//	}
//
//	//预处理前缀和;
//	for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];
//
//	//处理查询
//	for (auto item : query)
//	{
//		int l = find(item.first), r = find(item.second);
//		cout << s[r] - s[l - 1] << endl;
//	}
//	return 0;
//} 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;   
//first区间左端点,second区间右断点;
//typedef pair<int, int> PII;
//
//const int N = 100010;
////区间个数;
//int n;
//vector<PII> segs;
//
//void merge(vector<PII>& segs)
//{
//	vector<PII> res;
//	//先将所有区间排序;
//	//C ++中的pair排序是先将左端点排序,再对右端点排序;
//	sort(segs.begin(), segs.end());
//	 
//	int st = -2e9, ed = -2e9;
//	for (auto seg : segs)
//	{
//		//区间的末尾小于当前的区间,两个区间没有交集;
//		if (ed < seg.first)
//		{
//			//(st != -2e9)防止区间为空;
//			if (st != -2e9) res.push_back({ st, ed });
//			//初始化
//			st = seg.first, ed = seg.second;
//		}//否则两个区间有交集,合并区间;
//		else ed = max(ed, seg.second);
//	}
//	//将最后一个区间加入;
//	if (st != -2e9) res.push_back({ st, ed });
//
//	segs = res;
//}
//
//
//int main()
//{
//	cin >> n;
//	//读取区间;
//	for (int i = 0; i < n; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		segs.push_back({ l, r });
//
//	}
//
//	//区间合并;
//	merge(segs);
//
//		//合并之后返回区间的长度;
//	cout << segs.size() << endl;
//	return 0;
//}
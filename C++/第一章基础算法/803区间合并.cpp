#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;   
//first������˵�,second�����Ҷϵ�;
//typedef pair<int, int> PII;
//
//const int N = 100010;
////�������;
//int n;
//vector<PII> segs;
//
//void merge(vector<PII>& segs)
//{
//	vector<PII> res;
//	//�Ƚ�������������;
//	//C ++�е�pair�������Ƚ���˵�����,�ٶ��Ҷ˵�����;
//	sort(segs.begin(), segs.end());
//	 
//	int st = -2e9, ed = -2e9;
//	for (auto seg : segs)
//	{
//		//�����ĩβС�ڵ�ǰ������,��������û�н���;
//		if (ed < seg.first)
//		{
//			//(st != -2e9)��ֹ����Ϊ��;
//			if (st != -2e9) res.push_back({ st, ed });
//			//��ʼ��
//			st = seg.first, ed = seg.second;
//		}//�������������н���,�ϲ�����;
//		else ed = max(ed, seg.second);
//	}
//	//�����һ���������;
//	if (st != -2e9) res.push_back({ st, ed });
//
//	segs = res;
//}
//
//
//int main()
//{
//	cin >> n;
//	//��ȡ����;
//	for (int i = 0; i < n; i++)
//	{
//		int l, r;
//		cin >> l >> r;
//		segs.push_back({ l, r });
//
//	}
//
//	//����ϲ�;
//	merge(segs);
//
//		//�ϲ�֮�󷵻�����ĳ���;
//	cout << segs.size() << endl;
//	return 0;
//}
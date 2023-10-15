/*C++ ��STL����

vector:�䳤����,����ĳ��ȿ��Զ�̬�任;��������;
	size() ����Ԫ�ظ���;
	empty() ����Ԫ���Ƿ�Ϊ��;
	*clear()���о�û�����;
	* front()/back();
	* push_back()/pop_back();
	* begin()���ص�һ����/end()�������һ�����������//vector�ĵ�����;
	* ֧�ֱȽ�����,���ֵ���;
	* vector���Ż�Ŀ��ʱ�����������,���ǿ����˷�����ռ�;
	* ϵͳΪĳһ�������ռ�ʱ,����ʱ����ռ��С�޹�,����������й�; 

pair<int, int>
	ʵ����һ���ṹ��,�����Դ�����;
	make_pair();
	p.first;p.second;ȡpair�ĵ�һ����ڶ���Ԫ��;
	֧�ֱȽ�����;
	��pair�洢3����ͬ�Ķ���:pair<int, pair<int, int>>;

string:�ַ���,substr()�����ַ����Ӵ�;c_str()�����ַ������ͷָ��;
	size()/length();������ĸ����;
	empty();
	clear();
	substring(int, int)����1:�ڼ�����ʼ;����2:�Ӵ��ĳ���;
	���û�еڶ�������,��������һ����ĸΪֹ; 
	��printf����ַ���ʱ,�����ַ������׵�ַ,������c_str()��ʵ��;

queue:push()����β����;front()���ض�ͷԪ��;pop()�Ѷ�ͷ����;
	 û��clear()����;

priority_queue:���ȶ�����ʵ��һ����;
	push()�����������Ԫ��;
	top()���ضѶ�,pop()�ѶѶ�����;
	Ĭ���Ǵ����;Ҫ�ȹ���С��������в��븺������
	priorty_queue<int> heap;
	���ȶ��б�С����
	#include <queue>
	#include <vector>
	priority_queue<int, vector<int>, greater<int>> q;��ʱq����һ��С����;

stack:ջ;
	push��ջ�����һ��Ԫ��;
	top()����ջ��Ԫ��;
	û��clear()����;

deque:˫�˶���; 
	��ͷ��β�����Բ���ɾ��;���Կ�����һ����ǿ���vector;
	��clear();
	front();
	push_back()�������һ��Ԫ��,pop_back()�������һ��Ԫ��;
	push_front()�����һ��һ��Ԫ��,pop_front()������һ��Ԫ��;



set,map,multiset,multimap:����ƽ�������ʵ��;��̬ά����������;
	size();
	empty();
	clear();
	begin()/end();֧��++,--����;ʱ�临�Ӷ�O(logN);

set/multiset;
set<int>s:
	�������ظ���Ԫ��;
	insert();֧��insertһ����;
	clear();

multiset<int>s:
	�������ظ���Ԫ��;
	insert();֧��insertһ����;
	find();�����ڷ���end������;
	count();����һ�����ĸ���;
	erase():
		(1)����һ��x,ɾ������x; O(k + logN)
		(2)����һ��������,ɾ�����������;
	���Ĳ���:lower_bound()/upper_bound();
			lower_bound():���ش��ڵ���x����;
			upper_bound():���ش���x����;

map/multimap;
	insert();���������һ��pair;
	erase();������ǲ������ߵ�����;
	find():ʱ�临�Ӷ�O(logN);
	map<string, int> a;���ַ���ӳ��Ϊ������;
	lower_bound()/upper_bound();
	map:

unodered_set, unordered_map, unordered_multiset, unordered_multimap:���ڹ�ϣ��ʵ��;
	��ɾ�Ĳ��ʱ�临�Ӷ���O(1),���ǲ�֧��lower_bound()/upper_bound();
	������++;==;

bitset:ѹλ
	bitset<10000> s;
	���Խ�ʡ8���Ŀռ�;
	<<;>>;
	count();�����ж��ٸ�1;
	any()�����Ƿ�������һ��1/none()�ж��Ƿ�ȫΪ0;
	set():������λ��Ϊ1;
	set(k, v):������λ���1;
	reset() ������λ���0;
	flip():������λȡ��;
	flip(k)�ѵ�kλȡ��;

*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

//int main()
//{
//	/**********************vector�ʼ�**********************/
//	//����һ������Ϊ10 ��vector,���ҳ�ʼ������ֵΪ3;
//	//vector<int> a(10, 3);
//	// //auto���Ա�����������
//	//for (auto x : a) cout << x << endl;
//
//	//����һ��vector����,����10��vector����;
//	//vector<int> a[10];
//
//	vector<int> a;
//	//����Ԫ��vector�ĸ���
//	a.size();
//	a.empty();
//	//�������������������������е�
//
//
//	pair<int, string>p;
//
//	/**********************vector�ʼ�**********************/
//
//
//}
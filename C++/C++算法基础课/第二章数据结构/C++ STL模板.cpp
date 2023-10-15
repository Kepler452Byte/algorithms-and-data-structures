/*C++ 的STL容器

vector:变长数组,数组的长度可以动态变换;倍增方法;
	size() 返回元素个数;
	empty() 返回元素是否为空;
	*clear()队列就没有清空;
	* front()/back();
	* push_back()/pop_back();
	* begin()返回第一个数/end()返回最后一个数后面的数//vector的迭代器;
	* 支持比较运算,按字典序;
	* vector的优化目标时减少申请次数,但是可以浪费申请空间;
	* 系统为某一程序分配空间时,所需时间与空间大小无关,与申请次数有关; 

pair<int, int>
	实现了一个结构体,并且自带函数;
	make_pair();
	p.first;p.second;取pair的第一个与第二个元素;
	支持比较运算;
	用pair存储3个不同的东西:pair<int, pair<int, int>>;

string:字符串,substr()返回字符串子串;c_str()返回字符数组的头指针;
	size()/length();返回字母个数;
	empty();
	clear();
	substring(int, int)参数1:第几个开始;参数2:子串的长度;
	如果没有第二个参数,输出到最后一个字母为止; 
	用printf输出字符串时,传入字符串的首地址,可以用c_str()来实现;

queue:push()往队尾插入;front()返回队头元素;pop()把队头弹出;
	 没有clear()函数;

priority_queue:优先队列其实是一个堆;
	push()往堆里面插入元素;
	top()返回堆顶,pop()把堆顶弹出;
	默认是大根堆;要先构造小根堆向堆中插入负数即可
	priorty_queue<int> heap;
	优先队列变小根堆
	#include <queue>
	#include <vector>
	priority_queue<int, vector<int>, greater<int>> q;这时q就是一个小根堆;

stack:栈;
	push往栈顶添加一个元素;
	top()返回栈顶元素;
	没有clear()函数;

deque:双端队列; 
	队头队尾都可以插入删除;可以看作是一个加强版的vector;
	有clear();
	front();
	push_back()插入最后一个元素,pop_back()弹出最后一个元素;
	push_front()插入第一个一个元素,pop_front()弹出第一个元素;



set,map,multiset,multimap:基于平衡二叉树实现;动态维护有序序列;
	size();
	empty();
	clear();
	begin()/end();支持++,--操作;时间复杂度O(logN);

set/multiset;
set<int>s:
	不能有重复的元素;
	insert();支持insert一个数;
	clear();

multiset<int>s:
	可以有重复的元素;
	insert();支持insert一个数;
	find();不存在返回end迭代器;
	count();返回一个数的个数;
	erase():
		(1)输入一个x,删除所有x; O(k + logN)
		(2)输入一个迭代器,删除这个迭代器;
	核心操作:lower_bound()/upper_bound();
			lower_bound():返回大于等于x的数;
			upper_bound():返回大于x的数;

map/multimap;
	insert();插入的数是一个pair;
	erase();输入的是参数或者迭代器;
	find():时间复杂度O(logN);
	map<string, int> a;将字符串映射为整型数;
	lower_bound()/upper_bound();
	map:

unodered_set, unordered_map, unordered_multiset, unordered_multimap:基于哈希表实现;
	增删改查的时间复杂度是O(1),但是不支持lower_bound()/upper_bound();
	迭代器++;==;

bitset:压位
	bitset<10000> s;
	可以节省8倍的空间;
	<<;>>;
	count();返回有多少个1;
	any()返回是否至少有一个1/none()判断是否全为0;
	set():将所有位置为1;
	set(k, v):将所有位变成1;
	reset() 把所有位变成0;
	flip():把所有位取反;
	flip(k)把第k位取反;

*/

#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

//int main()
//{
//	/**********************vector笔记**********************/
//	//定义一个长度为10 的vector,并且初始化所有值为3;
//	//vector<int> a(10, 3);
//	// //auto可以遍历所有容器
//	//for (auto x : a) cout << x << endl;
//
//	//定义一个vector数组,定义10个vector数组;
//	//vector<int> a[10];
//
//	vector<int> a;
//	//返回元素vector的个数
//	a.size();
//	a.empty();
//	//这两个函数是所有容器都具有的
//
//
//	pair<int, string>p;
//
//	/**********************vector笔记**********************/
//
//
//}
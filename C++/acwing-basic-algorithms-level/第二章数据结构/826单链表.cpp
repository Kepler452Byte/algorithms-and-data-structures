#include <iostream>
#include <algorithm>

using namespace std;

//const int N = 10010;
//
//int head, e[N], ne[N], idx;
//
//void init()
//{
//	head = -1;
//	idx = 0;
//}
//
//void add_head(int x)
//{
//	e[idx] = x, ne[idx] = head, head = idx ++;
//}
//
//void add_k(int k, int x)
//{
//	e[idx] = x, ne[idx] = ne[k], ne[k] = idx ++;
//}
//
//void remove(int k)
//{
//	ne[k] = ne[ne[k]];
//}
//
//int main()
//{
//	init();
//	add_head(0);
//	add_k(1, 1);
//	add_k(2, 2);
//	add_k(3, 3);
//	add_k(4, 4);
//	add_k(5, 5);
//
//	remove(2);
//	for (int i = 0; i < 5; i++) cout << e[i];
//	
//
//}
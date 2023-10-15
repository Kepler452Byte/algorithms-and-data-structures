#include <iostream>

using namespace std;

//int lowbit(int x)
//{
//	return x & -x;
//}
//  
////使用lowbit方法检测最后一个1；
//int main()
//{
//	int x = 10;
//	int n;
//
//	int res = 0;
//	//每次减去x中的1,减了多少次x就有多少个1;
//	while (x) x -= lowbit(x), res ++;
//
//	cout << res << endl;
//
//	return 0;
//
//} 
//#include <iostream>
//#include <algorithm>
// 
//using namespace std;
//
// const int N = 100010;
//
//int q[N];
//
////刚刚里面可能混入了什么奇怪的字符导致不通过
//void quick_sort(int q[], int l, int r)
//{
//	//如果区间内没有数，或者只有一个数，就不用排序了
//	if (l >= r) return;
//	//1. 选取分界点的值
//	int i = l - 1, j = r + 1, x = q[l + r >> 1];
//	//2. 调整区间
//	while (i < j)
//	{
//		//小于或者大于分界点，那么指针移动,直到不满足条件为止;
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//
//	//3. 然后做递归处理,以j为分界点,对两个区间进行遍历;
// //在取改区间的时候不能设置int x = q[r];否则会有边界问题；
// //对于以i为边界时会有相同的问题;
// //左i不能取x = q[l],右j不能取x = q[r];否则可能会出现无限递归的问题; 
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//
//}
//
//int main()
//{
//	int n = 5;
//	q[0] = 3;
//	q[1] = 1;
//	q[2] = 2;
//	q[3] = 4;
//	q[4] = 5;
//
//	quick_sort(q, 0, 4);
//
//	for (int i = 0; i < n; i++) cout << q[i] << endl;
//
//} 


/**************************************************************************/
//
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100010;
//
//int q[N];

//void quick_sort(int q[], int l, int r) {
//
//	int i = l -1, j = r + 1;
//	int x = q[(l + r)>>1];
//
//	if (l >= r) return;
//
//	while (i < j) {
//		do (i++); while (q[i] < x);
//		do (j--); while (q[j] > x);
//
//		if (i < j) swap(q[i], q[j]);
//	}
//	
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//
//}

//void quick_sort(int q[],int l,int r) {
//	int i = l - 1; int j = r + 1;
//	int x = q[(l + r) >> 1];
//
//	if (l >= r) return;
//
//	while (i < j) {
//		do (i++); while (q[i] < x);
//		do (j--); while (q[j] > x);
//
//		if (i < j) swap(q[i], q[j]);
//	}
//
//	quick_sort(q, l, j);
//	quick_sort(q, j + 1, r);
//}
 
// 



//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> q[i];
//	}
//	quick_sort(q, 0, n - 1);
//
//	for (int i = 0; i < n; i++) {
//		cout << q[i] << " ";
//	}
//}
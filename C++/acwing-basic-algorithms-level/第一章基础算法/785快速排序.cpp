//#include <iostream>
//#include <algorithm>
// 
//using namespace std;
//
// const int N = 100010;
//
//int q[N];
//
////�ո�������ܻ�����ʲô��ֵ��ַ����²�ͨ��
//void quick_sort(int q[], int l, int r)
//{
//	//���������û����������ֻ��һ�������Ͳ���������
//	if (l >= r) return;
//	//1. ѡȡ�ֽ���ֵ
//	int i = l - 1, j = r + 1, x = q[l + r >> 1];
//	//2. ��������
//	while (i < j)
//	{
//		//С�ڻ��ߴ��ڷֽ�㣬��ôָ���ƶ�,ֱ������������Ϊֹ;
//		do i++; while (q[i] < x);
//		do j--; while (q[j] > x);
//		if (i < j) swap(q[i], q[j]);
//	}
//
//	//3. Ȼ�����ݹ鴦��,��jΪ�ֽ��,������������б���;
// //��ȡ�������ʱ��������int x = q[r];������б߽����⣻
// //������iΪ�߽�ʱ������ͬ������;
// //��i����ȡx = q[l],��j����ȡx = q[r];������ܻ�������޵ݹ������; 
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
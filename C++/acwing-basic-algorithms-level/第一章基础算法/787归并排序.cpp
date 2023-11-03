//#include  <iostream>
//
//using namespace std;

//const int N = 100010;
//int q[N], tmp[N];
//int n;
//
//void merge_sort(int q[], int l, int r)
//{
//	//如果区间内没有元素的话,返回,结束递归;
//	if (l >= r) return;
//	//右移一位相当与除以2;
//	int mid = (l + r) >> 1;
//	merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
//	//将比较的结果存在一个数组中,k记录存了几个数,i,j是指针
//	int k = 0, i = l, j = mid + 1;
//	//设置while循环
//	while (i <= mid && j <= r)
//	{
//		if (q[i] <= q[j]) tmp[k++] = q[i++];
//		else tmp[k++] = q[j++];
//	}
//	//如果i,j没有遍历完,把剩下的数据读到tmp里面
//	while (i <= mid) tmp[k++] = q[i++];
//	while (j <= r) tmp[k++] = q[j++];
//	//排序完成之后将tmp数组的值给到q数组里面
//	for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
//
//}
//
//int main()
//{
//	int n = 5;
//	q[0] = 3;
//	q[1] = 1;
//	q[2] = 2;
//	q[3] = 5;
// 	q[4] = 4;
//
//	merge_sort(q, 0, n - 1);
//
//	for (int i = 0; i < 5; i++) cout << q[i] << endl;
//
//	//int n;
//	//scanf("%d", &n);
//	//for (int i = 0; i < n; i++) scanf("%d", &q[i]);
//
//	//merge_sort(q, 0, n - 1);
//
//	//for (int i = 0; i < n; i++) printf("%d ", q[i]);
//
//	return 0;
//}
//

//int main()
//{
//	int q[6];
//	q[0] = 1;
//	q[1] = 2;
//	q[2] = 2;
//	q[3] = 3;
//	q[4] = 3;
//	q[5] = 4;
//	int n = 5;
//	int x = 3;
//
//
//	//首先二分一下起始坐标
//	int l = 0, r = n - 1;
//	while (l < r)
//	{
//		int mid = 1 + r >> 1;
//		//如果q[mid] >= x,那么二分点一定在左侧
//		if (q[mid] >= x)
//		{
//			r = mid;
//		}
//		else l = mid + 1;
//		//如果无解,二分出来的最左边的>= x的数,不存在最左边的数一定大于x;
//		if (q[l] != x) cout << "-1 - 1" << endl;
//		else 
//		{
//			cout << l << ' ' << endl;
//
//			int l = 0, r = n - 1;
//			while (l < r)
//			{
//				int mid = l + r >> 1;
//				if (q[mid] <= x)
//				{
//					l = mid;
//				}
//				else r = mid - 1;
//			}
//
//			cout << l << endl;
//		}
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;

const int N = 100010;
int n;
int a[N];
int temp[N];

//void merge_sort(int a[], int l, int r) {
//    //只剩一个元素的时候，已经有序，返回
//    if (l >= r) return;
//
//    //寻找数组中点下标
//    int mid = (l + r) >> 1;
//    //递归给左半边排序
//    merge_sort(a, l, mid);
//    //递归给右半边排序
//    merge_sort(a, mid + 1, r);
//    //以下是合并排序好的两个数组
//
//    //k：遍历合并后的数组的下标
//    int k = 0;
//    //i:左半边数组的下标，j:右半边数组的下标
//    int i = l, j = mid + 1;
//    //左右半边都没遍历完
//    while (i <= mid && j <= r) {
//        //左边的元素小于右边的元素
//        if (a[i] < a[j])
//            //左边元素放如临时数组，并移动下标
//            temp[k++] = a[i++];
//        //否则，右边元素放入临时数组并移动下标 
//        else temp[k++] = a[j++];
//    }
//    //如果左边数组有剩余，则放入临时数组
//    while (i <= mid) temp[k++] = a[i++];
//    //如果有边数组有剩余，则放入临时数组
//    while (j <= r) temp[k++] = a[j++];
//    //把临时数组中的元素拷贝至原数组
//    k = 0;
//    for (int i = l; i <= r; i++) {
//        a[i] = temp[k++];
//    }
//
//}

//
//
//
//int main() {
//    //处理输入
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    //调用算法
//    merge_sort(a, 0, n - 1);
//    //输出到答案
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }
//}


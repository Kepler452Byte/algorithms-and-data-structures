#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1000010;

int primes[N], cnt;
bool st[N];


/*埃氏筛法*/
void get_primes1(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (!st[i])
		{
			primes[cnt++] = i;
			//删除当前质数的倍数的数;
			for (int j = i + 1; j <= n; j += i) st[j] = true;
		}
	}
}

/*线性筛法*/
void get_primes2(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (!st[i]) primes[cnt++] = i;

		for (int j = 0; primes[j] <= n/i; j++)
		{
			//1)当i%primes[j]!=0时,说明此时遍历到的primes[j]不是i的质因子，那么只可能是此时的primes[j]<i的
			//最小质因子,所以primes[j]*i的最小质因子就是primes[j];
			//2)当有i%primes[j]==0时,说明i的最小质因子是primes[j],因此primes[j]*i的最小质因子也就应该是
			//prime[j]，之后接着用st[primes[j+1]*i]=true去筛合数时，就不是用最小质因子去更新了,因为i有最小
			//质因子primes[j]<primes[j+1],此时的primes[j+1]不是primes[j+1]*i的最小质因子，此时就应该
			//退出循环，避免之后重复进行筛选。
			st[primes[j] * i] = true;
			if (i % primes[j] == 0) break;
		}

	}
}



int main()
{
	int n;
	cin >> n;

	get_primes2(n);

	cout << cnt << endl;

	return 0;
}
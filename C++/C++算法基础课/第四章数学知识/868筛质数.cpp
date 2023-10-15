#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 1000010;

int primes[N], cnt;
bool st[N];


/*����ɸ��*/
void get_primes1(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (!st[i])
		{
			primes[cnt++] = i;
			//ɾ����ǰ�����ı�������;
			for (int j = i + 1; j <= n; j += i) st[j] = true;
		}
	}
}

/*����ɸ��*/
void get_primes2(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (!st[i]) primes[cnt++] = i;

		for (int j = 0; primes[j] <= n/i; j++)
		{
			//1)��i%primes[j]!=0ʱ,˵����ʱ��������primes[j]����i�������ӣ���ôֻ�����Ǵ�ʱ��primes[j]<i��
			//��С������,����primes[j]*i����С�����Ӿ���primes[j];
			//2)����i%primes[j]==0ʱ,˵��i����С��������primes[j],���primes[j]*i����С������Ҳ��Ӧ����
			//prime[j]��֮�������st[primes[j+1]*i]=trueȥɸ����ʱ���Ͳ�������С������ȥ������,��Ϊi����С
			//������primes[j]<primes[j+1],��ʱ��primes[j+1]����primes[j+1]*i����С�����ӣ���ʱ��Ӧ��
			//�˳�ѭ��������֮���ظ�����ɸѡ��
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
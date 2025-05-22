template<typename T>
T horner(T coeff[], int n, T& x)
{//计算n次多项式的值，coeff[0:n]为系数,从高次到低次
	T vaule = coeff[n];
	for (int i = 1; i <= n; i++)
	{
		value = value * x + coeff[n - i];
	}
}

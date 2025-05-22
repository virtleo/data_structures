/*#include <stdio.h>
int main()
{
	int m,n,x,y,a;
	scanf("%d %d",&m,&n);
	for(x=m; ;x++)
	{
		if(x%m==0&&x%n==0) break;
	}
	for(y=n;y<=n;y--)
	{
		if(m%y==0&&n%y==0) break;
	}
	printf("%d %d",y,x);
	return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
	int m, n, x, y, a;
	cin >> m >> n;// scanf("%d %d", &m, &n);
	for (x = m; ; x++)
	{
		if (x % m == 0 && x % n == 0)
			break;
	}
	for (y = n; y <= n; y--)
	{
		if (m % y == 0 && n % y == 0)
			break;
	}
	cout << y << " " << x;//printf("%d %d", y, x);
	return 0;
}
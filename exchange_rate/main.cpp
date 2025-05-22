#include <iostream>
#include "exchange_rate.h"
using namespace std;
int main()
{
	USD usd(100);
	AUD aud(100);
	EUR eur(100);
	GBP gbp(100);
	JPY jpy(100);

	calculate calc1(100, &usd), calc2(100, &aud), calc3(100, &eur), calc4(100, &gbp), calc5(100, &jpy);
	calc1.getmoney();
	calc2.getmoney();
	calc3.getmoney();
	calc4.getmoney();
	calc5.getmoney();
	return 0;
}
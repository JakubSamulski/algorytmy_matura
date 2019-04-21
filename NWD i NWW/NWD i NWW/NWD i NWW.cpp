#include"pch.h"
#include <iostream>
using namespace std;

int NWD(int a, int b)
{
	while (a != b) 
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return(a);
}

int nwd(int a, int b) // nwd reurencyjnie
{
	if (b != 0)
		return nwd(b, a%b);
	else
		return a;
}

int NWW(int a, int b)
{
	return(a*b / NWD(a, b));
}

/*program do liczenia nww i nwd dwóch liczb*/

int main() {
	int a, b;
	cin >> a >> b;
	cout << "NWD = " << NWD(a, b);
	cout << "NWW = " << NWW(a, b);
}
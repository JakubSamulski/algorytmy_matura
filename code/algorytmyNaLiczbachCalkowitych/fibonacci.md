# Ciąg fibonacciego
Jest to ciąg w którym pierwszy wyraz jest równy 0, drugi jest równy 1, każdy następny jest sumą dwóch poprzednich.

Warto tutaj użyć int long long gdyż kolejne elementy robią się bardzo duże.  
Np. 50 element wynosi 12586269025 .

``` c++
int long long fib(int n)
{
	int a, b, c;
	a = 0;
	b = 1;
	for (int i = 2; i <= n; i++) {
		c = a+b;
		a = b;
		b = c;
	}
	return b;
}
```

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

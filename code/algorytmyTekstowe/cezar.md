# Szyfr Cezara
Inaczej szyfr przestawieniowy , jest to jedna z najprostszych technik szyfrowania , jednak niezbyt bezpieczna bo istnieje tylko tyle kombinacji ile liter w alfabecie czyli mało .

Polega on na przesunięciu litery o tyle ile wynosi klucz.   
![](https://raw.githubusercontent.com/DogeXD/algorytmy_matura/master/images/cezar.png)

### Szyfrowanie
``` c++
string szyfrowanie(string wyraz, int klucz)
{
	for (int i = 0; i < wyraz.size(); i++)
	{
		if (wyraz[i] + klucz < 91)
		{
			wyraz[i] += klucz;
		}
		else
		{
			wyraz[i] += klucz - 26;
		}
	}
	return wyraz;
}

```

### Deszyfrowanie

``` c++
string deszyfrowanie(string wyraz, int klucz)
{
	for (int i = 0; i < wyraz.size(); i++)
	{
		if (wyraz[i] - klucz > 64)
		{
			wyraz[i] -= klucz;
		}
		else
		{
			wyraz[i] -= klucz - 26;
		}
	}
	return wyraz;
}
```
### Przydatny link
  - [Szyfr Cezara](https://pl.wikipedia.org/wiki/Szyfr_Cezara)

### [Powrót](https://dogexd.github.io/algorytmy_matura/)


# NWD i NWW

W tym temacie nie ma większej filozofii gdyż NWD rzadko pojawia się na maturze ale i tak warto znać to zagadnienie.
NWD dwóch liczb możemy policzyć na dwa sposoby:
### metodą odejmowania

```c++
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
```
### metodą modulo
która jest szybsza
 

```c++
  int NWD(int a, int b) 
{
	int c;

	while (b != 0)
	{
		c = b;
		b = a % b;
		a = c;
	}

	return a;
}
```
NWD kilku liczb np trzech możemy policzyc poprzez :

```c++
  NWD(liczba1 ,NWD(liczba2, liczba3);
```

znając NWD mozemy bardzo łatwo policzyć NWW

```c++
  int NWW(int a, int b)
  {
    return(a*b / NWD(a, b));
  }
```

### Przydatne źródła:
 - [NWD](https://pl.wikipedia.org/wiki/Algorytm_Euklidesa)
 - [NWW](https://pl.wikipedia.org/wiki/Najmniejsza_wsp%C3%B3lna_wielokrotno%C5%9B%C4%87)
### [powrót ](/README.md)


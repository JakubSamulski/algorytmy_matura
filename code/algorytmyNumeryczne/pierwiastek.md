# Obliczanie wartości pierwiastka
Jest to bardzo fajny temat , ponieważ polega on na kwadraceniu prostkąta .  
Czy nie brzmi to fascynująco ?

### Uwaga
Oczywiście na maturze możesz użyć gotowej funkcji
``` c++
  sqrt()
```
ale kto by nie chciał doświadczyć kwadracenia.

### Metoda Newton'a Raphson'a
(Profesjonalna nazwa na kwadracenie)


Najpierw napiszemy sobie funkcję do wartości bezwzględnej

```c++
double bezwzgledna(double a)
{
	if (a > 0)
		return a;
	return a * -1;
}
```
Gdy już mamy wszystko gotowe możemy zabrać się za właściwą funkcję
``` c++
double kwadracenie(double x, double dokladnosc)
{
	double a = 1., b = x;

	//dopóki nie otrzymamy żądanej precyzji
	while (bezwzgledna(a - b) >= dokladnosc)
	{
		a = (a + b) / 2.;
		b = x / a;
	}

	return a;
}

```

### Przydatny link
  - [Metoda Newton'a Raphson'a](https://pl.wikipedia.org/wiki/Metoda_Newtona#Przyk%C5%82ad)

### [Powrót](https://dogexd.github.io/algorytmy_matura/)
]

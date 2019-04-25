# Wyszukiwanie danej liczby w zbiorze
Jest to bardzo ciekawy temat , ponieważ można do niego podejść na bardzo wiele sposobów istnieje bardzo wiele algorytmów do wyszukiwania danej liczby w zbiorze . Jednak moim zdaniem do matury wystarczą dwa ( a tak na prawdę jeden)

## Wyszukiwanie liniowe

Jest to najprostsza do zaimplementowania metoda czyli idealna na maturę
ale za to najwolniejsza


### schemat
![](https://raw.githubusercontent.com/DogeXD/algorytmy_matura/master/images/Lsearch.png)

``` c++
int wyszukiwanieLiniowe(int t[],int rozmiarTablicy,int szukana)
{
	for(int i =0;i<rozmiarTablicy;i++)
		if (t[i]==szukana)
		{
			return i;
		}
	return -1;  // elementu nie ma w tablicy
}
```

## Wyszukiwanie Binarne
Jest to bardzo szybki algorytm , niestety wymaga on od nas by tablica / zbiór był uporządkowany.  
Polega on na połowieniu przedziałów i odrzucaniu tej połowy w której liczba której szukamy na pewno nie występuje

### schemat
![](https://raw.githubusercontent.com/DogeXD/algorytmy_matura/master/images/Bsearch.png)

początek oznacza początkowy indeks tablicy (najczęściej 0 ) a koniec
oznacza końcowy indeks (rozmiar -1)
```c++
int wyszukiwanieBinarne(int t[], int początek, int koniec, int szukana)
{
	while (początek <= koniec) {
		int srodek = początek + (koniec - początek) / 2;

		if (t[srodek] == szukana)
			return srodek;

		if (t[srodek] < szukana)
			początek = srodek + 1;

		else
			koniec = srodek - 1;
	}
	// szukanej nie ma w tablicy
	return -1;
}

```

### Przydany link
   - [Ciekawe zastowsowanie powyższych informacji](https://pl.khanacademy.org/computing/computer-science/algorithms/intro-to-algorithms/a/a-guessing-game)

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

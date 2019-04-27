# Obliczanie wartości wielomianu

Aby obliczyć wartość wielomianu możemy po prostu podstawić za x jakąś liczbę i podnosić ją do wysokich potęg
Albo możemy rozkładać wielomian do postaci ax+b i łatwiej obliczać jego wartość

Do tego użyjemy schematu Hornera.

``` c++
int horner(int wsp[], int stopień, int x)
{
	for (int i = 1; i <= st; i++)
		wsp[0] = wsp[0] * x + wsp[i];

	return wsp[0];
}
```

Jak możecie zauważyć w bardzo podobny sposób zamienialiśmy liczby z systemu dwójkowego czy szesnastkowego na system dziesiętny.

### Przydatny link

   - [Algorytm Hornera obliczania wartości wielomianu](https://pl.wikipedia.org/wiki/Schemat_Hornera#Algorytm_Hornera_obliczania_warto%C5%9Bci_wielomianu)

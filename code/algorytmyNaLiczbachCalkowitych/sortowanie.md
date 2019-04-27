# Sortowanie
Temat ten pojawiał się bardzo często na maturze i każdy maturzysta powinien go znać.
Nie mówię tutaj o znajomości na pamięć implementacji sortowania bąbelkowego , przez wybór , scalanie , pozycyjnego bo myślę że nie wiele osób zna je wszytskie.

## Na maturze
Moim zdaniem nie ma sensu implementować swojego algorytmu ponieważ jest mało czasu oraz są gotowe rozwiązania

### W C++
Możesz użyć gotowej funkcji sort   
```  c++
  #include <iostream>
  #include<algorithm>

  int  main()
  {
  	int t[5] = { 5,3,2,1,4 };
  	sort(t,t+ 5); //5 to długość tablic
  	for (int i = 0; i < 5; i++)
  		cout << t[i] << endl;
  }
```
Jednak jeśli jesteś ambitny i uważasz że nie chcesz używać gotowców
to specjalnie dla ciebie poniżej znajduje się implementacja sortowania bąbelkowego.  
Pamiętajmy że na maturze nie liczy się szybkość działania :)

``` c++
void sortowanie(int t[], int rozmiar)
{
	for (int i = 0; i < rozmiar -1; i++)
		for (int j = 0; j < rozmiar - i - 1; j++) // lekka optymalizacja
			if (t[j] > t[j + 1])
			{
				int temp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = temp;
			}
}


int  main()
{
	int t[4] = { 5,3,2,1 };
	sortowanie(t, 4);
	for (int i = 0; i < 4; i++)
		cout << t[i] << endl;
    // wyświetla 1,2,3,5
}
```

### Przydatne linki
  - [Przykładowe algorytmy sortowania](https://pl.wikipedia.org/wiki/Sortowanie#Przyk%C5%82adowe_algorytmy_sortowania)  
  - [Funkcja sort w C++](http://www.cplusplus.com/articles/NhA0RXSz/)  
  - [Film porównujący szybkość różnych algorytmów](https://www.youtube.com/watch?v=kPRA0W1kECg)

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

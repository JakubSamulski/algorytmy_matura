# Liczby pierwsze
zacznijmy od tego że liczba pierwsza to liczba która ma dwa dzielniki : jeden i tą liczbę 
Np. : 
- 13 dzieli sie tylko przez 1 i 13 więc jest liczbą pierwszą

``` c++
   bool czy_pierwsza(int n)
  {
  // jako że 1 i 2 nie są pierwsze możemy je wykluczyć
    if (n < 2)		
      return false; 

    // sprawdzamy czy liczba ma jakiś dzielnik poza nią samą i 1
    // wystarczy że sprawdzimy do pierwiastka z n
    // albo i^2
    for (int i = 2; i*i <= n; i++) 
      if (n%i == 0)
        return false;

    return true;
  }

```
### przydatny link :
[Jak rozpoznać czy liczba naturalna jest pierwsza?](http://www.math.edu.pl/czy-pierwsza)
### [powrót ](/README.md)

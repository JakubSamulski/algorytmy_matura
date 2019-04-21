# Liczby pierwsze
zacznijmy od tego że liczba pierwsza to liczba która ma dwa dzielniki : jeden i tą liczbę 
Np. : 
- 13 dzieli sie tylko przez 1 i 13 więc jest liczbą pierwszą

``` c++
   bool czy_pierwsza(int n)
  {
    if (n < 2)		// wiemy że 1 i 2 nie są pierwsze więc możemy je wykluczyć
      return false; 

    // sprawdzamy czy liczba ma jakiś dzielnik poza nią samą i 1

    for (int i = 2; i*i <= n; i++) //n*n ponieważ nie musimy sprawdzać wszystkich liczb
      if (n%i == 0)
        return false;

    return true;
  }

```
przydatne źródła :

  - [Jak rozpoznać czy liczba naturalna jest pierwsza?](http://www.math.edu.pl/czy-pierwsza)

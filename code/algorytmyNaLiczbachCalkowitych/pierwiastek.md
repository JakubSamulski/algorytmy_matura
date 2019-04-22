# Wyłącznie czynnika przed znak pierwiastka
Jest to dość fajne zagadnienie bo znając ten algorytm praktycznie znasz algorytm na faktoryzację

### Zanim zaczniemy
  warto przygotować sobie strukturę / klasę żeby łatwo zwracać dwie wartości :
    -poza pierwiastkiem
    -pod pierwiastkiem
  ``` c++
    struct para
    {
      int poza;
      int pod;
    };
 ```
 oczywiście możemy bawić się w tablice ale w c++ jest to dość trudne i wymaga podstawowej znajomości wzkaźników
 więc po co sie męczyć.
 
 ``` c++
 para pierwiastek(int podPierwiastkiem)
  {
    para wynik;
    // zakładamy że nie da się nic wyłączyć
    int pozaPierwiastkiem = 1; 
    int d = 2;
    // sprawdzamy dzielniki jak przy liczbach pierwszych
    while (d * d <= podPierwiastkiem)
    {
      if (podPierwiastkiem % (d * d) == 0)
      {
        podPierwiastkiem = podPierwiastkiem / (d * d);
        pozaPierwiastkiem = pozaPierwiastkiem * d;
      }
      else
        d = d + 1;
    }
    wynik.poza = pozaPierwiastkiem;
    wynik.pod = podPierwiastkiem;
    return wynik;

  } 
  ```
  A tak wygląda obsługa tego programu 
  ``` c++
  int main()
  {
    para p = pierwiastek(100);
    cout << p.poza <<" "<< p.pod << endl;
  }
  ```
 
### [powrót ](https://dogexd.github.io/algorytmy_matura/)

# Maturalne lifehacki
Jak wiadomo na maturze zawsze mało czasu a stres nie pomaga.
Dlatego poniżej znajdziesz wskazówki które może akurat Ci pomogą przy pisaniu
programów na maturze

## biblioteki
Na maturze możesz używać wszystkich ogólnodostepnych bibliotek
czyli np:
  - fstream do otwierania plików
  - cmath / math.h do pierwiastków , potęgowania
  - algorithms do sortowania , odwracania stringów czy swapa.
dzięki temu nie muszisz sam pisać implementacji bubble sorta , a jeszcze
nie daj boże się pomylisz i stracisz cenny czas

## Vectory zamiast tablic
Na maturze czasami nie podają ile jest liczb , ciągoów w pliku tekstowym
a nie znając ilości elementów ciężko używać tablic.  
Vectory to takie tablice tylko że nie muszisz deklarować ich rozmiaru więc
idealnie nadaja się na maturę i ogólnie są wygodniejsze
### jak ich używać?
Najpierw muszisz dodać
``` c++
  #include<vector>
  ```
  Vectory deklarujemy w dość dziwny sposób poprzez:  
Vector< typVectora>nazwa;
```c++
  vector<int> v;
```
aby dodać element na koniec vectora używamy
```c++
  v.push_back(element);
  ```
  Vectrów możemy używać jak normalnych tablic  
  ``` c++
  for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<endl;
   }
  ```  
  
### Przydatny link
  - [Vectory](http://www.cplusplus.com/reference/vector/vector/)

## [Powrót](https://dogexd.github.io/algorytmy_matura/)

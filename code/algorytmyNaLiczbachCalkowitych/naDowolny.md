# Zamiana z systemu dziesiętnego na dowolny
Jest to ważne zagadnienie które czasem pojawia się na maturze lecz częsciej w odwrotnej wersji
## schemat
![](https://raw.githubusercontent.com/DogeXD/algorytmy_matura/master/images/decToHex.png)
vb

### zanim zaczniemy
warto przygotować sobie funkcję do zamiany int'a na char'a chociaż nie jest to konieczne to poprawia czytelność kodu
``` c++
  char intNaChar(int a)
  {
    if (a < 10)
      return a + 48;
    return a + 87;
  }
```
Teraz możemy przystąpić do zamiany
``` c++
  string naDowolny(int liczba, int system)
  {
    string a,b;
    while (liczba!=0)
    {
      int temp; // zmienna pomocnicza do trzymania reszty
      temp = liczba % system;
      a += intNaChar(temp);
      liczba /= system;
    }
    // odwracanie stringa
    for (int i = a.size() - 1; i >= 0; i--)
      b += a[i];
    a = b;
    return a;
  }
  ```
  Obsługa tej funkcji :
  ``` c++
  int main()
  {
    cout << naDowolny(255, 16); // wyświetli ff
  }
```
### przydatny link
[decimal to hex](https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/)

### [powrót](https://dogexd.github.io/algorytmy_matura/)

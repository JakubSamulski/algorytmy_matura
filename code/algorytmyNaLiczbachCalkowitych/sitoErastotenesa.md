# Sito Erastotensa
Jest to algorytm który znacząco ułatwia nam znalezienie wszystkich liczb pierwszych w danym przedziale

``` c++
void sito()
{
  int n;
  cin >> n; //zakres w którym szukamy
  bool t[n+1];
  // zakładamy że wszytskie są pierwsze
  for (int i = 0; i < n; i++)
  {
    t[i] = true;
  }
  for (int i = 2; i*i <= n; i++)
  {
    if (t[i] == true)
    {
      eliminowanie wielokrotności
      for (int j = i * 2; j <= n; j += i)
        t[j] = false;
    }
  }
  // wyświetlanie wyniku
  for (int i = 0; i <= n; i++)
    if (t[i])
      cout << i << " " << "pierwsza" << endl;
    else
      cout << i << " " << "zlozona" << endl;

}

```
### Przydatny link
  - [Sito](https://pl.wikipedia.org/wiki/Sito_Eratostenesa)

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

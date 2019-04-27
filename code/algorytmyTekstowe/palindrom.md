# Palindorm
Palindormem nazywamy wyraz/zdanie które czytane od tyłu brzmi tak samo.  
Palindomem jest np słowo kajak , imię Ala, zdanie A to idiota.

Aby sprawdzić czy string jest palindromem wysyatczy porównywać pierwszą i ostatnią , potem drugą i drugą od końca (itd.) literę do momentu aż te litery nie będą takie same   
Najłatwiej to zrobić pętlą for
``` c++
bool palindrom(string a)
{	// sprawdzanie dalej niz połowa wyrazu nie ma sensu dlatego i<j
	for (int i = 0, j = a.size()-1; i < j; i++, j--)
	{
		if (a[i] != a[j])
			return false;
	}
	return true;
}
```
### [Powrót](https://dogexd.github.io/algorytmy_matura/)

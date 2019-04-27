# Anagramy
Anagramami nazywamy parę wyrazów które złożone są z tych samych liter.
Anagramami są np pasterka – skarpeta , ekran - nerka.  

Aby sprawdzić czy dwa wyrazy spełniają ten warunek możemy najpierw je posortować , a następnie sprawdzać czy kolejne litery tych wyrazów są takie same (Podobnie jak z palindromami)

``` c++
bool anagram(string a, string b)
{
	// jeżeli nie są równej długości to
	// na pewno nie są anagramami
	if (a.size() != b.size())
		return false;

	// stringi się trochę dziwnie sortuje
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != b[i])
			return false;
	}
	return true;
}

```

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

# Zamiana z Dowolnego systemu na dziesiętny
Ten temat bardzo lubi pojawiać się na maturze

## schemat działania
  ![](http://cdncontribute.geeksforgeeks.org/wp-content/uploads/hexaTodeci.png"schemat")
  
  
### Na początek 
Przygotujmy sobie funkcjię do zamiany char'a na int'a
``` c++
int charNaInt(char a)
{
	if (a < 58)
		return a - 48;
	return a - 87;
}
```
uwaga ponizszy kod nie zadziała w visual studio gdyż nie można tam zrobić czegoś takiego
``` c++
	int t[dlugosc]; 
  ```
  w tym przypadku najelpiej zamienić tablice na vectora 
  
  ``` c++
  int toDecimal(string ciag, int zSystemu)
{
	//zamieniamy stringa na tablicę 
	// łatwiej się pracuje 
	int dlugosc = ciag.size();
	int t[dlugosc]; 
	for (int i = 0; i < dlugosc; i++)
		t[i] = charNaInt(ciag[i]);

	for (int i = 1; i <dlugosc; i++)
	{
		t[0] = t[0] * zSystemu + t[i];
	}
	return t[0];
}
```

## Przydatny link


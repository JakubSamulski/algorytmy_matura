# Warunek trójkąta

Aby z trzech odcinków zbudować trójkąt, najdłuższy z nich musi być krótszy niż suma długość dwóch pozostałych.

``` c++
bool trojkat(int a, int b, int c)
{
	if (a + b > c&&b + c > a&&c + a > b)
		return true;
	return false;
}
```

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

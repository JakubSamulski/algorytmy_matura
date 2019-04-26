# Odległość euklidesowa
Wykorzystujemy ją najczęściej kiedy chcemy obliczyć odległość między dwoma punktami w układzie współrzędnych  
ma ona postać Pierwiastek((x2-x1)^2+(y2-y1)^2)

### Na początek
Możemy sobie napisać własną strukturę daych reprezentującą punkt żeby łatwiej nam się pisało

``` c++
struct punkt {
	int x;
	int y;
};
```
Funkcja :
``` c++
double odleglosc(punkt a, punkt b)
{
	double potX = pow((b.x - a.x),2);
	double potY = pow((b.y - a.y), 2);
	return sqrt(potX + potY);
}
```

obsługa programu:

``` c++
int  main()
{
	punkt a = { 2,-2 };
	punkt b = { 3,0 };
	cout << odleglosc(a, b); // ~2.23
}
````

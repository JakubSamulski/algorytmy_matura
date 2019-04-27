# Twierdzenie Pitagorasa
Tego tematu chyba nie trzeba przedstawiać.

a^2 + b^2 = c^2  
gdzie  
a - przyprostokątna  
b - przyprostokątna  
c - przeciwprostokątna  

gdy szukamy przeciwprostokątnej
``` c++
double pitagoras(int a, int b)
{
	return sqrt(a * a + b * b);
}
```
gdy szukamy  przyprostokątnej

``` c++
double pitagoras(int a, int c)
{
  return sqrt(c* c - a * a);
}
```

### [Powrót](https://dogexd.github.io/algorytmy_matura/)

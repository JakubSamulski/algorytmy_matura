# Wyszukiwanie minimalnej i maksymalnej wartości w zbiorze

Temat ten występował już kilka razy na maturze

``` c++
int  main()
{
	int t[10] = { 32,6,288,33,3,44,56,5,2,6566 };
	int min = t[0], max = t[0];
	for (int i = 0; i < 10; i++)
	{
		if (t[i] < min)
		{
			min = t[i];
		}
		if (t[i] > max)
		{
			max = t[i];
		}
	}
	cout << min << " " << max << endl;
}
```
### Uwaga
Zawsze możesz po prostu posortować tablicę a następnie wyświetlić pierwszy i ostatni element

``` c++
  int t[10] = { 32,6,288,33,3,44,56,5,2,6566 };
  sort(t,t+10);
  cout<<t[0]<<" "<<t[9]<<endl;

  //tylko pamiętaj o #include<algorithm>
```
### Przydatne linki
  - niestety brak tym razem :(  
    
### [Powrót](https://dogexd.github.io/algorytmy_matura/)

#include <iostream>
int main()
{setlocale(0, ""); using namespace std;
int q; cout << "Выберите предел: "; cin >> q;
for (int i{ 1 }; i <= q; i += 2) 
cout << "\nКвадрат числа: " << i * i<<endl;} 

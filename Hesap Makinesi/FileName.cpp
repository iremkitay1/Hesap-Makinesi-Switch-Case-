#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2;
	char islem;
	cout << "Birinci sayiyi giriniz : " << endl; 
	cin >> sayi1;
	cout << "Ýkinci sayiyi giriniz : ";
	cin >> sayi2;
	cout << "Yapmak istediginiz islemi giriniz (+, -, *, /) : ";
	cin >> islem;

	switch (islem)
	{
	case '+':
		cout << "Sonuc: " << sayi1 + sayi2; 
		break;
	case '-':
		cout << "Sonuc: " << sayi1 - sayi2;
		break;
	case '*':
		cout << "Sonuc: " << sayi1 * sayi2;
		break;
	case '/':
		if(sayi2 != 0)
		{
			cout << "Sonuc: " << sayi1 / sayi2;
		}
		else
		{
			cout << "Hata bolme isleminde payda sifir olamaz!  ";
		}
		break;
	default :
		cout << "Lutfen, gecerli bir operator giriniz! ";
	}
	return 0;
}
//Öğrenci No: b191200025 
//Ad Soyad: Ayşe Tuba KAHRAMAN
//Ders: Programlamaya Giriş
//Ödev: 3
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void FaturaYaz(string fatura);
int main()
{
	setlocale(LC_ALL, "Turkish");
	//char ad = 0;
	string ad2 = " ";
	int fiyat = 0;
	float toplam = 0;

	cout << "Tubito Butik'e Hoşgeldiniz :) \n";
	cout << "Adınızı öğrenebilir miyim? \n";
	cin >> ad2;
	cout << "Sayın " << ad2 << " Aşağıdaki kataloğumuzdan dilediğinizce alışveriş yapabilirsiniz. \n";
	string eh = "E";
	while (eh == "E")
	{
		cout << " ****************************************************************************** \n";
		cout << "                                    Katalog  \n";
		cout << " ******************************************************************************\n";
		cout << "                         Ürün1: Siyah Düz Elbise=150TL\n";
		cout << "                         Ürün2: Kahverengi Palto=250TL\n";
		cout << "                         Ürün3: Siyah Uzun Çizme:190TL\n";
		cout << "                         Ürün4: Çorap: 20TL\n";
		cout << " ******************************************************************************\n";
		int ürün = 0;
		cout << "Ürün numarası giriniz: ";
		cin >> ürün;
		int adet = 0;
		cout << "Adet sayısı giriniz: ";
		cin >> adet;

		if (ürün == 1)
		{
			fiyat = 150 * adet;
		}
		else if (ürün == 2)
		{
			fiyat = 250 * adet;
		}
		else if (ürün == 3)
		{
			fiyat = 190 * adet;
		}
		else if (ürün == 4)
		{
			fiyat = 20 * adet;
		}
		toplam = fiyat + toplam;
		cout << "Aldığınız ürünlerin toplam fiyatı:" << toplam << "TL'dir.  \n";
		cout << "Alışverişe devam etmek istiyor musunuz? (E/H)\n";
		cin >> eh;
	}
	string eh2 = "";
	cout << "Toplam borcunuza %18KDV eklensin mi?(E/H) \n";
	cin >> eh2;
	if (eh2 == "E")
	{
		toplam = toplam * 0.18 + toplam;
	}
	cout << "Toplam ödenecek tutar:" << toplam << "TL'dir.  \n";
	string ta = "";
	cout << "Taksitlendirmek ister misiniz?(E/H) \n";
	cin >> ta;
	float taksitücreti = toplam;
	int ts = 1;
	if (ta == "E")
	{
		cout << "Kaç taksite bölünmesini istersiniz? (Maksimum:12Taksit.)\n";
		cin >> ts;
		taksitücreti = toplam / ts;
	}

	cout << "Aylık ödeyeceğiniz tutar:" << to_string(taksitücreti) << "TL'dir.\n";
	cout << "Ödeme çizelgeniz:\n";
	cout << " ****************************************************************************** \n";

	string fatura = "";
	fatura += "Müşteri Adı \n " + ad2 + "\n\n Toplam Borç Tutar : ";
	fatura += to_string(toplam);
	fatura += "\n\nÖdeme çizelgeniz:\n";
	fatura += "******************************************************************************\n";

	for (int i = 1; i <= ts; i++)
	{
		if (i == 1)
		{
			cout << "Ocak: " << to_string(taksitücreti) << "\n";
			fatura += "Ocak: "+ to_string(taksitücreti)+"\n";
		}
		else if (i == 2)
		{
			cout << "Şubat: " << to_string(taksitücreti) << "\n";
			fatura += "Şubat: " + to_string(taksitücreti) + "\n";
		}
		else if (i == 3)
		{
			cout << "Mart: " << to_string(taksitücreti) << "\n";
			fatura += "Mart: " + to_string(taksitücreti) + "\n";
		
		}
		else if (i == 4)
		{
			cout << "Nisan: " << to_string(taksitücreti) << "\n";
			fatura += "Nisan: " + to_string(taksitücreti) + "\n";

		}
		else if (i == 5)
		{
			cout << "Mayıs: " << to_string(taksitücreti) << "\n";
			fatura += "Mayıs: " + to_string(taksitücreti) + "\n";
		
		}
		else if (i == 6)
		{
			cout << "Haziran: " << to_string(taksitücreti) << "\n";
			fatura += "Haziran: " + to_string(taksitücreti) + "\n";
			
		}
		else if (i == 7)
		{
			cout << "Temmuz: " << to_string(taksitücreti) << "\n";
			fatura += "Temmuz: " + to_string(taksitücreti) + "\n";
			
		}
		else if (i == 8)
		{
			cout << "Ağustos: " << to_string(taksitücreti) << "\n";
			fatura += "Ağustos: " + to_string(taksitücreti) + "\n";
			
		}
		else if (i == 9)
		{
			cout << "Eylül: " << to_string(taksitücreti) << "\n";
			fatura += "Eylül: " + to_string(taksitücreti) + "\n";
			
		}
		else if (i == 10)
		{
			cout << "Ekim: " << to_string(taksitücreti) << "\n";
			fatura += "Ekim: " + to_string(taksitücreti) + "\n";
		
		}
		else if (i == 11)
		{
			cout << "Kasım: " << to_string(taksitücreti) << "\n";
			fatura += "Kasım: " + to_string(taksitücreti) + "\n";
			
		}
		else if (i == 12)
		{
			cout << "Aralık: " << to_string(taksitücreti) << "\n";
			fatura += "Aralık: " + to_string(taksitücreti) + "\n";
			
		}
	}

	cout << fatura;
	FaturaYaz(fatura);
}

void FaturaYaz(string fatura)
{
	ofstream dosyaYaz;
	dosyaYaz.open("fatura.txt", ios::out);
	dosyaYaz << fatura;
	dosyaYaz.close();
}

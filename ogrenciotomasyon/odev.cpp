/****************************************************************************
**					         SAKARYA ÜNİVERSİTESİ                          **
**			        BİLGİSAYAR VE BİLİŞİM BİLİMLERİ FAKÜLTESİ              **
**				         BİLGİSAYAR MÜHENDİSLİĞİ BÖLÜMÜ                    **
**				           PROGRAMLAMAYA GİRİŞİ DERSİ                      **
**                                                                         **
**				ÖDEV NUMARASI…...: Ödev 1                                  **
**				ÖĞRENCİ ADI......: Yaren Cerrah                            **
**				ÖĞRENCİ NUMARASI.: b211210013                              **
**				DERS GRUBU.......: 1C                                      **
****************************************************************************/
#include <iostream>
#include <cstring>
#include <locale.h>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;
float basarinotu[100], yilici[100];
double ortalama;

struct tarih
{
	int gun, ay, yil;
};

struct Ogrenci
{
	string adi[100];
	string soyadi[100];
	unsigned int no[100];
	float kisasinav1[100];
	float kisasinav2[100];
	float odev1[100];
	float	odev2[100];
	float proje[100];
	float vize[100];
	float final[100];
	struct tarih;
}ogr[100]={};

//this function converts note to letter note
void notcevir(double ortalama)  
{
	if (ortalama>=85)
	{
		cout << "AA" << endl;
	}
	else if (ortalama>=80)
	{
		cout << "BA" << endl;
	}
	else if (ortalama>=75)
	{
		cout << "BB" << endl;
	}
	else if (ortalama>=70)
	{
		cout << "CB" << endl;
	}
	else if (ortalama>=65)
	{
		cout << "CC" << endl;
	}
	else if (ortalama>=60)
	{
		cout << "DC" << endl;
	}
	else if (ortalama>=55)
	{
		cout << "DD" << endl;
	}
	else if (ortalama>=45)
	{
		cout << "FD" << endl;
	}
	else if(ortalama<45)
	{
		cout << "FF" << endl;
	}
	else
	{
		cout << "Invalid value.";
	}
}

//This function checks the correctness of the note
float kontrol(string cagırma)
{
	float puan;
	do
	{
		cout << cagırma;
		cin >> puan;
	} while (!(puan >= 0 && puan <= 100));
	return puan;
}

//This function prints the class list
void siniflistesi()
{
	cout << setw(30) << "STUDENT LIST" << endl;
	cout << "Number" << setw(15) << "Name" << setw(15)
		<< "Surname" << setw(20) << "1. Quiz" << setw(15)
		<< "2. Quiz" << setw(15) << "1. Task" << setw(15)
		<< "2. Task" << setw(15) << "Project" << setw(15)
		<< "Midterm" << setw(12) << "Final" << setw(15) 
		<< "Success Grade" << setw(15) << "In Year Grade" 
		<<setw(15)<<"Letter Grade"<< endl;
	for (int i = 0; i < 20; i++) // First 20 students
	{
		
		cout << ogr[i].no[i]
			<< setw(12) << ogr[i].adi[i]
			<< setw(15) << ogr[i].soyadi[i]
			<< setw(15) << ogr[i].kisasinav1[i]
			<< setw(15) << ogr[i].kisasinav2[i]
			<< setw(15) << ogr[i].odev1[i]
			<< setw(15) << ogr[i].odev2[i]
			<< setw(15) << ogr[i].proje[i]
			<< setw(15) << ogr[i].vize[i]
			<< setw(15) << ogr[i].final[i]
			<< setw(15) << basarinotu[i]
			<< setw(15) << yilici[i] << setw(12);
		notcevir(yilici[i]);
		cout << endl;
	}
	system("pause"); //waits until a key is pressed
	system("cls"); // cleans all screan
	cout << setw(30) << "STUDENT LIST" << endl;
	cout << "Number" << setw(15) << "Name" << setw(15) 
		<< "Surname" << setw(20) << "1. Quiz" << setw(15)
		<< "2. Quiz" << setw(15) << "1. Task" << setw(15)
		<< "2. Task" << setw(15) << "Project" << setw(15)
		<< "Midterm" << setw(12) << "Final" << setw(15)
		<< "Success Grade" << setw(15) << "In Year Grade"
		<< setw(15) << "Letter Grade" << endl;
	for (int i = 20; i < 40; i++)
	{
		cout << ogr[i].no[i]
			<< setw(12) << ogr[i].adi[i]
			<< setw(15) << ogr[i].soyadi[i]
			<< setw(15) << ogr[i].kisasinav1[i]
			<< setw(15) << ogr[i].kisasinav2[i]
			<< setw(15) << ogr[i].odev1[i]
			<< setw(15) << ogr[i].odev2[i]
			<< setw(15) << ogr[i].proje[i]
			<< setw(15) << ogr[i].vize[i]
			<< setw(15) << ogr[i].final[i]
			<< setw(15) << basarinotu[i]
			<< setw(15) << yilici[i] << setw(12);
			notcevir(yilici[i]);
			cout << endl;
	}
	system("pause");
	system("cls");
	cout << setw(30) << "STUDENT LIST" << endl;
	cout << "Number" << setw(15) << "Name" << setw(15) 
		<< "Surname" << setw(20) << "1. Quiz" << setw(15)
		<< "2. Quiz" << setw(15) << "1. Task" << setw(15)
		<< "2. Task" << setw(15) << "Project" << setw(15)
		<< "Midterm" << setw(12) << "Final" << setw(15) 
		<< "Success Grade" << setw(15) << "In Year Grade"
		<< setw(15) << "Letter Grade" << endl;
	for (int i = 40; i < 60; i++)
	{
		cout << ogr[i].no[i]
			<< setw(12) << ogr[i].adi[i]
			<< setw(15) << ogr[i].soyadi[i]
			<< setw(15) << ogr[i].kisasinav1[i]
			<< setw(15) << ogr[i].kisasinav2[i]
			<< setw(15) << ogr[i].odev1[i]
			<< setw(15) << ogr[i].odev2[i]
			<< setw(15) << ogr[i].proje[i]
			<< setw(15) << ogr[i].vize[i]
			<< setw(15) << ogr[i].final[i]
			<< setw(15) << basarinotu[i]
			<< setw(15) << yilici[i] << setw(12);
			notcevir(yilici[i]);
			cout << endl;
	}
	system("pause");
	system("cls");
	cout << setw(30) << "STUDENT LIST" << endl;
	cout << "Number" << setw(15) << "Name" << setw(15) 
		<< "Surname" << setw(20) << "1. Quiz" << setw(15)
		<< "2. Quiz" << setw(15) << "1. Task" << setw(15)
		<< "2. Task" << setw(15) << "Project" << setw(15)
		<< "Midterm" << setw(12) << "Final" << setw(15) 
		<< "Success Grade" << setw(15) << "In Year Grade"
		<< setw(15) << "Letter Grade" << endl;
	for (int i = 60; i < 80; i++)
	{
		cout << ogr[i].no[i]
			<< setw(12) << ogr[i].adi[i]
			<< setw(15) << ogr[i].soyadi[i]
			<< setw(15) << ogr[i].kisasinav1[i]
			<< setw(15) << ogr[i].kisasinav2[i]
			<< setw(15) << ogr[i].odev1[i]
			<< setw(15) << ogr[i].odev2[i]
			<< setw(15) << ogr[i].proje[i]
			<< setw(15) << ogr[i].vize[i]
			<< setw(15) << ogr[i].final[i]
			<< setw(15) << basarinotu[i]
			<< setw(15) << yilici[i] << setw(12);
			notcevir(yilici[i]);
			cout << endl;
	}
	system("pause");
	system("cls");
	cout << setw(30) << "STUDENT LIST" << endl;
	cout << "Number" << setw(15) << "Name" << setw(15) 
		<< "Surname" << setw(20) << "1. Quiz" << setw(15)
		<< "2. Quiz" << setw(15) << "1. Task" << setw(15)
		<< "2. Task" << setw(15) << "Project" << setw(15)
		<< "Midterm" << setw(12) << "Final" << setw(15)
		<< "Success Grade" << setw(15) << "In Year Grade"
		<< setw(15) << "Letter Grade" << endl;
	for (int i = 80; i < 100; i++)
	{
		cout << ogr[i].no[i]
			<< setw(15) << ogr[i].adi[i]
			<< setw(15) << ogr[i].soyadi[i]
			<< setw(15) << ogr[i].kisasinav1[i]
			<< setw(15) << ogr[i].kisasinav2[i]
			<< setw(15) << ogr[i].odev1[i]
			<< setw(15) << ogr[i].odev2[i]
			<< setw(15) << ogr[i].proje[i]
			<< setw(15) << ogr[i].vize[i]
			<< setw(15) << ogr[i].final[i]
			<< setw(15) << basarinotu[i]
			<< setw(15) << yilici[i] << setw(12);
			notcevir(yilici[i]);
			cout << endl;
	}
	system("pause");
	system("cls");
}

// This function finds max success grade
void enyukseknot(float basarinotu[], int boyut) 
{
	float enbuyuk;
	enbuyuk = basarinotu[0];
	for (int i = 0; i <boyut; i++)
	{
		if (basarinotu[i] > enbuyuk)
			enbuyuk = basarinotu[i];
	}
	cout << "Maximum success grade in the class: " << enbuyuk;

}

// This function finds min success grade
void enkucuknot(float basarinotu[], int boyut)
{
	float enkucuk;
	enkucuk = basarinotu[0];
	for (int i = 0; i < boyut; i++)
	{
		if (basarinotu[i] < basarinotu[0])
			enkucuk = basarinotu[i];
	}
	cout << "Minimum success grade in the class:  " << enkucuk;
}

//This function calculates the class average
void sinifort(float basarinotu[], int boyut)
{
	float ortalama;
	float toplam=0;
	for (int i = 0; i <boyut; i++)
	{
		toplam = toplam + basarinotu[i];
	}
	ortalama = toplam / 100;
	cout << "Class Average: " << ortalama;
}

//This function calculates standard deviation of the class
void standartsapma(float basarinotu[], int boyut)
{
	float varyans=0;
	float aritmetik;
	float toplam = 0;
	float stndrtsapma;
	for (int i = 0; i < 100; i++)
	{
		toplam = toplam + basarinotu[i];
	}
	aritmetik = toplam / 100;
	for (int i = 0; i < 100; i++)
	{
		varyans = varyans + (basarinotu[i] - aritmetik) * (basarinotu[i] - aritmetik);
	}
	stndrtsapma = sqrt(varyans / 99);
	cout << "Standard deviation of the Class: " << stndrtsapma;
}

//This function lists notes in a certain range
void bellibasarınotu(float min, float max)
{
	cout << "Number" << setw(15) << "Name" << setw(15) << "Surname" << setw(20) << "Success Grade"  << endl;
	for (int i = 0; i < 100; i++)
	{
		if (basarinotu[i] >= min && basarinotu[i] <= max)
		{
			cout << ogr[i].no[i]
				<< setw(15) << ogr[i].adi[i]
				<< setw(15) << ogr[i].soyadi[i]
				<< setw(15) << basarinotu[i]  << endl;
		}
	}	
}

//This function lists the students with a success grade below certain range
void bellidegerinaltı(float deger)
{
	cout << "Numara" << setw(15) << "Name" << setw(15) << "Surname" << setw(20) << "Success Grade" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (basarinotu[i]<deger)
		{
			cout << ogr[i].no[i]
				<< setw(15) << ogr[i].adi[i]
				<< setw(15) << ogr[i].soyadi[i]
				<< setw(15) << basarinotu[i] << endl;
		}
	}
}

//This function lists the students with a success grade above certain range
void bellidegerinustu(float deger)
{
	cout << "Number" << setw(15) << "Name" << setw(15) << "Surname" << setw(20) << "Success Grade" << endl;
	for (int i = 0; i < 100; i++)
	{
		if (basarinotu[i] > deger)
		{
			cout << ogr[i].no[i]
				<< setw(15) << ogr[i].adi[i]
				<< setw(15) << ogr[i].soyadi[i]
				<< setw(15) << basarinotu[i] << endl;
		}
	}
}

int main()
{
	srand(time(NULL)); //random function
	//setlocale(LC_ALL, "Turkish");
	int secim, menusecim=0;
	char cevap=0;
	string isim[30] = { "Eren", "Emre","Enes","Esra","Zehra","Sude","Seher","Yaren","Bedirhan","Ahmet","Buse","Polat","Eray","Irem","Melek","Sefa","Hamza","Diyar","Ali","Yusuf","Merwan","Hasan","Sinem","Yunus","Gamze","Mahmut","Meryem","Azra","Furkan","Haydar" };
	string soyisim[30] = { "Kumsal","Cerrah","Vural","Kahraman","Kandemir","Ucar","Yolcu","Erguder","Yemci","Dural","Bilgin","Bulut","Arslan","Kuzey","Akkaya","Doran","Sinmez","Aksu","Artar","Terim","Sancar","Tepeli","Demir","Potuk","Aksoy","Ertekin","Ziyagil","Aksel","Tekin","Dereli" };
	cout << "How would you like to define students' names and grades?"<<endl<<"If you want to define randommly, press 1. "<<endl<<"If you want to enter the informations from the user, press 2. ";
	cin >> secim;
	if (secim == 1)// for define randomly
	{
		for (int i = 0; i < 100; i++)
		{
			ogr[i].no[i] = (211210000 + i);
			ogr[i].adi[i] = isim[rand() % 30];
			ogr[i].soyadi[i] = soyisim[rand() % 30];	
		}
		for (int i = 0; i < 10; i++) // grades 0 to 40   0<= note <=39
		{
			ogr[i].kisasinav1[i] = rand() % 40;
			ogr[i].kisasinav2[i] = rand() % 40;
			ogr[i].odev1[i] = rand() % 40;
			ogr[i].odev2[i] = rand() % 40;
			ogr[i].proje[i] = rand() % 40;
			ogr[i].vize[i] = rand() % 40;
			ogr[i].final[i] = rand() % 40;
		}
		for (int i = 10; i < 60; i++) // grades 40 to 70   40<= not <=69
		{
			ogr[i].kisasinav1[i] = 40 + (rand() % 30);
			ogr[i].kisasinav2[i] = 40 + (rand() % 30);
			ogr[i].odev1[i] = 40 + (rand() % 30);
			ogr[i].odev2[i] = 40 + (rand() % 30);
			ogr[i].proje[i] = 40 + (rand() % 30);
			ogr[i].vize[i] = 40 + (rand() % 30);
			ogr[i].final[i] = 40 + (rand() % 30);

		}
		for (int i = 60; i < 75; i++) // grades 70 to 80    70<= not <= 79
		{
			ogr[i].kisasinav1[i] = 70 + (rand() % 10);
			ogr[i].kisasinav2[i] = 70 + (rand() % 10);
			ogr[i].odev1[i] = 70 + (rand() % 10);
			ogr[i].odev2[i] = 70 + (rand() % 10);
			ogr[i].proje[i] = 70 + (rand() % 10);
			ogr[i].vize[i] = 70 + (rand() % 10);
			ogr[i].final[i] = 70 + (rand() % 10);
		}
		for (int i = 75; i < 100; i++)  //grades 80 to 100    80<= not <=100
		{
			ogr[i].kisasinav1[i] = 80 + rand() % 21;
			ogr[i].kisasinav2[i] = 80 + rand() % 21;
			ogr[i].odev1[i] = 80 + rand() % 21;
			ogr[i].odev2[i] = 80 + rand() % 21;
			ogr[i].proje[i] = 80 + rand() % 21;
			ogr[i].vize[i] = 80 + rand() % 21;
			ogr[i].final[i] = 80 + rand() % 21;
		}
		for (int i = 0; i < 100; i++) // success grade and in year grade
		{
			yilici[i] = (((ogr[i].vize[i]) * 0.5) + ((ogr[i].kisasinav1[i]) * 0.07) + ((ogr[i].kisasinav2[i]) * 0.07) + ((ogr[i].odev1[i]) * 0.1) + ((ogr[i].odev2[i]) * 0.1) + ((ogr[i].proje[i]) * 0.16));
			basarinotu[i] = ((yilici[i] * 0.55) + ((ogr[i].final[i]) * 0.45));
		}
	}
	else if (secim == 2) // for take a input from user
	{
		short aralik;
		cout << "How many students do you want to enter? ";
		cin >> aralik;
		for (int i = 0; i < aralik; i++)
		{
			cout << i+1 << ". student's name, surname and number: ";
			cin >> ogr[i].adi[i] >> ogr[i].soyadi[i] >> ogr[i].no[i];
			ogr[i].kisasinav1[i]=kontrol("Student's first quiz note: ");
			cout << endl;
			ogr[i].kisasinav2[i] = kontrol("Student's second quiz note: ");
			cout << endl;
			ogr[i].odev1[i] = kontrol("Student's first task note: ");
			cout << endl;
			ogr[i].odev2[i] = kontrol("Student's second task note: ");
			cout << endl;
			ogr[i].proje[i] = kontrol("Student's project note: ");
			cout << endl;
			ogr[i].vize[i] = kontrol("Student's midterm note: ");
			cout << endl;
			ogr[i].final[i] = kontrol("Student's final note: ");
			cout << endl;
			yilici[i] = (((ogr[i].vize[i]) * 0.5) + ((ogr[i].kisasinav1[i]) * 0.07) + ((ogr[i].kisasinav2[i]) * 0.07) + ((ogr[i].odev1[i]) * 0.1) + ((ogr[i].odev2[i]) * 0) + ((ogr[i].proje[i]) * 0.16));
			basarinotu[i] = ((yilici[i] * 0.45) + ((ogr[i].final[i]) * 0.45));
		}
	}
	else
		cout << "Wrong choice.";

	do
	{
		cout << "            MENU           " << endl;
		cout << "1. Student List" << endl;
		cout << "2. Highest grade in the class" << endl;
		cout << "3. Lowest grade in the grade" << endl;
		cout << "4. Average of the class" << endl;
		cout << "5. Standard deviation of the class" << endl;
		cout << "6. List the students with a success grade between certain range " << endl;
		cout << "7. List the students with a success grade below certain range " << endl;
		cout << "8. List the students with a success grade above certain range " << endl;
		cout << "Select the number of choices you want to do. ";
		cin >> menusecim;
		switch (menusecim) // takes us to the right functions according to the selection
		{
		case 1:
			system("cls");
			siniflistesi();
			break;
		case 2:
			system("cls");
			enyukseknot(basarinotu, 100);
			break;
		case 3:
			system("cls");
			enkucuknot(basarinotu, 100);
			break;
		case 4:
			system("cls");
			sinifort(basarinotu, 100);
			break;
		case 5:
			system("cls");
			standartsapma(basarinotu, 100);
			break;
		case 6:
			system("cls");
			int min, max;
			cout << "Enter the success grade ranges you want to sort. (min, max):  ";
			cin >> min >> max;
			bellibasarınotu(min, max);
			break;
		case 7:
			system("cls");
			int deger;
			cout << "Enter the minimum success grade you want to rank: ";
			cin >> deger;
			bellidegerinaltı(deger);
			break;
		case 8:
			system("cls");
			cout << "Enter the maximum success grade you want to rank: ";
			cin >> deger;
			bellidegerinustu(deger);
			break;
		}

		cout << endl;
		cout << "Do you want to continue (Y/ N) ";
		cin >> cevap;
	} while (cevap == 'Y' || cevap == 'y');

}
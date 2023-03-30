#pragma once
#include <iostream>
#include <stdlib.h>

class statki
{
public:
	char tab1[32][32];
	char tab1p[32][32];
	char tab2[32][32];
	char tab2p[32][32];
	int i = 0, j = 0;
	int pentla = -1;
	int  maszt2 = 0, maszt3 = 0, maszt4 = 0, maszt5 = 0, sumamasztow = 0;
	int  maszt22 = 0, maszt33 = 0, maszt44 = 0, maszt55 = 0;
	int suma1 = 0, suma2 = 0;
	int zmienna = 0, wiersz = 0, kolumna = 0, szukana = 0, orientacja = 0;
	int ala = 0;

	void dodawanie()
	{
		system("cls");
		std::cout << "Podaj liczbe statkow 2, 3, 4 i 5 - masztowych, odzielajac jes spacjami(maksymalnie 20): ";
		std::cin >> maszt2 >> maszt3 >> maszt4 >> maszt5;
		sumamasztow = maszt2 + maszt3 + maszt4 + maszt5;
		suma1 = 2 * maszt2 + 3 * maszt3 + 4 * maszt4 + 5 * maszt5;
		suma2 = suma1;
		while (sumamasztow > 20)
		{
			std::cout << "Podales za duza ilos statkow, sprobuj jeszcze raz!";
			std::cin >> maszt2 >> maszt3 >> maszt4 >> maszt5;
			sumamasztow = maszt2 + maszt3 + maszt4 + maszt5;
			suma1 = 2 * maszt2 + 3 * maszt3 + 4 * maszt4 + 5 * maszt5;
			suma2 = suma1;
		}
		std::cout << "Podaj dane statkow dla pierwszego gracza:" << std::endl;
		zmienna = maszt2;
		while (zmienna > 0)
		{
			std::cout << "statki 2-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if ((orientacja == 1))
				{
					if (i <= 29)
					{
						for (i; i <= kolumna + 1; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 2; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 1; i++)
							{
								tab1[i][j] = '2';

							}

						}
					}
					else
					{
						szukana = 1;
					}

				}




				else {

					if (j <= 29) {
						for (j; j <= wiersz + 1; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 2; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 1; j++)
							{
								tab1[i][j] = '2';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt3;
		while (zmienna > 0)
		{
			std::cout << "statki 3-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 28)
					{
						for (i; i <= kolumna + 2; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 3; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 2; i++)
							{
								tab1[i][j] = '3';

							}

						}
					}
					else {
						szukana = 1;
					}

				}



				else {

					if (j <= 28) {
						for (j; j <= wiersz + 2; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 3; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 2; j++)
							{
								tab1[i][j] = '3';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt4;
		while (zmienna > 0)
		{
			std::cout << "statki 4-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 27)
					{
						for (i; i <= kolumna + 3; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 4; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 3; i++)
							{
								tab1[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 27) {
						for (j; j <= wiersz + 3; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 4; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 3; j++)
							{
								tab1[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt5;
		while (zmienna > 0)
		{
			std::cout << "statki 5-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 26) {
						for (i; i <= kolumna + 4; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4') || (tab1[i][j] == '5')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 5; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 4; i++)
							{
								tab1[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 26) {
						for (j; j <= wiersz + 4; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4') || (tab1[i][j] == '5')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 5; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 4; j++)
							{
								tab1[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}
		system("pause");
		system("cls");

		// Statki gracza 2

		std::cout << "Podaj dane statkow dla drugiego gracza:" << std::endl;
		zmienna = maszt2;
		while (zmienna > 0)
		{
			std::cout << "statki 2-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if ((orientacja == 1))
				{
					if (i <= 29)
					{
						for (i; i <= kolumna + 1; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 2; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 1; i++)
							{
								tab2[i][j] = '2';

							}

						}
					}
					else
					{
						szukana = 1;
					}

				}




				else {

					if (j <= 29) {
						for (j; j <= wiersz + 1; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 2; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 1; j++)
							{
								tab2[i][j] = '2';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt3;
		while (zmienna > 0)
		{
			std::cout << "statki 3-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 28)
					{
						for (i; i <= kolumna + 2; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 3; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 2; i++)
							{
								tab2[i][j] = '3';

							}

						}
					}
					else {
						szukana = 1;
					}

				}



				else {

					if (j <= 28) {
						for (j; j <= wiersz + 2; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 3; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 2; j++)
							{
								tab2[i][j] = '3';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt4;
		while (zmienna > 0)
		{
			std::cout << "statki 4-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 27)
					{
						for (i; i <= kolumna + 3; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 4; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 3; i++)
							{
								tab2[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 27) {
						for (j; j <= wiersz + 3; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 4; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 3; j++)
							{
								tab2[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt5;
		while (zmienna > 0)
		{
			std::cout << "statki 5-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 26) {
						for (i; i <= kolumna + 4; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4') || (tab2[i][j] == '5')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 5; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 4; i++)
							{
								tab2[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 26) {
						for (j; j <= wiersz + 4; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4') || (tab2[i][j] == '5')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 5; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 4; j++)
							{
								tab2[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}
		j = 1;
		i = 1;
		for (i; i <= 30; i++)
		{
			for (j = 1; j <= 30; j++)
			{
				if ((tab1[i][j] != '2') && (tab1[i][j] != '3') && (tab1[i][j] != '4') && (tab1[i][j] != '5')) tab1[i][j] = '*';
				if ((tab2[i][j] != '2') && (tab2[i][j] != '3') && (tab2[i][j] != '4') && (tab2[i][j] != '5')) tab2[i][j] = '*';
				tab1p[i][j] = '*';
				tab2p[i][j] = '*';
			}

		}



		j = 1;
		i = 1;


	}

	void dodawanie_losowe(int kolumna, int wiersz, int orientacja)
	{
		system("cls");
		ala = 0;
		if ((maszt2 == 0) && (maszt3 == 0) && (maszt4 == 0) && (maszt5 == 0) && (maszt22 == 0) && (maszt33 == 0) && (maszt44 == 0) && (maszt55 == 0))
		{
			std::cout << "Podaj liczbe statkow 2, 3, 4 i 5 - masztowych, odzielajac jes spacjami(maksymalnie 20): ";
			std::cin >> maszt2 >> maszt3 >> maszt4 >> maszt5;
			sumamasztow = maszt2 + maszt3 + maszt4 + maszt5;

			while (sumamasztow > 20)
			{
				std::cout << "Podales za duza ilos statkow, sprobuj jeszcze raz!";
				std::cin >> maszt2 >> maszt3 >> maszt4 >> maszt5;
				sumamasztow = maszt2 + maszt3 + maszt4 + maszt5;

			}
			suma1 = 2 * maszt2 + 3 * maszt3 + 4 * maszt4 + 5 * maszt5;
			suma2 = suma1;
			pentla = 2 * sumamasztow;
			maszt22 = maszt2;
			maszt33 = maszt3;
			maszt44 = maszt4;
			maszt55 = maszt5;
		}

		zmienna = maszt2;
		while (maszt2 > 0)
		{
			if (ala != 0) break;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if ((orientacja == 1))
				{
					if (i <= 29)
					{
						for (i; i <= kolumna + 1; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 2; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 1; i++)
							{
								tab1[i][j] = '2';

							}

						}
					}
					else
					{
						szukana = 1;
					}

				}




				else {

					if (j <= 29) {
						for (j; j <= wiersz + 1; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 2; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 1; j++)
							{
								tab1[i][j] = '2';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					pentla--;
					ala++;
					maszt2--;
				}
				szukana = 0;
				ala++;


			}
			ala++;


		}

		zmienna = maszt3;
		while (maszt3 > 0)
		{

			if (ala != 0) break;

			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 28)
					{
						for (i; i <= kolumna + 2; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 3; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 2; i++)
							{
								tab1[i][j] = '3';

							}

						}
					}
					else {
						szukana = 1;
					}

				}



				else {

					if (j <= 28) {
						for (j; j <= wiersz + 2; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 3; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 2; j++)
							{
								tab1[i][j] = '3';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					maszt3--;
					ala++;
					pentla--;
				}
				szukana = 0;
				ala++;

			}
			ala++;
		}

		zmienna = maszt4;
		while (maszt4 > 0)
		{
			if (ala != 0) break;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 27)
					{
						for (i; i <= kolumna + 3; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 4; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 3; i++)
							{
								tab1[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 27) {
						for (j; j <= wiersz + 3; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 4; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 3; j++)
							{
								tab1[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					maszt4--;
					ala++;
					pentla--;
				}
				ala++;
				szukana = 0;

			}
			ala++;
		}

		zmienna = maszt5;
		while (zmienna > 0)
		{
			if (ala != 0) break;

			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 26) {
						for (i; i <= kolumna + 4; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4') || (tab1[i][j] == '5')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 5; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 4; i++)
							{
								tab1[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 26) {
						for (j; j <= wiersz + 4; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4') || (tab1[i][j] == '5')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 5; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 4; j++)
							{
								tab1[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					maszt5--;
					ala++;
					pentla--;
				}
				szukana = 0;
				ala++;

			}
			ala++;

		}

		system("cls");
		if ((maszt2 == 0) && (maszt3 == 0) && (maszt4 == 0) && (maszt5 == 0))
		{
			zmienna = maszt22;
			while (zmienna > 0)
			{
				if (ala != 0) break;

				j = wiersz;
				i = kolumna;

				if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
				{
					if ((orientacja == 1))
					{
						if (i <= 29)
						{
							for (i; i <= kolumna + 1; i++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2')) szukana = 1;

							}
							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 1; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 2; i++)
									{
										tab2[i][j] = '*';

									}
								}


								j = wiersz;
								i = kolumna;
								for (i; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '2';

								}

							}
						}
						else
						{
							szukana = 1;
						}

					}




					else {

						if (j <= 29) {
							for (j; j <= wiersz + 1; j++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2')) szukana = 1;

							}

							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 2; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 1; i++)
									{
										tab2[i][j] = '*';

									}
								}
								j = wiersz;
								i = kolumna;
								for (j; j <= wiersz + 1; j++)
								{
									tab2[i][j] = '2';

								}

							}
						}
						else szukana = 1;
					}

					if (szukana == 0) {
						zmienna--;
						pentla--;
						ala++;
						maszt22--;
					}
					szukana = 0;
					ala++;
				}
				ala++;
			}

			zmienna = maszt33;
			while (zmienna > 0)
			{
				if (ala != 0) break;

				j = wiersz;
				i = kolumna;

				if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
				{
					if (orientacja == 1)
					{

						if (i <= 28)
						{
							for (i; i <= kolumna + 2; i++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3')) szukana = 1;

							}
							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 1; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 3; i++)
									{
										tab2[i][j] = '*';

									}
								}


								j = wiersz;
								i = kolumna;
								for (i; i <= kolumna + 2; i++)
								{
									tab2[i][j] = '3';

								}

							}
						}
						else {
							szukana = 1;
						}

					}

					else {

						if (j <= 28) {
							for (j; j <= wiersz + 2; j++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3')) szukana = 1;

							}

							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 3; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 1; i++)
									{
										tab2[i][j] = '*';

									}
								}
								j = wiersz;
								i = kolumna;
								for (j; j <= wiersz + 2; j++)
								{
									tab2[i][j] = '3';

								}

							}
						}
						else szukana = 1;
					}

					if (szukana == 0) {
						maszt33--;
						ala++;
						pentla--;
					}
					szukana = 0;
					ala++;
				}
				ala++;
			}

			zmienna = maszt44;
			while (zmienna > 0)
			{
				if (ala != 0) break;

				j = wiersz;
				i = kolumna;

				if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
				{
					if (orientacja == 1)
					{

						if (i <= 27)
						{
							for (i; i <= kolumna + 3; i++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4')) szukana = 1;

							}
							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 1; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 4; i++)
									{
										tab2[i][j] = '*';

									}
								}


								j = wiersz;
								i = kolumna;
								for (i; i <= kolumna + 3; i++)
								{
									tab2[i][j] = '4';

								}

							}
						}
						else szukana = 1;
					}



					else {

						if (j <= 27) {
							for (j; j <= wiersz + 3; j++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4')) szukana = 1;

							}

							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 4; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 1; i++)
									{
										tab2[i][j] = '*';

									}
								}
								j = wiersz;
								i = kolumna;
								for (j; j <= wiersz + 3; j++)
								{
									tab2[i][j] = '4';

								}

							}
						}
						else szukana = 1;
					}

					if (szukana == 0) {
						maszt44--;
						pentla--;
						ala++;
					}
					szukana = 0;
					ala++;

				}
				ala++;
			}

			zmienna = maszt55;
			while (zmienna > 0)
			{
				if (ala != 0) break;

				j = wiersz;
				i = kolumna;

				if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
				{
					if (orientacja == 1)
					{

						if (i <= 26) {
							for (i; i <= kolumna + 4; i++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4') || (tab2[i][j] == '5')) szukana = 1;

							}
							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 1; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 5; i++)
									{
										tab2[i][j] = '*';

									}
								}


								j = wiersz;
								i = kolumna;
								for (i; i <= kolumna + 4; i++)
								{
									tab2[i][j] = '5';

								}

							}
						}
						else szukana = 1;
					}



					else {

						if (j <= 26) {
							for (j; j <= wiersz + 4; j++)
							{
								if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4') || (tab2[i][j] == '5')) szukana = 1;

							}

							j = wiersz;
							i = kolumna;
							if (szukana == 0)
							{
								for (j = wiersz - 1; j <= wiersz + 5; j++)
								{
									for (i = kolumna - 1; i <= kolumna + 1; i++)
									{
										tab2[i][j] = '*';

									}
								}
								j = wiersz;
								i = kolumna;
								for (j; j <= wiersz + 4; j++)
								{
									tab2[i][j] = '5';

								}

							}
						}
						else szukana = 1;
					}

					if (szukana == 0) {
						zmienna--;
						pentla--;
						maszt55--;
						ala++;
					}
					szukana = 0;
					ala++;

				}
				ala++;
			}
		}
		j = 1;
		i = 1;
		if ((maszt2 == 0) && (maszt3 == 0) && (maszt4 == 0) && (maszt5 == 0) && (maszt22 == 0) && (maszt33 == 0) && (maszt44 == 0) && (maszt55 == 0))
		{
			for (i; i <= 30; i++)
			{
				for (j = 1; j <= 30; j++)
				{
					if ((tab1[i][j] != '2') && (tab1[i][j] != '3') && (tab1[i][j] != '4') && (tab1[i][j] != '5')) tab1[i][j] = '*';
					if ((tab2[i][j] != '2') && (tab2[i][j] != '3') && (tab2[i][j] != '4') && (tab2[i][j] != '5')) tab2[i][j] = '*';
					tab1p[i][j] = '*';
					tab2p[i][j] = '*';
				}

			}


			
		}

	
	}

	void gra_pvsp_gracz1()
	{
		system("cls");
		std::cout << "Kolej gracza nr 1:" << std::endl;
		std::cout << "Ty:                                                                         Przeciwnik:" << std::endl;
		j = 1;
		i = 1;
		for (i; i <= 30; i++)
		{
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab1[i][j] << " ";

			}
			std::cout << "                ";
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab2p[i][j] << " ";

			}
			std::cout << std::endl;
		}
		std::cout << "Podaj pole swojego ataku;" << std::endl << "wiersz: ";
		std::cin >> wiersz;
		std::cout << "kolumna: ";
		std::cin >> kolumna;
		if ((tab2[wiersz][kolumna] == '2') || (tab2[wiersz][kolumna] == '3') ||
			(tab2[wiersz][kolumna] == '4') || (tab2[wiersz][kolumna] == '5'))
		{
			tab2[wiersz][kolumna] = 'X';
			tab2p[wiersz][kolumna] = 'X';
			std::cout << "Trafione!" << std::endl;
			suma2--;
		}
		else {
			tab2[wiersz][kolumna] = 'o';
			tab2p[wiersz][kolumna] = 'o';
			std::cout << "Pudlo!" << std::endl;
		}
		if (suma2 == 0)std::cout << std::endl << "Wygrales!" << std::endl;
	}

	void gra_pvsp_gracz2()
	{
		system("cls");
		std::cout << "Kolej gracza nr 2:" << std::endl;
		std::cout << "Ty:                                                                         Przeciwnik:" << std::endl;
		j = 1;
		i = 1;
		for (i; i <= 30; i++)
		{
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab2[i][j] << " ";

			}
			std::cout << "                ";
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab1p[i][j] << " ";

			}
			std::cout << std::endl;
		}
		std::cout << "Podaj pole swojego ataku;" << std::endl << "wiersz: ";
		std::cin >> wiersz;
		std::cout << "kolumna: ";
		std::cin >> kolumna;
		if ((tab1[wiersz][kolumna] == '2') || (tab1[wiersz][kolumna] == '3') ||
			(tab1[wiersz][kolumna] == '4') || (tab1[wiersz][kolumna] == '5'))
		{
			tab1[wiersz][kolumna] = 'X';
			tab1p[wiersz][kolumna] = 'X';
			std::cout << "Trafione!" << std::endl;
			suma1--;
		}
		else {
			tab1[wiersz][kolumna] = 'o';
			tab1p[wiersz][kolumna] = 'o';
			std::cout << "Pudlo!" << std::endl;
		}
		if (suma1 == 0)std::cout << std::endl << "Wygrales!" << std::endl;
	}

	void gra_pcvspc_gracz1(int wiersz, int kolumna)
	{
		system("cls");
		std::cout << "Kolej gracza nr 1:" << std::endl;
		std::cout << "Ty:                                                                         Przeciwnik:" << std::endl;
		j = 1;
		i = 1;
		for (i; i <= 30; i++)
		{
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab1[i][j] << " ";

			}
			std::cout << "                ";
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab2p[i][j] << " ";

			}
			std::cout << std::endl;
		}
		std::cout << "wiersz: "<<wiersz<<std::endl<<"kolumna: "<<kolumna<<std::endl;
		if ((tab2[wiersz][kolumna] == '2') || (tab2[wiersz][kolumna] == '3') ||
			(tab2[wiersz][kolumna] == '4') || (tab2[wiersz][kolumna] == '5'))
		{
			tab2[wiersz][kolumna] = 'X';
			tab2p[wiersz][kolumna] = 'X';
			std::cout << "Trafione!" << std::endl;
			suma2--;
		}
		else {
			tab2[wiersz][kolumna] = 'o';
			tab2p[wiersz][kolumna] = 'o';
			std::cout << "Pudlo!" << std::endl;
		}
		if (suma2 == 0)std::cout << std::endl << "Wygrales!" << std::endl;
	}

	void gra_pcvspc_gracz2(int wiersz, int kolumna)
	{
		system("cls");
		std::cout << "Kolej gracza nr 2:" << std::endl;
		std::cout << "Ty:                                                                         Przeciwnik:" << std::endl;
		j = 1;
		i = 1;
		for (i; i <= 30; i++)
		{
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab2[i][j] << " ";

			}
			std::cout << "                ";
			for (j = 1; j <= 30; j++)
			{
				std::cout << tab1p[i][j] << " ";

			}
			std::cout << std::endl;
		}
		std::cout << "wiersz: " << wiersz << std::endl << "kolumna: " << kolumna << std::endl;
		if ((tab1[wiersz][kolumna] == '2') || (tab1[wiersz][kolumna] == '3') ||
			(tab1[wiersz][kolumna] == '4') || (tab1[wiersz][kolumna] == '5'))
		{
			tab1[wiersz][kolumna] = 'X';
			tab1p[wiersz][kolumna] = 'X';
			std::cout << "Trafione!" << std::endl;
			suma1--;
		}
		else {
			tab1[wiersz][kolumna] = 'o';
			tab1p[wiersz][kolumna] = 'o';
			std::cout << "Pudlo!" << std::endl;
		}
		if (suma1 == 0)std::cout << std::endl << "Wygrales!" << std::endl;
	}

	void dodawanie_jednego()
	{
		system("cls");
		std::cout << "Podaj liczbe statkow 2, 3, 4 i 5 - masztowych, odzielajac jes spacjami";
		std::cin >> maszt2 >> maszt3 >> maszt4 >> maszt5;
		sumamasztow = maszt2 + maszt3 + maszt4 + maszt5;
		suma1 = 2 * maszt2 + 3 * maszt3 + 4 * maszt4 + 5 * maszt5;
		suma2 = suma1;
		pentla = sumamasztow;
		while (sumamasztow > 20)
		{
			std::cout << "Podales za duza ilos statkow, sprobuj jeszcze raz!";
			std::cin >> maszt2 >> maszt3 >> maszt4 >> maszt5;
			sumamasztow = maszt2 + maszt3 + maszt4 + maszt5;
			suma1 = 2 * maszt2 + 3 * maszt3 + 4 * maszt4 + 5 * maszt5;
			suma2 = suma1;
		}
		std::cout << "Podaj dane statkow dla pierwszego gracza:" << std::endl;
		zmienna = maszt2;
		while (zmienna > 0)
		{
			std::cout << "statki 2-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if ((orientacja == 1))
				{
					if (i <= 29)
					{
						for (i; i <= kolumna + 1; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 2; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 1; i++)
							{
								tab1[i][j] = '2';

							}

						}
					}
					else
					{
						szukana = 1;
					}

				}




				else {

					if (j <= 29) {
						for (j; j <= wiersz + 1; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 2; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 1; j++)
							{
								tab1[i][j] = '2';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt3;
		while (zmienna > 0)
		{
			std::cout << "statki 3-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 28)
					{
						for (i; i <= kolumna + 2; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 3; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 2; i++)
							{
								tab1[i][j] = '3';

							}

						}
					}
					else {
						szukana = 1;
					}

				}



				else {

					if (j <= 28) {
						for (j; j <= wiersz + 2; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 3; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 2; j++)
							{
								tab1[i][j] = '3';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt4;
		while (zmienna > 0)
		{
			std::cout << "statki 4-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 27)
					{
						for (i; i <= kolumna + 3; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 4; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 3; i++)
							{
								tab1[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 27) {
						for (j; j <= wiersz + 3; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 4; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 3; j++)
							{
								tab1[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}

		zmienna = maszt5;
		while (zmienna > 0)
		{
			std::cout << "statki 5-masztowe:" << std::endl << "Podaj nr wiersza (od 1 do 30)";
			std::cin >> kolumna;
			std::cout << "Podaj nr kolumny (od 1 do 30)";
			std::cin >> wiersz;
			std::cout << "1 jesli statek ma byc rozmieszczony pionowo, 0 jesli statek ma byc rozmieszczony poziomo:";
			std::cin >> orientacja;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 26) {
						for (i; i <= kolumna + 4; i++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4') || (tab1[i][j] == '5')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 5; i++)
								{
									tab1[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 4; i++)
							{
								tab1[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 26) {
						for (j; j <= wiersz + 4; j++)
						{
							if ((tab1[i][j] == '*') || (tab1[i][j] == '2') || (tab1[i][j] == '3') || (tab1[i][j] == '4') || (tab1[i][j] == '5')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 5; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab1[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 4; j++)
							{
								tab1[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					std::cout << std::endl << "Statek zostal dodany" << std::endl;
				}
				else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
				szukana = 0;

			}
			else std::cout << std::endl << "Podaj dane statku ponownie" << std::endl;
		}
		j = 1;
		i = 1;
		for (i; i <= 30; i++)
		{
			for (j = 1; j <= 30; j++)
			{
				if ((tab1[i][j] != '2') && (tab1[i][j] != '3') && (tab1[i][j] != '4') && (tab1[i][j] != '5')) tab1[i][j] = '*';
				tab1p[i][j] = '*';
				
			}

		}

		
		system("pause");
		system("cls");


	}

	void dodawanie_drugi_pc(int kolumna, int wiersz, int orientacja)
	{
		system("cls");
		ala = 0;
		zmienna = maszt2;
		while (maszt2 > 0)
		{
			if (ala != 0) break;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if ((orientacja == 1))
				{
					if (i <= 29)
					{
						for (i; i <= kolumna + 1; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 2; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 1; i++)
							{
								tab2[i][j] = '2';

							}

						}
					}
					else
					{
						szukana = 1;
					}

				}




				else {

					if (j <= 29) {
						for (j; j <= wiersz + 1; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 2; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 1; j++)
							{
								tab2[i][j] = '2';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					pentla--;
					ala++;
					maszt2--;
				}
				szukana = 0;
				ala++;


			}
			ala++;


		}

		zmienna = maszt3;
		while (maszt3 > 0)
		{

			if (ala != 0) break;

			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 28)
					{
						for (i; i <= kolumna + 2; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 3; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 2; i++)
							{
								tab2[i][j] = '3';

							}

						}
					}
					else {
						szukana = 1;
					}

				}



				else {

					if (j <= 28) {
						for (j; j <= wiersz + 2; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 3; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 2; j++)
							{
								tab2[i][j] = '3';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					maszt3--;
					ala++;
					pentla--;
				}
				szukana = 0;
				ala++;

			}
			ala++;
		}

		zmienna = maszt4;
		while (maszt4 > 0)
		{
			if (ala != 0) break;
			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 27)
					{
						for (i; i <= kolumna + 3; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 4; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 3; i++)
							{
								tab2[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 27) {
						for (j; j <= wiersz + 3; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 4; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 3; j++)
							{
								tab2[i][j] = '4';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					maszt4--;
					ala++;
					pentla--;
				}
				ala++;
				szukana = 0;

			}
			ala++;
		}

		zmienna = maszt5;
		while (zmienna > 0)
		{
			if (ala != 0) break;

			j = wiersz;
			i = kolumna;

			if ((i >= 1) && (i < 31) && (j > 0) && (j < 31))
			{
				if (orientacja == 1)
				{

					if (i <= 26) {
						for (i; i <= kolumna + 4; i++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4') || (tab2[i][j] == '5')) szukana = 1;

						}
						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 1; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 5; i++)
								{
									tab2[i][j] = '*';

								}
							}


							j = wiersz;
							i = kolumna;
							for (i; i <= kolumna + 4; i++)
							{
								tab2[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}



				else {

					if (j <= 26) {
						for (j; j <= wiersz + 4; j++)
						{
							if ((tab2[i][j] == '*') || (tab2[i][j] == '2') || (tab2[i][j] == '3') || (tab2[i][j] == '4') || (tab2[i][j] == '5')) szukana = 1;

						}

						j = wiersz;
						i = kolumna;
						if (szukana == 0)
						{
							for (j = wiersz - 1; j <= wiersz + 5; j++)
							{
								for (i = kolumna - 1; i <= kolumna + 1; i++)
								{
									tab2[i][j] = '*';

								}
							}
							j = wiersz;
							i = kolumna;
							for (j; j <= wiersz + 4; j++)
							{
								tab2[i][j] = '5';

							}

						}
					}
					else szukana = 1;
				}

				if (szukana == 0) {
					zmienna--;
					maszt5--;
					ala++;
					pentla--;
				}
				szukana = 0;
				ala++;

			}
			ala++;

		}
		j = 1;
		i = 1;
		if ((maszt2 == 0) && (maszt3 == 0) && (maszt4 == 0) && (maszt5 == 0) )
		{
			for (i; i <= 30; i++)
			{
				for (j = 1; j <= 30; j++)
				{
					if ((tab2[i][j] != '2') && (tab2[i][j] != '3') && (tab2[i][j] != '4') && (tab2[i][j] != '5')) tab2[i][j] = '*';
					tab2p[i][j] = '*';
				}

			}

		}


	}

};

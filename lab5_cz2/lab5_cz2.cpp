// lab5_cz2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include"statki.h"
#include <time.h>

int losowanie() {
    return ((std::rand() % 30) + 1);
}
int losowanie2() {
    return ((std::rand() % 2));
}

statki sa;
int i = 0, j = 0;
int main()
{
    int ala, frania, orient;
    int przelacznik = 0;
    srand((unsigned int)time(NULL));

    std::cout << "Gra w statki" << std::endl;
    std::cout << "[1] gra gracz vs gracz" << std::endl;
    std::cout << "[2] gra gracz vs komputer" << std::endl;
    std::cout << "[3] gra komputer vs komputer" << std::endl;
    std::cin >> i;
    system("pause");
    system("cls");
    switch (i)
    {
    case 1: {
        while ((przelacznik != 1) && (przelacznik != 2))
        {
            std::cout << "[1] ustaw statki" << std::endl;
            std::cout << "[2] losuj ustawienie statkow" << std::endl;
            std::cin >> przelacznik;
            switch (przelacznik)
            {
            case 1: {
                sa.dodawanie();
                break;
            }
            case 2: {
                while (sa.pentla != 0)
                {
                    ala = losowanie();
                    frania = losowanie();
                    orient = losowanie2();
                    sa.dodawanie_losowe(ala, frania, orient);
                }
                break;
            }
            default:
                break;
            }
        }

        while ((sa.suma1 > 0) && (sa.suma2 > 0))
        {
            sa.gra_pvsp_gracz1();
            if ((sa.suma1 == 0) || (sa.suma2 == 0))break;
            system("pause");
            system("cls");

            sa.gra_pvsp_gracz2();
            if ((sa.suma1 == 0) || (sa.suma2 == 0))break;
            system("pause");
            system("cls");
        }
        break;
    }
    case 2: {
        while ((przelacznik != 1) && (przelacznik != 2))
        {
            std::cout << "[1] ustaw statki" << std::endl;
            std::cout << "[2] losuj ustawienie statkow" << std::endl;
            std::cin >> przelacznik;
            switch (przelacznik)
            {
            case 1: {
                sa.dodawanie_jednego();
                while (sa.pentla != 0)
                {
                    ala = losowanie();
                    frania = losowanie();
                    orient = losowanie2();
                    sa.dodawanie_drugi_pc(ala, frania, orient);
                }
                break;
            }
            case 2: {
                while (sa.pentla != 0)
                {
                    ala = losowanie();
                    frania = losowanie();
                    orient = losowanie2();
                    sa.dodawanie_losowe(ala, frania, orient);
                }
                break;
            }
            default:
                break;
            }
        }



        
        while ((sa.suma1 > 0) && (sa.suma2 > 0))
        {

            sa.gra_pvsp_gracz1();
            if ((sa.suma1 == 0) || (sa.suma2 == 0))break;
            system("pause");
            system("cls");

            ala = losowanie();
            frania = losowanie();
            while (sa.tab1p[ala][frania] != '*')
            {
                ala = losowanie();
                frania = losowanie();
            }
            sa.gra_pcvspc_gracz2(ala, frania);
            if ((sa.suma1 == 0) || (sa.suma2 == 0))break;
            system("pause");
            system("cls");
        }
        break;
    }
    case 3: {
        while (sa.pentla != 0)
        {
            ala = losowanie();
            frania = losowanie();
            orient = losowanie2();
            sa.dodawanie_losowe(ala, frania, orient);
        }
        while ((sa.suma1 > 0) && (sa.suma2 > 0))
        {
            ala = losowanie();
            frania = losowanie();
            while (sa.tab2p[ala][frania] != '*')
            {
                ala = losowanie();
                frania = losowanie();
            }
            sa.gra_pcvspc_gracz1(ala, frania);
            if ((sa.suma1 == 0) || (sa.suma2 == 0))break;
            system("pause");
            system("cls");

            ala = losowanie();
            frania = losowanie();
            while (sa.tab1p[ala][frania] != '*')
            {
                ala = losowanie();
                frania = losowanie();
            }
            sa.gra_pcvspc_gracz2(ala, frania);
            if ((sa.suma1 == 0) || (sa.suma2 == 0))break;
            system("pause");
            system("cls");
        }
        break;
    }
    default:
        break;
    }

}


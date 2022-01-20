// Proiect_banca.cpp : Banca Proiect.
//ITSchoolBank
//
//1. O clasa cont bancar ce trebuie sa aibe atribute precum nume, prenume, sold, tip de cont(valuta sau lei) IBAN
//Un cont trebuie neaparat sa aibe un nume, prenume si un IBAN care trebuie sa fie unic
//
//2.in maine se afla terminalul principal al bancii in care trebuie sa avem urmatoarele optiunii
//2.1 numar de conturi-- > ce ne da numarul de conturi inregistrate in banca
//2.2 creare cont-- > cu aceasta optiune se poate crea un cont nou
//2.2.1 -- > ar trebui un scrren diferit si un set de optiuni in care
//operatorul bancii sa introduca datele pentru crearea contului.(trebuie ca aceasta procedura sa verifice daca exista deja contul ce
//    se doreste creat iar daca da sa anunte opreatorul)
//    2.2.2 -- > o optiune de return la main screen(ecranul cu optiunie principale)
//    2.3 O optiune de modificare cont->in care operatorul poate sa modifice date despre cont(ex schimbare nume, schimbare sume etc)
//    2.4 O optiune prin care un cont se poate sterge din sistemul bancii
//    2.5 O optiune prin care un cont poate sa extraga sume - > vrei sa adaugi sau sa extragi o suma de bani
//    2.6 O optiune prin care un cont sa vada care este suma din cont
//    Trebuie cautat contul intordus iar daca exista se poate vizualiza
//    Daca nu exista putem incepe o procedura de creare cont
//
//    3. Un sistem in care putem sa salvam datele acestea intr - un fisier local(CSV file)
//

#include <iostream>
#include"ManagerConturi.h"

int main()
{
    ManagerConturi manager;
    int optiune;
    do
    {
        std::cout << "Alege una din urmatoarele optiuni\n";
        std::cout << " 1 -> Numar conturi\n";
        std::cout << " 2 -> Creare cont\n";
        std::cout << " 3 -> Modificare cont\n";
        std::cout << " 4 -> Stergere cont\n";
        std::cout << " 5 -> Eliberare/depunere\n";
        std::cout << " 6 -> Detalii cont\n";
        std::cout << " 0 -> exit\n";

        std::cout << " introduceti operatia pe care o doriti\n";
        std::cin >> optiune;
        switch (optiune)
        {
        case 1:
            std::cout << "Ati ales optiuna 1\n";
            break;
        case 2:
            std::cout << "Ati ales optiuna 2\n";
            system("cls");
            manager.adaugareCont();
            break;
        case 3:
            std::cout << "Ati ales optiuna 3\n";
            break;
        case 4:
            std::cout << "Ati ales optiuna 4\n";
            break;
        case 5:
            std::cout << "Ati ales optiuna 4\n";
            break;
        case 6:
            std::cout << "Ati ales optiuna 4\n";
            break;
        default:
            std::cout << "Optiune invalida\n";
            break;
        }
    } while (optiune != 0);
}



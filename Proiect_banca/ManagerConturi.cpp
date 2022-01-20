#include "ManagerConturi.h"
// Tema Adaptati metoda Create Iban pentru a genera ibanuri unice


std::string ManagerConturi::CreateIban()
{
	return std::string();
}
void ManagerConturi::adaugareCont()
{
	std::string nume, prenume, iban;
	std::cout << "Introduceti numele persoanei:\n";
	std::cin >> nume;
	std::cout << "Introduceti prenumele persoanei:\n";
	std::cin >> prenume;
	//TODO: replace with createIban()
	iban = "TestIban";
	ContBancar* cont = new ContBancar(nume, prenume, iban);
	m_listaConturi.push_back(cont);
	system("cls");
}

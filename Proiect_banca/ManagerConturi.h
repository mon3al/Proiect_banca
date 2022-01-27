#pragma once
#include "ContBancar.h"
#include<vector>
#include <iostream>


class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	//TODO: metoda CreateIban trebuie sa genereze un IBan unic
	//Tema: Adaptati metoda CreateIban pentru a genera Ibanuri unice
    //Format:RO44ItSchool(caractere alfa-numerice - 5)
	std::string CreateIban();
	std::string CreateIban1(std::string Nume, std::string PreNume);
public:
	void adaugareCont();
	int GetNumarConturi();
	void printAllConturi();
	void CautaCont();
};
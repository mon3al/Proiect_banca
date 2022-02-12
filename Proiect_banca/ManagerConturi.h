#pragma once
#include "ContBancar.h"
#include<vector>
#include <iostream>
#include "FileManager.h"


class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	//TODO: metoda CreateIban trebuie sa genereze un IBan unic
	//Tema: Adaptati metoda CreateIban pentru a genera Ibanuri unice
    //Format:RO44ItSchool(caractere alfa-numerice - 5)
	std::string CreateIban(); // Todo IBAN is not entirely unique because if we stop the program it starts reusing keys
	ContBancar* FindAccount();
	FileManager* m_fileManager;
public:
	void adaugareCont();
	int GetNumarConturi();
	void printAllConturi();
	void CautaCont();
	void EraseAccount();
	void ManipulareSold();
	void ModificareCont();
	ManagerConturi();
	~ManagerConturi();
};
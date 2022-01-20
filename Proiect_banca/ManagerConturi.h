#pragma once
#include "ContBancar.h"
#include<vector>
#include <iostream>


class ManagerConturi
{
private:
	std::vector<ContBancar*> m_listaConturi;
	//TODO: metoda CreateIban trebuie sa genereze un IBan unic
	std::string CreateIban();
public:
	void adaugareCont();
};
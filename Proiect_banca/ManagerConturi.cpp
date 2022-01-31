#include "ManagerConturi.h"
#include<algorithm>


// Tema Adaptati metoda Create Iban pentru a genera ibanuri unice


 void ManagerConturi::adaugareCont()
{
	std::string nume, prenume, iban;
	std::cout << "Introduceti numele persoanei:\n";
	std::cin >> nume;
	std::cout << "Introduceti prenumele persoanei:\n";
	std::cin >> prenume;
	iban = CreateIban();
	std::cout << iban<<std::endl;
	ContBancar* cont = new ContBancar(nume, prenume, iban);
	m_listaConturi.push_back(cont);
	//system("cls");
}

 int ManagerConturi::GetNumarConturi()
 {
	 return m_listaConturi.size();
 }

 void ManagerConturi::printAllConturi()
 {
	/* for (auto it = m_listaConturi.begin(); it != m_listaConturi.end(); it++)
	 {
		 (*it)->getNume();
	 }*/
	 for (auto& cont : m_listaConturi)
	 {
		 std::cout<< "Nume " << cont->getNume()<<std::endl;
		 std::cout << "Prenume " << cont->getPrenume()<< std::endl;
		 std::cout << "IBAN " << cont->getIban() << std::endl;
		 std::cout << "Sold " << cont->getSold() << std::endl;
	 }
	 std::cout << "Apasati tasta 0 pentru a va intorce\n";
	 char back;
	 std::cin >> back;

 }

 void ManagerConturi::CautaCont()
 {
	 int Alegere;
	 std::string name, forename, bank_account_number ;
	 std::cout << "Cauta un cont dupa:\n";
	 std::cout << " 1 -> Numele titularului\n";
	 std::cout << " 2 -> Prenumele Titularului\n";
	 std::cout << " 3 -> IBAN-ul titularului\n";
	 std::cin >> Alegere;
	 switch (Alegere)
	 {
	 case 1:
		 std::cout << "Introduceti numele titularului de cont\n";
		 std::cin >> name;
		 for (auto& cont : m_listaConturi)
		 {
			 if (name == cont->getNume())
			 {
				 std::cout << "Nume " << cont->getNume() << std::endl;
				 std::cout << "Prenume " << cont->getPrenume() << std::endl;
				 std::cout << "IBAN " << cont->getIban() << std::endl;
				 std::cout << "Sold " << cont->getSold() << std::endl;
				 std::cout << "  \n";
			 }
			 else
				 std::cout << name << "nu are cont la noi la banca\n";
		 }
		 break;
	 case 2:
		 std::cout << "Introduceti prenumele titularului de cont\n";
		 std::cin >> forename;
		 for (auto& cont : m_listaConturi)
		 {
			 if (forename == cont->getPrenume())
			 {
				 std::cout << "Nume " << cont->getNume() << std::endl;
				 std::cout << "Prenume " << cont->getPrenume() << std::endl;
				 std::cout << "IBAN " << cont->getIban() << std::endl;
				 std::cout << "Sold " << cont->getSold() << std::endl;
				 std::cout << "  \n";
			 }
			 else
				 std::cout << forename << "nu are cont la noi la banca\n";
		 }
		 break;
	 case 3:
		 std::cout << "Introduceti numele titularului de cont\n";
		 std::cin >> bank_account_number;
		 for (auto& cont : m_listaConturi)
		 {
			 if (bank_account_number == cont->getIban())
			 {
				 std::cout << "Nume " << cont->getNume() << std::endl;
				 std::cout << "Prenume " << cont->getPrenume() << std::endl;
				 std::cout << "IBAN " << cont->getIban() << std::endl;
				 std::cout << "Sold " << cont->getSold() << std::endl;
				 std::cout << "  \n";
			 }
			 else
				 std::cout << "nu gasim acest IBAN\n";
		 }
		 break;
	 }
	 
  
 }

 void ManagerConturi::EraseAccount()
 {
	 std::cout << " Introduceti datele contului care urmeaza sa fie sters \n";
	 ContBancar* cont = FindAccount();
	 std::vector<ContBancar*>::iterator it = std::find(m_listaConturi.begin(), m_listaConturi.end(), cont);
	 m_listaConturi.erase(it);
	 delete cont;
 }


 void ManagerConturi::ManipulareSold()
 {
	 ContBancar* cont = FindAccount();
	 if (cont != nullptr)
	 {
		 float valoare;
		 std::cout << "Introduceti suma pe care doriti sa o depuneti :\n ";
		 std::cin >> valoare;
			 cont->ManipulareSold(valoare);
	 }
	 else
	 {
		 std::cout << " Contul este inexistent\n";
	 }
 }

 void ManagerConturi::ModificareCont()
 {
	 std::cout << " Introduceti datele contului care urmeaza sa fie modificat \n";
	 ContBancar* cont = FindAccount();
	 if (cont != nullptr)
	 {
		 std::string altnume, altprenume;
		 std::cout << "Introduceti numele modificat :\n ";
		 std::cin >> altnume;
		 std::cout << "Introduceti prenumele modificat :\n ";
		 std::cin >> altprenume;
		 cont->ModificareCont(altnume, altprenume);
	 }
	 else
	 {
		 std::cout << " Contul este inexistent\n";
	 }
 }

 std::string ManagerConturi::CreateIban()
 {
	 std::string IBAN= "RO44ItSchool", IBAn;
	 char alphanumeric[] = "0123456789QWERTYUIOPLKJHGFDSAZXCVBNM";
	 for (int i = 0; i < 5; i++)
	 {
		 IBAn = alphanumeric[rand() % (sizeof(alphanumeric) - 1)]; 
		 IBAN = IBAN + IBAn;
	 }
	 return IBAN;
}

 std::string ManagerConturi::CreateIban1(std::string Nume, std::string PreNume)
 {
	 return std::string();
 }

 ContBancar* ManagerConturi::FindAccount()
 {
	 int cauta_dupa;
	 std::string nume, prenume;
	 std::cout << "Introduceti datele de cautare\n";
	 std::cout <<" 1-> Numele titularului\n";
	 std::cout <<" 2-> Prenumele titularului\n";
	 std::cin >> cauta_dupa;
	 switch(cauta_dupa)
	 {
	 case 1:
		 std::cout << " Numele titularului : \n";
		 std::cin >> nume;
		 // TODO trebuie exstins fie face o petoda ce accepta nume sau prenume
		 // fie face cumva in aceasta metoda
		 for (auto& cont : m_listaConturi)
		 {
			 if (cont->getNume() == nume)
				 return cont;
		 }
		 std::cout << "Titularul nu a fost gasit \n";
		 return nullptr;
		 break;
	 case 2:
		 std::cout << " Prenumele titularului : \n";
		 std::cin >> prenume;
		 for (auto& cont : m_listaConturi)
		 {
			 if (cont->getPrenume() == prenume)
				 return cont;
		 }
		 std::cout << "Titularul nu a fost gasit \n";
		 return nullptr;
		 break;
	 }
	 
 }

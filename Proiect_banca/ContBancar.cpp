#include "ContBancar.h"

ContBancar::ContBancar(std::string nume, std::string prenume, std::string iban)
{
	m_nume = nume;
	m_prenume = prenume;
	m_IBAN = iban;
	m_sold = 0;
	m_tipSold = TipMoneda::RON;
}

std::string ContBancar::getNume() const
{
    return m_nume;
}

std::string ContBancar::getPrenume() const
{
	return m_prenume;
}

std::string ContBancar::getIban() const
{
	return m_IBAN;
}

float ContBancar::getSold() const
{
	return m_sold;
}

void ContBancar::ManipulareSold(float suma)
{
	m_sold = +suma;
}

void ContBancar::ModificareCont(std::string nume_modif, std::string prenume_modif)
{
	m_nume = nume_modif;
	m_prenume = prenume_modif;
}



#include "Matrice.h"

#include <exception>

using namespace std;


Matrice::Matrice(int m, int n) {
	///
	/// Constructor pentru Matrice
	///  - verificam ca numarul de matrici si coloane sa fie > 0 
	/// daca este atunci modificam daca nu ridicam o eroare
	
	if (m <= 0 || n <= n)
	{
		throw "Matricea nu poate fi vida";
	}
	
	this->nr_Linii = m;
	this->nr_Coloane = n;
}



int Matrice::nrLinii() const{
	/* returneaza numarul de linii(int) */
	return this->nr_Linii;
}


int Matrice::nrColoane() const{
	/* returneaza numarul de coloane(int) */
	return this->nr_Coloane;
}


TElem Matrice::element(int i, int j) const{
	/* cautam elemetul daca exita ii returnam valoarea altfel returnam valoarea 0 
	se arunca exceptie daca (i,j) nu e pozitie valida in Matrice  */
	if (i < 0 || j < 0 || j > this->nrColoane() || i > this->nrLinii())
		throw "Pozitie invalida";



	return 0;
}



TElem Matrice::modifica(int i, int j, TElem e) {
	/* 
	se arunca exceptie daca (i,j) nu e pozitie valida in Matrice  */

	if (i < 0 || j < 0 || j > this->nrColoane() || i > this->nrLinii())
		throw "Pozitie invalida";
	return -1;
}



#include <fstream>
#include <iostream>
#include "trideni.h"

void nacti (std::string nazev, seznam_slov & jmena){
	std::ifstream vstupni_soubor;
	vstupni_soubor.open(nazev.c_str());
	
	std::string radek;
	
	while (std::getline(vstupni_soubor,radek)) {
		jmena.push_back(radek);
	}
	
	vstupni_soubor.close();
}

void serad(seznam_slov & jmena){
	std:: string tmp;
	bool bylo_prohozeno;
	
	do {
		bylo_prohozeno = false;
		for (int i = 1; i<jmena.size(); i++) {
			if (jmena[i].compare(jmena[i-1]) < 0) {
				tmp = jmena[i];
				jmena[i] = jmena[i-1];
			    jmena[i-1] = tmp;
		        bylo_prohozeno = true;	
			}
		}
		
	} while (bylo_prohozeno);
	
}

bool zeptej_se_jestli_vypsat(){
char vypsat;
while (true) {
	std::cout << "Chcete vypsat serazena jmena na obrazovku? (A/N)" << std::endl;
	std::cin >> vypsat;
	if (vypsat == 'A' || vypsat == 'a') return true;
	else if (vypsat == 'N' || vypsat == 'n') return false;
	else std::cout << "Nerozumim. ";
}

}

void vypis(seznam_slov const& jmena){
	for (int i = 0; i<jmena.size(); ++i) {
		std::cout << jmena[i] << std::endl;
	}
}

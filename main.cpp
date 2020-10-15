#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <exception>
#include <vector>

// Vytvorte tento hlavickovy soubor a definujte v nem datovy typ seznam_slov a
// hlavicky funkci viz nize (UKOL 1-4)
#include "trideni.h"

// Dale vytvorte soubor trideni.cpp ktery bude obsahovat telo techto funkci

///////////////////////////////////////////////////////////////////////////////////

// Nacteni prvniho argumentu z prikazove radky
// Promenna argc obsahuje pocet argumentu programu (vcetne samotneho nazvu programu)
// Pole argv obsahuje jednotlive argumenty z prikazove radky
std::string nazev_z_prikazove_radky(int argc, char* argv[]) {
    if (argc < 2)
        throw std::runtime_error("Musite zadat nazev vstupniho souboru");

    return std::string(argv[1]);
}

// Hlavni funkce programu

int main(int argc, char* argv[]) {

    std::string nazev_vstupniho_souboru = nazev_z_prikazove_radky(argc,argv);
    
    seznam_slov jmena;

    // UKOL 1 - Implementujte nasledujici funkci, ktera nacte do objektu "jmena"
    //          vsechna slova ve vstupnim souboru (1 radek = 1 polozka)
    nacti(nazev_vstupniho_souboru, jmena);

    std::cout << "Nacteno " << jmena.size() << " slov." << std::endl;
    std::cout << "Serazuji slova ... " << std::endl;

    // Zacatek mereni CPU casu
    clock_t start = clock();

    // UKOL 2 - Tato funkce seradi jmena podle abecedy
    //          (tridici algoritmus zvolte dle libosti, nejjednodussi je asi bubble sort)
    serad(jmena);

    // Konec mereni CPU casu
    clock_t end = clock();
    float seconds = (float)(end - start) / CLOCKS_PER_SEC;

    std::cout << "Hotovo. Serazeni trvalo " << seconds << " sekundy." <<  std::endl << std::endl;

    // UKOL 3 - funkce v podmince se zepta uzivatele,
    //          jestli chce vypsat jmena na obrazovku
    if (zeptej_se_jestli_vypsat()) {
      // UKOL 4 - Tato funkce vypise serazena jmena na obrazovku
      vypis(jmena); 
    }

    return 0;
}

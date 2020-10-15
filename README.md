# Třídění

Máte k dispozici tělo programu (v souboru main.cpp), který má za úkol načíst ze souboru jména uložená na řádcích a setřídit je podle abecedy.

Funkci main neměňte (pokud to nebude nutné), ale vytvořte implementace funkcí (viz komentáře v souboru main.cpp), které bude program potřebovat. Tyto uložte do hlavičkového souboru trideni.h a zdrojového souboru trideni.cpp. 
Jako třídící algoritmus můžete použít např. https://en.wikipedia.org/wiki/Bubble_sort (asi nejjednodušší), https://en.wikipedia.org/wiki/Insertion_sort nebo něco jiného
Kromě toho budete potřebovat definovat datový typ seznam_slov (pomocí příkazu typedef). Pro bubble sort bude nejvhodnější asi vektor řetězců ze std. knihovny, případně pole ukazatelů na řetězce (prohazování bude rychlejší). Pro insertion sort pak bude vhodnější datová struktura spíše seznam std::list (optimalizovaný pro vkládání).

Seznam jmena.dat slouží spíše pro testování programu. Na seznamu jmena2.dat pak už můžeme porovnat efektivitu našich programů (a hrubý výkon CPU na jádro) - program změří a vypíše čas, který mu třídění zabralo.

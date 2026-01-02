#include <iostream>
#include "Studentas.h"

int main() {
    try {
        Studentas s;

        int pasirinkimas;
        std::cout << "Pasirinkite skaiciavima: 1 - Vidurkis, 2 - Mediana: ";
        std::cin >> pasirinkimas;
        bool naudotiMediana = (pasirinkimas == 2);

        std::cout << "Iveskite: vardas pavarde ND... (0 - baigti) egzaminas\n";
        std::cout << "Pvz: Jonas Jonaitis 8 9 10 0 9\n";
        std::cin >> s;

        // Jei nori – gali parodyti ir bendrai per operator<<
        // std::cout << s << std::endl;

        std::cout << "Studentas: " << s.getPavarde() << " " << s.getVardas() << "\n";
        if (naudotiMediana)
            std::cout << "Galutinis (Med.): " << s.galutinis(true) << std::endl;
        else
            std::cout << "Galutinis (Vid.): " << s.galutinis(false) << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Klaida: " << e.what() << std::endl;
    }

    return 0;
}

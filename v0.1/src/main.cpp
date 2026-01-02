#include <iostream>
#include "Studentas.h"

int main() {
    try {
        Studentas s;

        s.setVardas("Jonas");
        s.setPavarde("Jonaitis");

        s.addND(8);
        s.addND(9);
        s.addND(10);

        s.setEgzaminas(9);

        std::cout << s << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Klaida: " << e.what() << std::endl;
    }

    return 0;
}

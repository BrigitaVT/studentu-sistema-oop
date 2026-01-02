#include "Studentas.h"
#include <numeric>   // std::accumulate
#include <stdexcept> // std::runtime_error

Studentas::Studentas() : egzaminas(0) {}

void Studentas::setVardas(const std::string& v) {
    vardas = v;
}

void Studentas::setPavarde(const std::string& p) {
    pavarde = p;
}

void Studentas::addND(int pazymys) {
    if (pazymys < 1 || pazymys > 10)
        throw std::runtime_error("Neteisingas ND pazymys");
    nd.push_back(pazymys);
}

void Studentas::setEgzaminas(int egz) {
    egzaminas = egz;
}

std::string Studentas::getVardas() const {
    return vardas;
}

std::string Studentas::getPavarde() const {
    return pavarde;
}

double Studentas::galutinisVidurkis() const {
    if (nd.empty())
        return 0.0;

    double vid = std::accumulate(nd.begin(), nd.end(), 0.0) / nd.size();
    return 0.4 * vid + 0.6 * egzaminas;
}
std::ostream& operator<<(std::ostream& out, const Studentas& s) {
    out << s.getPavarde() << " "
        << s.getVardas()
        << " | Galutinis (vid.): "
        << s.galutinisVidurkis();
    return out;
}
std::istream& operator>>(std::istream& in, Studentas& s) {
    s = Studentas(); // išvalome senus duomenis

    in >> s.vardas >> s.pavarde;

    int pazymys;
    while (in >> pazymys && pazymys != 0) {
        s.addND(pazymys);
    }

    in >> s.egzaminas;
    return in;
}

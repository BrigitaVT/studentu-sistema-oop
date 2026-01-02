#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>

class Studentas {
private:
    std::string vardas;
    std::string pavarde;
    std::vector<int> nd;   // namų darbų pažymiai
    int egzaminas;

public:
    // Konstruktorius
    Studentas();

    // Set'eriai
    void setVardas(const std::string& v);
    void setPavarde(const std::string& p);
    void addND(int pazymys);
    void setEgzaminas(int egz);

    // Get'eriai
    std::string getVardas() const;
    std::string getPavarde() const;

    // Skaičiavimai
    double galutinisVidurkis() const;
    double galutinisMediana() const;
    double galutinis(bool naudotiMediana) const;
};
#include <iostream>

std::ostream& operator<<(std::ostream& out, const Studentas& s);
std::istream& operator>>(std::istream& in, Studentas& s);
#endif

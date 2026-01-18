#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <string>
#include <vector>
#include <iostream>

class Studentas {
private:
    std::string vardas;
    std::string pavarde;
    std::vector<int> nd;   // namų darbų pažymiai
    int egzaminas;

public:
    Studentas();
    Studentas(const Studentas& other);
    Studentas& operator=(const Studentas& other);
    ~Studentas();

    void setVardas(const std::string& v);
    void setPavarde(const std::string& p);
    void addND(int pazymys);
    void setEgzaminas(int egz);

    std::string getVardas() const;
    std::string getPavarde() const;

    double galutinisVidurkis() const;
    double galutinisMediana() const;
    double galutinis(bool naudotiMediana) const;

    // Kad operatoriai galėtų pasiekti private laukus (jei juos naudoja)
    friend std::ostream& operator<<(std::ostream& out, const Studentas& s);
    friend std::istream& operator>>(std::istream& in, Studentas& s);
};

#endif

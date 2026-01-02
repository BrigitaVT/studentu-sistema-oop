# SD1 – v0.1

Pirmas savarankiškas darbas.
Studentų galutinio balo skaičiavimo programa (C++).


## Aprašymas
Programa nuskaito studento vardą, pavardę, namų darbų pažymius ir egzamino rezultatą,
apskaičiuoja galutinį balą pagal vidurkį arba medianą.

Galutinio balo formulė:
Galutinis = 0.4 * (ND vidurkis arba mediana) + 0.6 * egzaminas

## Funkcionalumas
- Studento duomenų saugojimas klasėje `Studentas`
- Namų darbų skaičius nežinomas iš anksto
- Galutinio balo skaičiavimas pagal:
  - vidurkį
  - medianą
- Perdengti operatoriai:
  - `operator<<` (išvedimas)
  - `operator>>` (įvedimas)
- Naudojamas `std::vector`
- Naudojamas išimčių valdymas (exception handling)

## Projekto struktūra
- `include/Studentas.h` – klasės aprašas
- `src/Studentas.cpp` – klasės realizacija
- `src/main.cpp` – programos vykdymo logika

## Paleidimas
Programa paleidžiama iš konsolės, įvedant duomenis tokiu formatu:

Vardas Pavarde ND1 ND2 ND3 ... 0 Egzaminas

Pvz:
Jonas Jonaitis 8 9 10 0 9


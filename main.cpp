#include <iostream>
#include "BrazoRobotico.h"

int main() {
    BrazoRobotico brazo;

    std::cout << "Posicion inicial: ("
              << brazo.getX() << ", "
              << brazo.getY() << ", "
              << brazo.getZ() << ")\n";

    brazo.mover(5, 2, -1);
    std::cout << "Tras mover: ("
              << brazo.getX() << ", "
              << brazo.getY() << ", "
              << brazo.getZ() << ")\n";

    brazo.coger();
    std::cout << "Sujetando objeto: "
              << (brazo.getSujetando() ? "SI" : "NO") << "\n";

    return 0;
}


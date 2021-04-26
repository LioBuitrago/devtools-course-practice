// Copyright 2021 Galindo Buitrago Julio Cesar

#include <iostream>

#include "include/Knight_Moves.h"

int KM::resolucion(int x, int y) {
    if(x + y == 0) return 0;
    if (x + y == 2) return 2;
    pair <int, int> guardado({x, y});
    if(alfa.count(guardado)) return alfa[guardado];
    return alfa[guardado] = min(resolucion(abs(x - 1), abs(y - 2)), resolucion(abs(x - 2), abs(y - 1))) + 1;
};

int KM::valor_minimo_knight(int x, int y) {
    return resolucion(abs(x), abs(y));
};

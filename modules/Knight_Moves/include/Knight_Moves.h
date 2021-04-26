// Copyright 2021 Galindo Buitrago Julio Cesar

#ifndef MODULES_KNIGHT_MOVES_INCLUDE_KNIGHT_MOVES_H_
#define MODULES_KNIGHT_MOVES_INCLUDE_KNIGHT_MOVES_H_

#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <utility>

class KM {
 public:
    map < pair <int, int>, int > alfa;
    int resolucion(int x, int y);
    int valor_minimo_knight(int x, int y);
};

#endif  // MODULES_KNIGHT_MOVES_INCLUDE_KNIGHT_MOVES_H_

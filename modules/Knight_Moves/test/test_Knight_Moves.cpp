// Copyright 2021 Galindo Buitrago Julio Cesar

#include <gtest/gtest.h>

#include "include/Knight_Moves.h"

TEST(Galindo_Knight_Moves, Minimum_without_obstacles_i) {
    KM sol;
    int x = 10;
    int y = 12;
    int result = sol.valor_minimo_knight(x,y);
    int expectation = 8;
    ASSERT_EQ(expectation, result);
}

TEST(Galindo_Knight_Moves, Minimum_without_obstacles_ii) {
    KM sol;
    int x = 30;
    int y = 28;
    int result = sol.valor_minimo_knight(x,y);
    int expectation = 20;
    ASSERT_EQ(expectation, result);
}

TEST(Galindo_Knight_Moves, Minimum_without_obstacles_iii) {
    KM sol;
    int x = 40;
    int y = 38;
    int result = sol.valor_minimo_knight(x,y);
    int expectation = 26;
    ASSERT_EQ(expectation, result);
}

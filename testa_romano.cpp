// Copyright 2021 Nataly Lacerda
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "romano.hpp"

TEST_CASE("Algarismo romano", "[romanos]") {
    REQUIRE(Romano::converte_algarismo('I') == 1);
    REQUIRE(Romano::converte_algarismo('V') == 5);
    REQUIRE(Romano::converte_algarismo('X') == 10);
    REQUIRE(Romano::converte_algarismo('L') == 50);
    REQUIRE(Romano::converte_algarismo('C') == 100);
    REQUIRE(Romano::converte_algarismo('D') == 500);
    REQUIRE(Romano::converte_algarismo('M') == 1000);
}

TEST_CASE("Numeros invalidos", "[romanos]") {
    REQUIRE(Romano::romano_arabico("AAA") == -1);
    REQUIRE(Romano::romano_arabico("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIII") == -1);
    REQUIRE(Romano::romano_arabico("VV") == -1);
    REQUIRE(Romano::romano_arabico("LL") == -1);
    REQUIRE(Romano::romano_arabico("XXXX") == -1);
    REQUIRE(Romano::romano_arabico("IIII") == -1);
}
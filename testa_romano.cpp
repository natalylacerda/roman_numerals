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

TEST_CASE("Numeros validos", "[romanos]") {
    REQUIRE(Romano::romano_arabico("V") == 5);
    REQUIRE(Romano::romano_arabico("I") == 1);
    REQUIRE(Romano::romano_arabico("IV") == 4);
    REQUIRE(Romano::romano_arabico("CXLVII") == 147);
    REQUIRE(Romano::romano_arabico("LI") == 51);
}

TEST_CASE("Numeros invalidos", "[romanos]") {
    REQUIRE(Romano::romano_arabico("ZZZ") == -1);
    REQUIRE(Romano::romano_arabico("iii") == -1);
    REQUIRE(Romano::romano_arabico("CDIDLDMIIMMLDCILXXLXIDDLCIMIVIIDI") == -1);
    REQUIRE(Romano::romano_arabico("VV") == -1);
    REQUIRE(Romano::romano_arabico("LL") == -1);
    REQUIRE(Romano::romano_arabico("XXXX") == -1);
    REQUIRE(Romano::romano_arabico("IIII") == -1);
    REQUIRE(Romano::romano_arabico("IC") == -1);
    REQUIRE(Romano::romano_arabico("XD") == -1);
}

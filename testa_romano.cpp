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

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "TransformChar.hpp"

TEST_CASE("Characters are uppercase","[alphanumeric]"){
  REQUIRE(( transformChar('a') == "A"));
  REQUIRE(( transformChar('B') == "B"));
}

TEST_CASE("Digits are transliterated","[alphanumeric]"){
  REQUIRE(( transformChar('0') == "ZERO" ));
  REQUIRE(( transformChar('1') == "ONE" ));
  REQUIRE(( transformChar('2') == "TWO" ));
  REQUIRE(( transformChar('3') == "THREE" ));
  REQUIRE(( transformChar('4') == "FOUR" ));
  REQUIRE(( transformChar('5') == "FIVE" ));
  REQUIRE(( transformChar('6') == "SIX" ));
  REQUIRE(( transformChar('7') == "SEVEN" ));
  REQUIRE(( transformChar('8') == "EIGHT" ));
  REQUIRE(( transformChar('9') == "NINE" ));
}

TEST_CASE("Special characters are removed", "[punctuation]"){
  REQUIRE((transformChar('.') == ""));
  REQUIRE((transformChar(',') == ""));
  REQUIRE((transformChar('|') == ""));
  REQUIRE((transformChar('!') == ""));
  REQUIRE((transformChar('?') == ""));
  REQUIRE((transformChar('@') == ""));
  REQUIRE((transformChar('\#') == ""));
}

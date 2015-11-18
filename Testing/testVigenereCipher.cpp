
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "TransformChar.hpp"

TEST_CASE("Characters are uppercase","[alphanumeric]"){
  REQUIRE(( transformChar('a') == "A" ));
  REQUIRE(( transformChar('B') == "B" ));
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
  std::vector<char> punctuation;
  
  for(int i = 0; i < 48; i++){
    punctuation.push_back(char(i));
  }
  for(int j=58; j < 65; j++){
    punctuation.push_back(char(j));
  }
  for(int k=94; k < 97; k++){
    punctuation.push_back(char(k));
  }
  for(int l=123; l < 128; l++){
    punctuation.push_back(char(l));
  }
  
  for(char c : punctuation) {
    REQUIRE(( transformChar(c) == ""));
  }

}

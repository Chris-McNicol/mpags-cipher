
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"
#include "ProcessCommandLine.hpp"

CaesarCipher my_cipher = CaesarCipher("5");

TEST_CASE("Indices are properly wrapped","[wrapping]"){
  REQUIRE((my_cipher.wrapIt(27) == 1));
  REQUIRE(( my_cipher.wrapIt(-3) == 23 ));
}

TEST_CASE("Characters are correctly shifted","[shift]"){
 
  REQUIRE(false);

}

TEST_CASE("Strings are correctly encrypted", "[encryption]"){
 

}

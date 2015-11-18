
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"

TEST_CASE("Indices are properly wrapped","[wrapping]"){
  REQUIRE((wrapIt(27) == 1));
  REQUIRE(( wrapIt(-3) == 23 ));
}

TEST_CASE("Characters are correctly shifted","[shift]"){
 
  REQUIRE(false);

}

TEST_CASE("Strings are correctly encrypted", "[encryption]"){
 

}

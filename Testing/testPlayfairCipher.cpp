
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "PlayfairCipher.hpp"

TEST_CASE("Correctly creates mapping from keyword","[mapping]"){
  REQUIRE(false);
}

TEST_CASE("Indices correctly wrapped","[wrapping]"){
  REQUIRE(playWrap(-1) == 3);
  REQUIRE(playWrap(5) == 0);
}

TEST_CASE("makeItLookNice works", "[cosmetic]"){

  std::string msg1 = "BLOOBARXRAYXMENLXLCOOLJZ";
  std::string msg2 = "ZXZTOPISAGOXODBAND";
  std::string msg3 = "ENDREMOVEZ";
  std::string msg4 = "MIDXDLEREMOVED";
  std::string msg5 = "LETXTERXISLEFTALONEZ";

  REQUIRE(makeItLookNice(msg1) == "BLOOBARXRAYXMENLLCOOLJ");
  REQUIRE(makeItLookNice(msg2) == "ZZTOPISAGOODBAND");
  REQUIRE(makeItLookNice(msg3) == "ENDREMOVE");
  REQUIRE(makeItLookNice(msg4) == "MIDDLEREMOVED");
  REQUIRE(makeItLookNice(msg5) == "LETTERXISLEFTALONE");

  
}

TEST_CASE("Encryption /decryption works", "[encryption]"){
  REQUIRE(false);

}


#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "PlayfairCipher.hpp"
#include "ProcessCommandLine.hpp"

PlayfairCipher pc1 = PlayfairCipher("davidhasselhoff");

TEST_CASE("Correctly creates mapping from keyword","[mapping]"){
  REQUIRE(false);
}

TEST_CASE("Indices correctly wrapped","[wrapping]"){
  REQUIRE(pc1.playWrap(-1) == 3);
  REQUIRE(pc1.playWrap(5) == 0);
}

TEST_CASE("makeItLookNice works", "[cosmetic]"){

  std::string msg1 = "BLOOBARXRAYXMENLXLCOOLJZ";
  std::string msg2 = "ZXZTOPISAGOXODBAND";
  std::string msg3 = "ENDREMOVEZ";
  std::string msg4 = "MIDXDLEREMOVED";
  std::string msg5 = "LETXTERXISLEFTALONEZ";

  pc1.makeItLookNice(msg1);// == "BLOOBARXRAYXMENLLCOOLJ");
  pc1.makeItLookNice(msg2) ;//== "ZZTOPISAGOODBAND");
  pc1.makeItLookNice(msg3);// == "ENDREMOVE");
  pc1.makeItLookNice(msg4); //== "MIDDLEREMOVED");
  pc1.makeItLookNice(msg5); //== "LETTERXISLEFTALONE");

  REQUIRE(msg1 == "BLOOBARXRAYXMENLLCOOLJ");
  REQUIRE(msg2 == "ZZTOPISAGOODBAND");
  REQUIRE(msg3 == "ENDREMOVE");
  REQUIRE(msg4 == "MIDDLEREMOVED");
  REQUIRE(msg5 == "LETTERXISLEFTALONE");
}

TEST_CASE("Encryption /decryption works", "[encryption]"){
  REQUIRE(false);

}

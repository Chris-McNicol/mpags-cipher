#define CATCH_CONFIG_MAIN
#include "catch.hpp"


#include "Cipher.hpp"
#include "CaesarCipher.hpp"
#include "PlayfairCipher.hpp"
#include "VigenereCipher.hpp"
#include "HelpfulEnums.hpp"
#include "CipherFactory.hpp"

#include <vector>
#include <memory>


TEST_CASE("Encryption works", "[encryption]"){
std::vector< std::unique_ptr< Cipher > > CipherList;
std::vector< std::string > good;
 std::string tester{"IAMCORRECT"};
 std::string blah{""};

CipherList.push_back( cipherFactory(CipherType::Caesar, "13"));
CipherList.push_back( cipherFactory(CipherType::Playfair, "playfairKey"));
CipherList.push_back( cipherFactory(CipherType::Vigenere, "VigenereKey"));
 


good.push_back("VNZPBEERPG");
good.push_back("KPCDVDVEIHZF");
good.push_back("EJTHCWJJNY");

  for(size_t pos = 0; pos < CipherList.size(); pos++){
    blah = CipherList[pos]->encrypt(tester);
    // CipherList[pos]->makeItLookNice(blah);
    REQUIRE(blah == good[pos]);

  }
}




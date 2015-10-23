#include <iostream>
#include <string>

int main(){

  //This is a comment
  /* This is a multiline
     comment */

  std::cout<< "Hello World! \n";

  int a {3};
  a = 4;
  std::cout<< 4 << std::endl;

  double b {7.935235325235235};

  std::cout << b*a << std::endl;

  auto chris_everett_smells {true};
  
  double blah {8.0};
  int foo {3};
  int hasselhoff {8};

  std::string whaddaya_say {"Booyacakashackalalala"};

  std::cout << "Good ? : " << blah / foo << std::endl;
  std::cout << "Not right ? : " << hasselhoff / foo << std::endl;

  auto my_char = whaddaya_say[3];

  std::cout << "My string : "<< whaddaya_say << std::endl;
  std::cout << "My char from string : " << my_char << std::endl;

  
}

#include <iostream>
#include <exception>

class HelpException:public std::exception{
public:
HelpException(const std::string m="Help Called"):msg(m){}
  ~HelpException() throw(){};
  const char* what(){return msg.c_str();}
private:
  std::string msg;
};

struct VersionException {};

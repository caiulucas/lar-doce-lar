#include <string>

class Address {
private:
  std::string street;
  std::string city;
  std::string state;
  std::string zip;

public:
  Address(std::string street, std::string city, std::string state,
          std::string zip);
  std::string getStreet();
  std::string getCity();
  std::string getState();
  std::string getZip();
};
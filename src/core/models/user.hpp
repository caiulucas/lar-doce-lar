#include <string>

class User {
private:
  std::string name;
  std::string email;
  std::string password;

public:
  User(std::string name, std::string email, std::string password);
  std::string getName();
  std::string getEmail();
  std::string getPassword();
  void setName(std::string name);
  void setEmail(std::string email);
  void setPassword(std::string password);
};
#pragma once
#include <string>

class User {
private:
  int id;
  std::string name;
  std::string email;
  std::string password;

public:
  User(int id, std::string name, std::string email, std::string password);
  int get_id() const;
  std::string get_name() const;
  std::string get_email() const;
  std::string get_password() const;
  void set_id(int id);
  void set_name(std::string name);
  void set_email(std::string email);
  void set_password(std::string password);
};
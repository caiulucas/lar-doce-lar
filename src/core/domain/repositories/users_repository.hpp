#pragma once
#include "../../models/user.hpp"
#include <vector>

class UsersRepository {
private:
  std::vector<User> m_users;

public:
  UsersRepository();          // Constructor
  virtual ~UsersRepository(); // Destructor

  virtual void create_user(const User &user) = 0;

  virtual void update_user(const User &user) = 0;

  virtual void delete_user(const User &user) = 0;

  virtual User get_user_by_id(int id) = 0;

  virtual User get_user_by_email(std::string email) = 0;

  virtual std::vector<User> get_users() = 0;
};
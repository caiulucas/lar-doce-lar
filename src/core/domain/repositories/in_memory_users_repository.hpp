#pragma once
#include "users_repository.hpp"
#include <vector>

class InMemoryUsersRepository : public UsersRepository {
private:
  std::vector<User> m_users;

public:
  InMemoryUsersRepository();
  ~InMemoryUsersRepository();

  void create_user(const User &user) override;

  void update_user(const User &user) override;

  void delete_user(const User &user) override;

  User get_user_by_id(int id) override;

  User get_user_by_email(std::string email) override;

  std::vector<User> get_users() override;
};
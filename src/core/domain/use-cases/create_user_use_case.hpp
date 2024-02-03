#pragma once
#include "../repositories/users_repository.hpp"

class CreateUserUseCase {
private:
  UsersRepository &m_users_repository;

public:
  CreateUserUseCase(UsersRepository &users_repository);
  void execute(const User &user);
};
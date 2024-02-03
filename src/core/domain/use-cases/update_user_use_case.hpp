#pragma once
#include "../repositories/users_repository.hpp"

class UpdateUserUseCase {
private:
  UsersRepository &m_users_repository;

public:
  UpdateUserUseCase(UsersRepository &users_repository);
  void execute(const User &user);
};
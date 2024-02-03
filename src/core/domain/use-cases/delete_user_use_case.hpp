#pragma once
#include "../repositories/users_repository.hpp"

class DeleteUserUseCase {
private:
  UsersRepository &m_users_repository;

public:
  DeleteUserUseCase(UsersRepository &users_repository);
  void execute(const User &user);
};
#include "create_user_use_case.hpp"
#include <stdexcept>

CreateUserUseCase::CreateUserUseCase(UsersRepository &users_repository)
    : m_users_repository(users_repository) {}

void CreateUserUseCase::execute(const User &user) {
  User existing_user = m_users_repository.get_user_by_email(user.get_email());

  if (existing_user.get_id() != -1) {
    throw std::runtime_error("User already exists");
  }

  m_users_repository.create_user(user);
}

#include "update_user_use_case.hpp"

UpdateUserUseCase::UpdateUserUseCase(UsersRepository &users_repository)
    : m_users_repository(users_repository) {}

void UpdateUserUseCase::execute(const User &user) {
  m_users_repository.update_user(user);
}
#include "delete_user_use_case.hpp"

DeleteUserUseCase::DeleteUserUseCase(UsersRepository &users_repository)
    : m_users_repository(users_repository) {}

void DeleteUserUseCase::execute(const User &user) {
  m_users_repository.delete_user(user);
}
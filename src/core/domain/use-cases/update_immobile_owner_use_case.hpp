#pragma once
#include "../repositories/immobile_repository.hpp"
#include "../repositories/users_repository.hpp"

class UpdateImmobileOwnerUseCase {
private:
  ImmobileRepository &m_immobile_repository;
  UsersRepository &m_user_repository;

public:
  UpdateImmobileOwnerUseCase(ImmobileRepository &immobile_repository,
                             UsersRepository &user_repository);
  void execute(const Immobile &immobile, const std::string &new_owner_email);
};
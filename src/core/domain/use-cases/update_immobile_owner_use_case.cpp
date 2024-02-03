#include "update_immobile_owner_use_case.hpp"
#include <stdexcept>

UpdateImmobileOwnerUseCase::UpdateImmobileOwnerUseCase(
    ImmobileRepository &immobile_repository, UsersRepository &user_repository)
    : m_immobile_repository(immobile_repository),
      m_user_repository(user_repository) {}

void UpdateImmobileOwnerUseCase::execute(const Immobile &immobile,
                                         const std::string &new_owner_email) {
  Immobile immobile_to_update =
      m_immobile_repository.get_immobile_by_id(immobile.get_id());

  if (immobile_to_update.get_id() == -1) {
    throw std::runtime_error("Immobile not found");
  }

  User new_owner = m_user_repository.get_user_by_email(new_owner_email);

  if (new_owner.get_id() == -1) {
    throw std::runtime_error("User not found");
  }

  immobile_to_update.set_owner(new_owner);
  m_immobile_repository.update_immobile(immobile_to_update);
}
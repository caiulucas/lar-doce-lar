#pragma once
#include "../repositories/immobile_repository.hpp"

class DeleteImmobileUseCase {
private:
  ImmobileRepository &m_immobile_repository;

public:
  DeleteImmobileUseCase(ImmobileRepository &immobile_repository);
  void execute(const Immobile &immobile);
};
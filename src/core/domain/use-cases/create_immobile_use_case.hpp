#pragma once
#include "../repositories/immobile_repository.hpp"

class CreateImmobileUseCase {
private:
  ImmobileRepository &m_immobile_repository;

public:
  CreateImmobileUseCase(ImmobileRepository &immobile_repository);
  void execute(const Immobile &immobile);
};
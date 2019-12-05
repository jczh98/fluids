#pragma once

#include "defs.h"

namespace min::fluids {

class Particle {
 public:
  uint id;
  Vector3f position;
  Vector3f velocity;
  Vector3f accleration;
};

class System {
 public:
  uint max_particles;
  uint min_particles;
  float kernel;
};

}  // namespace min::fluids
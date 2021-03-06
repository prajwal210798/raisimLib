//
// Created by kangd on 05.10.17.
//

#ifndef RAISIM_RAICOLLISIONSPHERE_HPP
#define RAISIM_RAICOLLISIONSPHERE_HPP

#include "SingleBodyObject.hpp"

namespace raisim {

class Sphere : public SingleBodyObject {

  /// NOTE
  /// body frame origin of Sphere is C.O.M of Sphere
 public:
  explicit Sphere(double radius, double mass);

  double getRadius() const;

 protected:
  double radius_;

};

} // raisim

#endif //RAISIM_RAICOLLISIONSPHERE_HPP

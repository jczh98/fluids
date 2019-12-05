#include <Eigen/Core>

namespace min::fluids {

using Float = float;
using uint = unsigned int;
using Vector3f = Eigen::Vector3f;
using Vector3d = Eigen::Vector3d;
using Vector2f = Eigen::Vector2f;
using Vector2d = Eigen::Vector2d;
using Vector2i = Eigen::Vector2i;
using Vector2u = Eigen::Matrix<uint, 2, 1>;
using Vector3u = Eigen::Matrix<uint, 3, 1>;
#ifdef USE_DOUBLE
using Vector3 = Vector3d;
using Vector2 = Vector2d;
#else
using Vector3 = Vector3f;
using Vector2 = Vector2f;
#endif

}  // namespace min::fluids

#ifndef RWRAPPER_RESCALEUTIL_H
#define RWRAPPER_RESCALEUTIL_H

#include "../RGraphicsAction.h"

namespace devices {
  namespace actions {
    namespace util {
      enum class RelativePosition {
        NORTH,
        WEST,
        SOUTH,
        EAST,
        NORTH_WEST,
        SOUTH_WEST,
        SOUTH_EAST,
        NORTH_EAST,
        ART_BOARD,
      };

      RelativePosition getRelativePosition(Point point, Rectangle artBoard);
      Point rescale(Point point, const RescaleInfo& rescaleInfo);
      void rescaleInPlace(Point& point, const RescaleInfo& rescaleInfo);
    }
  }
}

#endif //RWRAPPER_RESCALEUTIL_H

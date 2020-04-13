#include <math.h>
#include "point.h"

float find_distance(Point source, Point target)
{
  return hypotf((source.x - target.x), (source.y - target.y));
}

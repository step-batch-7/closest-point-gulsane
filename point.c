#include <math.h>
#include "point.h"

float find_distance(Point source, Point target)
{
  return hypotf((source.x - target.x), (source.y - target.y));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  *closest_food_location = food_points[0];
  float current_closest_distance = find_distance(current_location, *closest_food_location);

  for (int index = 0; index < points_length; index++)
  {
    if (current_closest_distance > find_distance(current_location, food_points[index]))
    {
      *closest_food_location = food_points[index];
      current_closest_distance = find_distance(current_location, *closest_food_location);
    }
  }
}
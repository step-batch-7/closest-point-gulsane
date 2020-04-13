#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_locations[] = DEFAULT_FOOD_LOCATIONS;
  Point organism_locations[] = DEFAULT_ORGANISM_LOCATIONS;
  Point closest_food_location;
  int food_location_count = sizeof(food_locations) / sizeof(Point);
  int organism_location_count = sizeof(organism_locations) / sizeof(Point);

  for (int index = 0; index < organism_location_count; index++)
  {
    Point current_position = organism_locations[index];
    get_closest_food(food_locations, food_location_count, current_position, &closest_food_location);
    printf("Location of organism: [%d %d],  Closest food target : [%d %d]\n", current_position.x, current_position.y, closest_food_location.x, closest_food_location.y);
  }
  return 0;
}
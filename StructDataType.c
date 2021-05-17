//
//          AUTHOR: ALI BARAN YENI
//      DEPARTMENT: COMPUTER ENGINEERING
//  STUDENT NUMBER: ********************
//
// Determines whether or not the components of planet_1 and planet_2 match
//

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    char *name;
    int diameter;
    int moons;
    int orbit_time;
    int rotation_time;
} planet_t;

 
int planet_equal(planet_t planet_1, planet_t planet_2) {
   return (
        strcmp(planet_1.name, planet_2.name) == 0                        &&
        planet_1.diameter                    == planet_2.diameter        &&
        planet_1.moons                       == planet_2.moons           &&
        planet_1.orbit_time                  == planet_2.orbit_time      &&
        planet_1.rotation_time               == planet_2.rotation_time
        );
} 

int main() {
    planet_t p1 = {
        "Mars",
        993000,
        1,
        2,
        687
    };

    planet_t p2 = {
        "Jupiter",
        2345554,
        79,
        10,
        12
    };
    
    bool equalityState = planet_equal(p1, p2);
    if (equalityState) {
        printf("Those two planets (%s and %s) are matched!", p1.name, p2.name);
    }
    else {
        printf("Those two planets (%s and %s) are did not match matched.", p1.name, p2.name);
    }

    return 0;
}

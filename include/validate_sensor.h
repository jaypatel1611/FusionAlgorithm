#include <stdio.h>
#include "sensor_structure.h"

//Return the name of sensor which is out of prescribed range
char **compare_sensor_range(sensor_t *p_sensor,double min ,double max);
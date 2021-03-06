/*
 * Copyright 2020 Makani Technologies LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AVIONICS_COMMON_MOTOR_ANGLE_TYPES_H_
#define AVIONICS_COMMON_MOTOR_ANGLE_TYPES_H_

#include <stdint.h>

typedef struct {
  int32_t i_sin;
  float sin_offset;
  float sin_scale;
  int32_t i_cos;
  float cos_offset;
  float cos_scale;
} SensorProfileDiag;

#endif  // AVIONICS_COMMON_MOTOR_ANGLE_TYPES_H_

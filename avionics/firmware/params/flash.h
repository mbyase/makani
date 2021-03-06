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

#ifndef AVIONICS_FIRMWARE_PARAMS_FLASH_H_
#define AVIONICS_FIRMWARE_PARAMS_FLASH_H_

#include <stdint.h>

// See docs in avionics/firmware/params/params.h
const void *GetConfigParamsRaw(uint32_t *version_number);
const void *GetCalibParamsRaw(uint32_t *version_number);
const void *GetSerialParamsRaw(uint32_t *version_number);

#endif  // AVIONICS_FIRMWARE_PARAMS_FLASH_H_

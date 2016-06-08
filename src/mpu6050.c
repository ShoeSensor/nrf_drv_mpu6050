/*
 * Copyright 2016 Bart Monhemius.
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

#define ADDRESS_MASK(x)           (x << 1) /**< Mask to convert to 8-bits address to a 7 bit one.*/

#define ADDRESS_WHO_AM_I          0x75 /**< WHO_AM_I register identifies the device. Expected value is 0x68.*/
#define ADDRESS_SIGNAL_PATH_RESET 0x68

#include "mpu6050.h"

static void writeReg(uint8_t address, uint8_t reg)
{

}

static uint8_t readReg(uint8_t address, uint8_t reg)
{
    return 0;
}

bool drv_mpu6050New(drv_mpu6050Config_t *conf)
{
    return false;
}

bool drv_mpu6050Read(uint8_t address, uint8_t *data, size_t len)
{
    readReg(0, 0);
    return false;
}

bool drv_mpu6050Write(uint8_t address, uint8_t *data, size_t len)
{
    writeReg(0,0);
    return false;
}

void drv_mpu6050Delete(void)
{
}
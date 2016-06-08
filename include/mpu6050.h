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

/** @file
 * @defgroup drv_mpu6050 MPU6050 gyroscoop/accelerometer driver
 * @{
 * @ingroup drv
 *
 * @brief MPU6050 gyroscoop/accelerometer driver
 *
 */

#ifndef DRV_MPU6050_H
#define DRV_MPU6050_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct {
    uint8_t accelDataRate;
    uint8_t gyroDataRate;
    uint8_t intEnable;
} drv_mpu6050Config_t;

/**
 * @brief   Create a new mpu6050 instance
 * @details Initialzes the mpu6050 device and driver.
 *
 * @param   conf Configuration for the device.
 * @retval  true If the initialization was succesfull
 * @retval  false If the initialization failed.
 */
bool drv_mpu6050New(drv_mpu6050Config_t *conf);

/**
 * @brief   Read data from the mpu6050
 *
 * @param   address I2C device address.
 * @param   data User buffer to store the data in.
 * @param   len Number of bytes to read.
 * @retval  true If the transmission was succesfull
 * @retval  false If the transmission failed.
 */
bool drv_mpu6050Read(uint8_t address, uint8_t *data, size_t len);

/**
 * @brief Write data to the mpu6050.
 * @param   address I2C device address.
 * @param   data Buffer to send.
 * @param   len Number of bytes to send.
 * @retval  true If the transmission was succesfull
 * @retval  false If the transmission failed.
 */
bool drv_mpu6050Write(uint8_t address, uint8_t *data, size_t len);

/**
 * @brief   Uninitialize the device driver.
 */
void drv_mpu6050Delete(void);

#ifdef  __cplusplus
}
#endif

#endif /* DRV_MPU6050_H */

/**
*@}
**/

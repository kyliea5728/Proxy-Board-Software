/*
 * File:   IMU.c
 * Author: kylie
 *
 * Created on August 26, 2022, 9:16 AM
 */


#include "xc.h"
#include "IMU.h"
#include "i2c1.h"

#define I2C_ADDR_LSM6

//TODO: Implement data retrieval IMU function
uint8_t ReadIMU(void){
    
// Variables for final converted Gyroscopic data
volatile uint8_t GyrX, GryY, GryZ;
uint8_t LSM6_cmd = 0;
I2C1_MESSAGE_STATUS status;

I2C1_MasterWrite(LSM6_cmd, 1, I2C_ADDR_LSM6, &status);
while (I2C1_MESSAGE_PENDING == status);

I2C1_MasterRead( &, 1, I2C_ADDR_LSM6, &status);
while (I2C1_MESSAGE_PENDING == status);

}



/*
int main(void) {
    return 0;
}
 */

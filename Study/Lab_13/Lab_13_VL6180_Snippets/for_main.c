
/* USER CODE BEGIN Includes */
#include "vl6180x_api.h"
/* ... */
/* USER CODE END Includes */

/* USER CODE BEGIN PD */
#define I2C_ADDRESS (0x29 << 1)
/* ... */
/* USER CODE END PD */

/* USER CODE BEGIN PV */
VL6180xDev_t myDev;
VL6180x_RangeData_t Range;
/* USER CODE END PV */

int main(void)
{
  /* ... */

  /* USER CODE BEGIN 2 */
  myDev = I2C_ADDRESS;
  VL6180x_InitData(myDev);
  VL6180x_Prepare(myDev);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
    VL6180x_RangePollMeasurement(myDev, &Range);
    if (Range.errorStatus == NoError)
      printf("Range = %ld mm\r\n", Range.range_mm); // display range in mm
    else
      printf("Error %ld\r\n", Range.errorStatus); // see DT0020 for codes explanation

    HAL_Delay(500);
  }
  /* USER CODE END 3 */
}

/* USER CODE BEGIN 4 */
void VL6180x_PollDelay(VL6180xDev_t dev)
{
  HAL_Delay(1);
}

/**
 * @brief       Write data buffer to VL6180x device via i2c
 * @param dev   The device to write to
 * @param buff  The data buffer
 * @param len   The length of the transaction in byte
 * @return      0 on success
 * @ingroup cci_i2c
 */
int  VL6180x_I2CWrite(VL6180xDev_t dev, uint8_t  *buff, uint8_t len)
{
  int status;
  status = HAL_I2C_Master_Transmit(&hi2c4, (uint16_t)dev, buff, len, 10000);
  return status;
}

/**
 *
 * @brief       Read data buffer from VL6180x device via i2c
 * @param dev   The device to read from
 * @param buff  The data buffer to fill
 * @param len   The length of the transaction in byte
 * @return      0 on success
 * @ingroup  cci_i2c
 */
int VL6180x_I2CRead(VL6180xDev_t dev, uint8_t *buff, uint8_t len)
{
  int status;
  status = HAL_I2C_Master_Receive(&hi2c4, (uint16_t)dev, buff, len, 10000);
  return status;
}
/* USER CODE END 4 */

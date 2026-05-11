
/* USER CODE BEGIN Includes */
#include "vl53l1_api.h"
/* ... */
/* USER CODE END Includes */

/* USER CODE BEGIN PV */
VL53L1_Dev_t dev;
VL53L1_DEV   Dev = &dev;
int status;
/* USER CODE END PV */

int main(void)
{
  /* ... */

  /* USER CODE BEGIN 2 */
  Dev->I2cHandle = &hi2c2;
  Dev->I2cDevAddr = 0x52;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  static VL53L1_RangingMeasurementData_t RangingData;

  status = VL53L1_WaitDeviceBooted(Dev);
  status = VL53L1_DataInit(Dev);
  status = VL53L1_StaticInit(Dev);
  status = VL53L1_StartMeasurement(Dev);

  if (status)
  {
    Error_Handler();
  }

  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

    status = VL53L1_WaitMeasurementDataReady(Dev);
    if (!status)
    {
      status = VL53L1_GetRangingMeasurementData(Dev, &RangingData);
      if (status == 0)
      {
        printf("Range = %d mm\r\n", RangingData.RangeMilliMeter);
      }

      HAL_Delay(500);

      status = VL53L1_ClearInterruptAndStartMeasurement(Dev);
    }
  }
  /* USER CODE END 3 */
}

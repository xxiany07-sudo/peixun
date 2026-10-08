#include "Stepper.h"


void Stepper_run(uint8_t rot_dir,uint16_t rot_angle,uint16_t rot_speed){
HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,GPIO_PIN_RESET);

if(rot_dir==0){
      HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,GPIO_PIN_RESET);
    }else{
      HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,GPIO_PIN_SET);
    }
for(int unit_degree=1;unit_degree<=rot_angle;unit_degree++){
      HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,GPIO_PIN_RESET);
      HAL_Delay(rot_speed);
      HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,GPIO_PIN_SET);
      HAL_Delay(rot_speed);
    }



}
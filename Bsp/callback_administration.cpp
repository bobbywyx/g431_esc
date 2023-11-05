//
// Created by yixin on 2023/11/5.
//

#include "callback_administration.h"
#include "main.h"
#include "ESC.h"


extern TIM_HandleTypeDef htim6;
extern ESC esc;

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == TIM6) {
        esc.cnt++;
    }
}


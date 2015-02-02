/**
 * SleepAssistant
 */

#include <stdio.h>
#include "diag/Trace.h"
#include "Motion.h"
#include "TimeAlarm.h"
#include "interrupt.h"
#include "SysTick.h"
#include "MP3Play.h"


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

int main(int argc, char* argv[])
{
	interruptNVICInit();  // NVIC 初始化
	timeInit();           // RTC 及时间初始化
	motionInit();         // 动作感应（MPU6050 等）初始化
	systickInit();        // SysTick 初始化
	mp3Init();

	mp3Play();

	//setTime(2015 - 1900, 1, 1, 14, 42, 30);

	while (1)
	{
        //trace_printf("%d\n", detectMove());  // 身体移动
		//trace_printf(asctime(&currentTime)); // 现在时间
		//delay(400);
	}
}

#pragma GCC diagnostic pop

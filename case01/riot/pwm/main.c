#include <stdio.h>
#include <stdlib.h>

#include "periph/pwm.h"

int main(void)
{
	pwm_init(PWM_DEV(0),PWM_LEFT, 100000, 100);
	pwm_poweron(PWM_DEV(0));
	pwm_set(PWM_DEV(0), 0, 70);


    return 0;
}

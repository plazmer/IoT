#include "stdio.h"

/* <timers> */
#include "xtimer.h"
#include "timex.h"
/* </timers> */

/* <gpio> */
#include "periph/gpio.h"
/* </gpio> */


#define INTERVAL (1U * US_PER_SEC)
#define LED1 GPIO_PIN(PORT_B, 0)

int main(void)
{
	gpio_init(LED1, GPIO_OUT);
	gpio_write(LED1, 0);

	xtimer_ticks32_t last_wakeup = xtimer_now();
	while(1) {
		xtimer_periodic_wakeup(&last_wakeup, INTERVAL);
		gpio_toggle(LED1);
		printf("slept until %" PRIu32 "\n", xtimer_usec_from_ticks(xtimer_now()));
	}
	return 0;
}

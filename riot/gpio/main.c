#include "stdio.h"

/* <timers> */
#include "xtimer.h"
#include "timex.h"
/* </timers> */

/* <gpio> */
#include "periph/gpio.h"
/* </gpio> */

/* <threads> */
#include "thread.h"
/* </threads> */

#define INTERVAL (1U * US_PER_SEC)

#define LED1 GPIO_PIN(PORT_B, 0)
#define BTN4 GPIO_PIN(PORT_A, 4)
#define BTN5 GPIO_PIN(PORT_A, 5)

char stack_led[THREAD_STACKSIZE_MAIN];
char stack_btn4[THREAD_STACKSIZE_IDLE];


void *thread_led(void *arg)
{
	(void) arg;

	xtimer_ticks32_t last_wakeup = xtimer_now();
	while(1) {
		xtimer_periodic_wakeup(&last_wakeup, INTERVAL);
		gpio_toggle(LED1);
		printf("slept until %" PRIu32 "\n", xtimer_usec_from_ticks(xtimer_now()));
	}
	return NULL;
}

static void btn_handler(void *arg)
{
	(void)arg;
	puts("Button press!");
}

int main(void)
{
	gpio_init(LED1, GPIO_OUT);
	gpio_write(LED1, 0);

	gpio_init(BTN4, GPIO_IN_PU);

	gpio_init_int(BTN5, GPIO_IN_PU, GPIO_FALLING, btn_handler, NULL);

	thread_create(
			stack_led, sizeof(stack_led), THREAD_PRIORITY_MAIN - 1,
			THREAD_CREATE_STACKTEST, thread_led, NULL, "thread");

	return 0;
}

#include "xtimer.h"
#include "timex.h"
#include "periph/gpio.h"
#include "thread.h"
#include <stdio.h>

#define INTERVAL (1U * US_PER_SEC)
#define BTN1  GPIO_PIN(PORT_A,4)

int btn_pressed;
xtimer_ticks32_t btn_timer;

static void btn_handler(void *arg) {
	int btn_num = (int) arg;
	xtimer_ticks32_t current = xtimer_now ();
	/* если слишком долго обрабатывать прерывание, можно увидеть при дребезге еще одну сработку прерывания */
	printf("BTN %d | TICK %lu\n",btn_num,current.ticks32);
	if (xtimer_usec_from_ticks(xtimer_diff(current, btn_timer)) > 100000) {
		printf("press %d\n",btn_num);
		btn_timer = current;
		btn_pressed = btn_num;
	} else {
		printf("ignore %d\n",btn_num);
	}
}

int main(void) {
    /* пример передачи параметра в обработчик прерывания */
    gpio_init_int(BTN1, GPIO_IN_PU, GPIO_FALLING, btn_handler, (void *) 1);
	while (1) {;}
	return (0);
}  
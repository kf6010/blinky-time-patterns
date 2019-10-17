#include "mbed.h"
 
/* for pinnames see https://os.mbed.com/teams/Freescale/wiki/frdm-k64f-pinnames
 */

/* Create a Digital-output for the K64F Red led
 * The initial value defaults to 0 -- led is on
 */
DigitalOut red(LED_RED); 
 

void toggle(void) 
{
	red = !red;
}

/* Create a periodic interrupt */
Ticker tmr;

int main() {
	tmr.attach( toggle , 0.5);

    while (true) {  /* while _super-loop_ */
    }
}
 

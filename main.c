
#include <msp430.h> 
#include "motor.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    createPulses();
    initPins();

	while (1){
		moveForward();
		__delay_cycles(1000000);
		stopMoving();
		__delay_cycles(1000000);
		moveBackward();
		__delay_cycles(1000000);
		stopMoving();
		__delay_cycles(1000000);
		turnRight();
		__delay_cycles(350000);
		stopMoving();
		__delay_cycles(1000000);
		turnLeft();
		__delay_cycles(300000);
		stopMoving();
		__delay_cycles(1000000);
		turnRight();
		__delay_cycles(750000);
		stopMoving();
		__delay_cycles(1000000);
		turnLeft();
		__delay_cycles(750000);
		stopMoving();
		__delay_cycles(1000000);

	}
}

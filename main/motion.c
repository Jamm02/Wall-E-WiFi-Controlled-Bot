#include "motion.h"
#include "esp_log.h"


void forward(){

                                // setting motor speed of MOTOR A0 in forward direction with duty cycle
				set_motor_speed(MOTOR_A_0, MOTOR_FORWARD, 50);

				// setting motor speed of MOTOR A1 in forward direction with duty cycle
				set_motor_speed(MOTOR_A_1, MOTOR_FORWARD, 50);

}

void backward(){
 
                                // setting motor speed of MOTOR A0 in backward direction with duty cycle
				set_motor_speed(MOTOR_A_0, MOTOR_BACKWARD, 50);

				// setting motor speed of MOTOR A1 in backward direction with duty cycle
				set_motor_speed(MOTOR_A_1, MOTOR_BACKWARD, 50);
}

void left(){
 
                                // setting motor speed of MOTOR A1 in backward direction with duty cycle
				set_motor_speed(MOTOR_A_1, MOTOR_FORWARD, 55);
               
}

void right(){


                                 // setting motor speed of MOTOR A0 in backward direction with duty cycle
				set_motor_speed(MOTOR_A_0, MOTOR_FORWARD, 55);
               
}

void stop(){

                                // stopping the MOTOR A0
			        set_motor_speed(MOTOR_A_0, MOTOR_STOP, 0);

			        // stopping the MOTOR A1
			        set_motor_speed(MOTOR_A_1, MOTOR_STOP, 0);
}

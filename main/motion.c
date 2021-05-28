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
    // ESP_LOGI("MOTION","Motion is going :- %s","left");
 
                // setting motor speed of MOTOR A0 in backward direction with duty cycle
				set_motor_speed(MOTOR_A_1, MOTOR_FORWARD, 55);
                set_motor_speed(MOTOR_A_0, MOTOR_STOP,55);

                // for

}

void right(){


                          

				// setting motor speed of MOTOR A1 in backward direction with duty cycle
                while(1){
                    set_motor_speed(MOTOR_A_0, MOTOR_FORWARD, 0);
                    set_motor_speed(MOTOR_A_1, MOTOR_FORWARD, 130);
                    vTaskDelay(pdMS_TO_TICKS(10));
                    set_motor_speed(MOTOR_A_0, MOTOR_FORWARD, 130);
                    set_motor_speed(MOTOR_A_1, MOTOR_FORWARD, 0);
                    vTaskDelay(pdMS_TO_TICKS(10));
                }
				
}

void stop(){

                                // stopping the MOTOR A0
			        set_motor_speed(MOTOR_A_0, MOTOR_STOP, 0);

			        // stopping the MOTOR A1
			        set_motor_speed(MOTOR_A_1, MOTOR_STOP, 0);
}

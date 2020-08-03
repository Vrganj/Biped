#include <Servo.h>

#define left_hip 4
#define left_knee 5
#define left_ankle 6

#define right_hip 7
#define right_knee 8
#define right_ankle 9

// Nadaj se da port ne bude > 20
int default_position[20];

default_position[left_hip] = 93;
default_position[left_knee] = 87;
default_position[left_ankle] = 95;

default_position[right_hip] = 90;
default_position[right_knee] = 95;
default_position[right_ankle] = 100;

class Robot {
public:
    Servo servos[6];

    move(int servo, int angle) {
        servos[servo].write(default_position[servo] + angle);
    };

    reset() {
        for (int i = 0; i < 6; ++i) {
            move(i, 0);
        }
    };

    Robot() {
        for (int i = 0; i < 6; ++i) {
            pinMode(i + 4, OUTPUT);
            servos[i].attach(i);
        }
    };
} robot;

void setup() {
    robot.reset();

    robot.move(left_ankle, -90);
}

void loop() {

}

// Copyright (c) 2023 Andi Cucka All rights reserved
//
// Created by: Andi Cucka
// Created on: March 2023
// This module controls the motor of a servo motor.

#include <Servo.h>

Servo servo;

void setup() {
servo.attach(2);
servo.write(0);
delay(2000);

}

void loop() {

servo.write(90);
delay(1000);
servo.write(0);
delay(1000);

}

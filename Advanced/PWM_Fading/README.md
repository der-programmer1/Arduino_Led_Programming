# PWM Fading Example

This example demonstrates how to fade an LED smoothly using PWM (Pulse Width Modulation).

## What You Learn
- Using `analogWrite()` to control LED brightness
- Creating smooth increasing and decreasing loops
- Handling boundary conditions for variables

## Hardware
- 1 LED connected to PWM pin 9
- 220Ω resistor(actually does'nt matter..)

## How It Works
The LED brightness increases and decreases gradually. The program reverses the fade direction when reaching the 
minimum or maximum brightness, creating a continuous fading effect.

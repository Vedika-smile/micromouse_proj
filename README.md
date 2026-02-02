# Micro-Mouse Autonomous Maze-Solving Robot
An autonomous Micromouse robot designed to navigate and solve an unknown maze using efficient path-planning and precise motor control. The system integrates embedded hardware, real-time sensor feedback, and control algorithms to achieve reliable maze traversal.

 ## Project Overview

This project focuses on designing and implementing a self-contained autonomous robot capable of:

Exploring an unknown maze

Building an internal map

Computing the shortest path

Reaching the destination efficiently

The robot is built around an STM32 microcontroller with custom hardware prototyping and closed-loop control.

## Key Features

Flood-Fill Algorithm for maze exploration and shortest path planning

PID-based motor control for smooth and accurate movement

IR sensor array for wall detection and distance estimation

Rotary encoders for precise position and speed feedback

Fully autonomous operation without external communication

## Hardware Components

Microcontroller: STM32F401ccu6

Sensors: Infrared (IR) sensors for wall detection

Actuators: DC motors with rotary encoders (N20)

Motor Driver: H-bridge motor driver ( TB6612FNG)

Power Supply: Battery-powered embedded system

## Software & Tools

IDE / Toolchain: STM32CubeIDE

Algorithms: Flood-Fill, PID Control

Debugging: On-board debugging and serial logs

## Algorithms Used
🔹 Flood-Fill Algorithm

Dynamically assigns distance values to maze cells

Continuously updates the shortest path during exploration

Ensures optimal navigation once the maze is fully discovered

🔹 PID Control
Closed-loop speed and position control

Reduces overshoot and oscillations

Improves straight-line motion and turning accuracy

Closed-loop speed and position control

Reduces overshoot and oscillations

Improves straight-line motion and turning accuracy

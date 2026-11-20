# UART-Based LED Control Using ZedBoard

## Project Overview
This project demonstrates UART serial communication between a PC and the Zynq Processing System (PS) on the ZedBoard. Commands received through UART are processed by a bare-metal C application, which controls an LED connected to the Programmable Logic (PL) through AXI GPIO.

## Hardware
- ZedBoard (Zynq-7000 FPGA platform)
- PC/Laptop
- USB-UART connection

## Software and Tools
- Xilinx Vivado
- Vitis IDE
- C Programming
- UART Serial Communication
- AXI GPIO
- Zynq PS-PL interfacing

## System Architecture

PC → UART → Zynq PS → C Application → AXI GPIO → PL LED

## Working Principle

1. The PC sends a character through the UART serial interface.
2. The Zynq Processing System receives the character.
3. The bare-metal C application checks the received command.
4. If the command is `1`, the LED is turned ON.
5. If the command is `0`, the LED is turned OFF.
6. The PS communicates with the PL GPIO peripheral through the AXI interface.

## Commands

| UART Command | Function |
|---|---|
| `1` | LED ON |
| `0` | LED OFF |

## Implementation
- Configured the Zynq Processing System in Vivado.
- Integrated AXI GPIO into the hardware design.
- Generated the FPGA bitstream.
- Created a standalone application in Vitis.
- Implemented UART command handling in C.
- Controlled the PL LED using AXI GPIO.

## Learning Outcomes
- UART serial communication
- Zynq Processing System and Programmable Logic
- AXI-based peripheral interfacing
- FPGA hardware/software integration
- Vivado hardware design workflow
- Bare-metal C application development

## Future Improvements
- Implement a custom UART transmitter and receiver in Verilog.
- Add multiple LED control commands.
- Add switches and buttons as inputs.
- Develop a PC-side Python serial-control application.

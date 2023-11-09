#!/bin/bash
echo "Building blinkLED"
g++ -Wall myBlink.cpp derek_LED.cpp -o blinkLED
echo "Finished"
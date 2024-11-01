# Soil Temperature and Moisture Monitoring System

This project implements a soil temperature and moisture monitoring system using an Arduino. It measures soil temperature and moisture levels and provides visual feedback through output signals based on temperature thresholds.

## Components Used
- **Arduino Uno**: The microcontroller that reads sensor data and controls outputs.
- **Temperature Sensor**: Reads the soil temperature.
- **Soil Moisture Sensor**: Measures the moisture level in the soil.
- **LEDs/Indicators**: Visual indicators for temperature and moisture levels.

## Functionality
- The system reads the temperature from a temperature sensor connected to analog pin A0 and the soil moisture level from a soil moisture sensor connected to analog pin A1.
- Based on the temperature readings:
  - If the temperature is below 25°C, an indicator is activated to show low temperature.
  - For temperatures between 25°C and 60°C, another indicator signals a normal temperature range.
  - For temperatures above 60°C, a high temperature indicator is activated, and the system also checks the soil moisture level.
- The system logs the soil moisture level to the serial monitor for monitoring purposes.

## Code Explanation
The following is a brief description of the main code components:
- **Setup Function**: Initializes the pins for input and output, and starts serial communication at 9600 baud.
- **Loop Function**: Continuously reads temperature and soil moisture values, maps the temperature from the analog input to a meaningful range, and activates corresponding outputs based on the temperature thresholds.

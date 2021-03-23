# arduino-c-cpp

Performance and resource usage comparisons for C vs C++ on Arduino.

## Dependencies

Assumes you're using Linux.

* arduino-cli (available [here](https://github.com/arduino/arduino-cli))
* clang-format (if you want to beautify your .ino code)
* gvim (for editing, but you can easily update this to whatever you want)
* make

## Projects

Name | Additional Components | Notes
---------|----------|----------
1-simple | None | Blinks the built-in LED.
2-pir | HC-SR501 PIR Motion Sensor | Reports motion detected.  C code is taken from the [Elegoo 37 Sensor Kit Tutorial for UNO R3](https://drive.google.com/file/d/1jfLQ6lDgM_gSl604r_zW7n1IvWrFUKN9/view).
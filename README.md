Slides for this repository can be found here: https://docs.google.com/presentation/d/1w5WZ3WL3bt6xQmbcQQeavmahwqoMFz_B5zXnDIRyAZ0/edit?usp=sharing

Clone this repository and place it in a Arduino project directory called "subway"

Move subway/secrets.h.template to subway/secrets.h and stash all your secrets.

Install the ESP32 drivers found here: https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
 - Linux users need to create an account.

<INSERT GEORGE MESSAGE HERE>

Copy and paste the URL found [here|https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md] then paste to Preferences -> Additional Board Manager URLs

Add the Adafruit OLED libraries. Download found here https://github.com/ladyada/Adafruit_CharacterOLED

NTPClient. Go to Sketch -> Add Library -> Library Manager. Search for NTPClient and install.

Copy all headers + C into project directory.

Static MTA GTFS resources - such as station lookups - are found here: https://transitfeeds.com/p/mta/79

Linux:
 - Install pyserial

Cannot do 5G WiFi.

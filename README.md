# Digispark-usbkey-board

## Digispark attiny85 USB key

These are super small Arduino compatible devices. 

Buy one in eBay for around ~$2 USD: https://www.ebay.com/sch/i.html?_nkw=digispark+attiny85+usb

<place image here>

## Installation steps
+ Install the [Arduino IDE](https://www.arduino.cc/en/Main/Software)
+ Install the [Digispark board addon](https://digistump.com/wiki/digispark/tutorials/connecting)

## Arduino USB keyboard code
`keyboard.ino` is a Arduino sketch that I made for the cheap Digispark USB key boards. The idea is that you plug this into an unlocked computer that you find around the office. On the version of OSX that I use the key will bring up Outlook and write an email to get you a free lunch. Obviously, you could do something much more aggressive like download code or create a reverse shell. This is similar to the [USB rubber ducky](https://www.hak5.org/gear/usb-rubber-ducky) attack.

## Apple keyboard spoof
The USB Arduino will pop up a "new keyboard" after you plug it in. To avoid this you need to change the USB driver to make the Arduino appear to be a legit Apple keyboard by duplicating the device ID. I've modified `usbconfig.h` to fix this. Put it into `/Users/<your username>/Library/Arduino15/packages/digistump/hardware/avr/1.6.7/libraries/DigisparkKeyboard/` and when you compile and load the code onto your arduino, it should fix this problem.

The changes in `usbconfig.h` should make your Arduino clone appear to be an authentic Apple keyboard. If you get stuck, try [this link](https://digistump.com/board/index.php?topic=2612.0) for more info on how to change this.

## Caveat on MacBook Pros
For some reason the tiny USB key sized Digispark devices are too short to make proper contact, occasionally. I tried to dremel out the key to make it insert better, but to be safe it might be better to use a short USB extension cable.

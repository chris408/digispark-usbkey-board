## Digispark attiny85 USB key

The Digispark attiny85 USB key is a super small Arduino compatible device that can be used for lots of different projects. This document and code helps you set one up as a virtual keyboard that will send characters of your choice to the host system.

You can buy one on eBay for around ~$2 USD: https://www.ebay.com/sch/i.html?_nkw=digispark+attiny85+usb

![](https://s3.amazonaws.com/chris408.com/attiny85.png)

## Arduino USB keyboard code
`keyboard.ino` is a Arduino sketch that I made for auto-navigating a MacOS host system. The idea is that you plug this into an unlocked computer that you find around the office. On the version of OSX that I use, the key will bring up Outlook and write an email to get you a free lunch. Obviously, you could do something much more aggressive, like download code or create a reverse shell. This is similar to the [USB rubber ducky](https://www.hak5.org/gear/usb-rubber-ducky) attack.

## Installation steps
+ Install the [Arduino IDE](https://www.arduino.cc/en/Main/Software)
+ Install the [Digispark board addon](https://digistump.com/wiki/digispark/tutorials/connecting)

## Apple keyboard spoof
The USB Arduino will pop up as a "new keyboard" after you plug it in. To avoid this you need to change the USB driver to make the Arduino appear to be a legit Apple keyboard by duplicating the device ID. I've modified `usbconfig.h` to fix this. Put it into `/Users/<your username>/Library/Arduino15/packages/digistump/hardware/avr/1.6.7/libraries/DigisparkKeyboard/` (Note: The file path may change based on software versions in the path) and when you compile and load the code onto your Arduino, it should fix this problem.
The changes in `usbconfig.h` should make your Arduino clone appear to be an authentic Apple keyboard. If you get stuck, try [this link](https://digistump.com/board/index.php?topic=2612.0) for more info on how to change this.

## Caveat on MacBook Pros
The tiny USB key sized Digispark devices are occasionally too short to make proper contact in the port. I tried to dremel out the key to make it insert better without much success. It might be better to use a short USB extension cable instead.

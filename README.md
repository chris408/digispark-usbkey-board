# Digispark-usbkey-board

<place image here>
  


`freelunch.ino` is a arduino sketch that I made for the cheap Digispark USB key boards. The idea is that you plug this into an unlocked computer that you find around the office. On the version of OSX that I use the key will bring up Outlook and write an email to get you a free lunch. Obviously, you could do something much more aggressive like download code or create a reverse shell. This is similar to the [USB rubber ducky](https://www.hak5.org/gear/usb-rubber-ducky) attack.

The usb Arduino will pop up a "new keyboard" after you plug it in. To avoid this you need to change the usb driver to make the Arduino appear to be a legit Apple keyboard by duplicating the device ID. I've modified `usbconfig.h` to fix this. Put it into `/Users/<your username>/Library/Arduino15/packages/digistump/hardware/avr/1.6.7/libraries/DigisparkKeyboard/` and when you compile and load the code onto your arduino, it should fix this problem.

The changes in `usbconfig.h` should make your Arduino clone appear to be an authentic Apple keyboard. If you get stuck, try [this link](https://digistump.com/board/index.php?topic=2612.0) for more info on how to change this.

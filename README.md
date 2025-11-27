# isabel's macropad

Hello, Isabel here!! this is my first submission for blueprint. I followed the hackpad tutorial and added more features and some minor design changes; specifically, my hackpad has 8 keys, 3 neopixels, and one knob. I also used qmk firmware to make the keys work!

# PCB

I originally tried adding the switches individually, but I ran out of pins, so I decided to use a matrix instead: 
<img width="993" height="568" alt="Screenshot 2025-11-26 at 11 29 28 PM" src="https://github.com/user-attachments/assets/d6ec70db-a6e8-4f70-8773-795990caa730" />
This was my first time using KiCad, and I think it took me around 5 hours just to figure everything out.. but it's okay because at least I was able to learn something new!

<img width="1400" height="1186" alt="image" src="https://github.com/user-attachments/assets/49ec654f-6f43-4736-b5f4-51fe3e216272" />
It looks like a big mess (it is) but I guess it's to be expected from a beginner. Routing the PCB was pretty fun regardless though!!
I also wasn't sure why I couldn't get 3D images to show on my PCB design, but if it works it works yk.

# CAD

This part was actually pretty straightforward, since I have used Fusion360 before! 
I still spent a decent amount of time on it just to make sure everything fit with the PCB though.
<img width="2656" height="1330" alt="image" src="https://github.com/user-attachments/assets/50854fd1-76d3-49bb-8287-265cde2fc676" />

# Firmware
I followed some qmk tutorials and got a bit of help from AI for this part! 
Honestly I was really confused for all of this and the code may not work, but I will fix that if and/or when the project gets shipped :D


# Thoughts
Making this was really fun but really frustrating, especially in the beginning. KiCad has such a big learning curve, especially without a guide. If I could do this again, I would definitely take a look at the hackpad resources on blueprint first (I unfortunately didn't see it when I started). However, I was able to explore on my own and learn how to design a PCB + build a mini keyboard! yay!!

# BOM 
- 1 SEEEDUINO XIAO RP2040
- 1 EC11 Encoder
- 8 Cherry MX switches + keycaps
- 8 1N4148 Diodes
- 3 SK6812 neopixel LEDs
- PCB
- 4 screws (same as ones on tutorial)







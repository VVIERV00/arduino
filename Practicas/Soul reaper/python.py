#!/usr/bin/env python
import serial
import io
import sys
import time
import subprocess
"""
Ideas: pasar el ultimo valor de ACM* por parámetro


"""

subprocess.Popen(['notify-send', "Programa iniciado"])

time.sleep(5)
port0 = "/dev/serial/by-id/usb-Arduino__www.arduino.cc__Arduino_Uno_55639303934351F0D021-if00"
port1 = "/dev/ttyACM1"
rate = 5600

try:
    s1 = serial.Serial(port0, rate)
except:
    print("es la otra")
    """try:
        s1 = serial.Serial(port1, rate, timeout=2)
    except:
        print("no se que pasa quillo") #str(sys.exc_info()[0])"""
#ss1.flushInput()
print("check")
uno = "Hola pi"
otro = "acabose"
loop = True
while loop:

    if s1.inWaiting() > 0:
        print("check")
        inputvalue = s1.readline()
        print("check")
        print(inputvalue)
        if otro in inputvalue.decode('utf-8') or uno in inputvalue.decode('utf-8') :
            try:
                n = input("Cuantas veces quieres que luzca ")
                if n == "0":
                    loop = False
                else:
                    s1.write(n.encode())

            except:
                print("error")

s1.close()
print("me cierro")

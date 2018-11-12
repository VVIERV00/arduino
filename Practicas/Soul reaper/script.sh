#!/bin/bash
#su - victor -c 'export DISPLAY=:0;zenity --notification --text="Se ha conectado la arduino"'
RESULTADO=""
date >> /home/victor/Desktop/log.log
variable=true
while $variable; do
  RESULTADO=$(ls /dev/ | grep "ttyACM*")
  echo "es : $RESULTADO"
  if [ ! -z "$RESULTADO" ];then
    echo "me ejecuto"
    variable=false;
    /usr/bin/python3 /home/victor/Desktop/python.py
    echo "aaa" >> /home/victor/Desktop/log.log
  fi
  sleep 2

done

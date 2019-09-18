#!/usr/bin/env bash
#
# Este script sube datos relativos a temperatura, humedad y velocidad del viento
# a un canal de ThingSpeak.
#
# Author: John Sanabria - john.sanabria@correounivalle.edu.co
# Date: 2019-09-04
#
apiKey="C5FJ8T4EE2BA7GBZ"

RPiTS_HOME="${HOME}/Desktop/Favs"
PATH=${RPiTS_HOME}:${PATH}
if [ $# -eq 1 ]; then
  device=${1}
fi

favs=$(< /home/pi/Desktop/Favs/favCount.txt)
echo $favs

update=$(curl --silent --request POST --header "X-THINGSPEAKAPIKEY: $apiKey" --data "field1=$favs" "http://api.thingspeak.com/update")

if [ ${update} -eq 0 ]; then
  echo "[subirDatosTS] Error al subir datos"
  exit -1
else
  exit 0
fi

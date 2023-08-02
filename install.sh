#!/usr/bin/env bash

if [ "$EUID" -ne 0 ]
  then echo "Please run as root"
  exit
fi

cc beep.c
mv a.out /usr/local/bin/system_beep
cp my_beep /usr/local/bin/my_beep

echo 'Now run `visudo` and add the following line to the end of the file:'
echo '%users  ALL=/usr/local/bin/my_beep'

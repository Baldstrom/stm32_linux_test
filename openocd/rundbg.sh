#!/bin/bash
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")

if [[ $1 == "start" ]]; then
    echo "Starting stlink server..."
    openocd -f ${SCRIPTPATH}/stlink.cfg -f ${SCRIPTPATH}/stm32f4x.cfg &>/dev/null & 
elif [[ $1 == "end" ]]; then
    echo "Killing stlink server... if avail"
    pkill -f openocd &>/dev/null &
else
    echo "Call with 'start' or 'end'"
fi

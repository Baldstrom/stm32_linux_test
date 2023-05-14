#!/bin/bash
SCRIPT=$(realpath "$0")
SCRIPTPATH=$(dirname "$SCRIPT")

if [[ $1 == "start" ]]; then
    echo "Starting stlink server..."
    #openocd -f ${SCRIPTPATH}/openocd.cfg -l ${SCRIPTPATH}/openocd.log &>/dev/null & 
    st-util -p 3333 &>/dev/null & 
elif [[ $1 == "end" ]]; then
    echo "Killing stlink server... if avail"
    #pkill -f openocd &>/dev/null &
    pkill -f st-util
else
    echo "Call with 'start' or 'end'"
fi

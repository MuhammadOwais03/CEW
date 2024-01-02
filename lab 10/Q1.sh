#!/bin/bash

if [ -d "/usr/bin" ]; then
    echo "/usr/bin is a directory"
else
    echo "/usr/bin is not a directory"
fi


if [ -f "/usr/bin" ]; then
    echo "usr/bin is a file"
else
    echo "/usr/bin is not a file"
fi

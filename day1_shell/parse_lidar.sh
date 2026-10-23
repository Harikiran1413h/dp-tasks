#!/bin/sh

grep "\[WARN\] DROPPED_FRAME" "$1" | awk '{print $NF}' | sort | uniq -c | sort -nr 


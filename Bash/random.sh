#!/bin/bash

var1=$( cat /usr/share/dict/words  | shuf -n 1 )

echo $var1

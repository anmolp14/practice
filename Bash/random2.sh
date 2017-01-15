#!/bin/bash
var=$( shuf  /usr/share/dict/words | grep  -m 1 -E   ^[0-9a-zA-Z_]{$1}$ ) 

echo $var

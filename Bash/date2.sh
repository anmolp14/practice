#!/bin/bash

var=$( basename $1 .txt )
var1=$( date +%F )
mv $1 "$var"_"$var1".txt 

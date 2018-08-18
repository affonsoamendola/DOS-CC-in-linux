#!/bin/bash

echo "tcc $1 $2 $3 $4 $5 $6 $7 $8 $9  >OUTPUT.LOG
exit" > TCCCMD.BAT

dosbox -conf ~/.dosbox/tcc.conf -c TCCCMD

cat OUTPUT.LOG

#!/bin/bash

dosbox -conf ~/.dosbox/tcc.conf -c "tcc -ID:\TC\INCLUDE;C:\INCLUDE -LD:\TC\LIB $1 $2 $3 $4 $5 $6 $7 $8 $9"
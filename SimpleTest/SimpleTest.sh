#!/bin/sh


export LD_LIBRARY_PATH=$PWD/../BuildDir/lib
export EF_ALIGNMENT=0

ulimit -c unlimited

rm -f core

LD_PRELOAD=$LD_LIBRARY_PATH/libefence.so.0.0 ../BuildDir/bin/SimpleTest

test -f core
if [ $? = 0 ]
then
	gdb ../BuildDir/bin/SimpleTest ./core
else
	echo "noyhing detected"
fi



#!/bin/bash

chmod +x ../Murphi3.1/src/mu
./../Murphi3.1/src/mu futurebus_fix.m
make futurebus_fix
./futurebus_fix > futurebus_fix_out.txt
./futurebus_fix -tv > futurebus_fix_tv.txt
./futurebus_fix -pr > futurebus_fix_pr.txt

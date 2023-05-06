#!/bin/bash

chmod +x ../Murphi3.1/src/mu
./../Murphi3.1/src/mu futurebus.m
make futurebus
./futurebus > futurebus_out.txt
./futurebus -tv > futurebus_tv.txt
./futurebus -pr > futurebus_pr.txt

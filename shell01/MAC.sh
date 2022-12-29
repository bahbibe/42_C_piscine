#!/bin/sh
ifconfig | grep '\tether' | awk '{print $2}'

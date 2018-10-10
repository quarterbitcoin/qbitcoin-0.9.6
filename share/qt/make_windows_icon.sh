#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/qbitcoin.png
ICON_DST=../../src/qt/res/icons/qbitcoin.ico
convert ${ICON_SRC} -resize 16x16 qbitcoin-16.png
convert ${ICON_SRC} -resize 32x32 qbitcoin-32.png
convert ${ICON_SRC} -resize 48x48 qbitcoin-48.png
convert qbitcoin-16.png qbitcoin-32.png qbitcoin-48.png ${ICON_DST}


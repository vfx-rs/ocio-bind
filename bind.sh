#! /usr/bin/env bash

set -e

rm -rf build

astgen bind -u -v 1 -o build/ast -- -I${OCIO_ROOT}/include

asttoc build/ast -o build -p ocio -L $OCIO_ROOT/lib -l OpenColorIO -major 1 -minor 1 -patch 1

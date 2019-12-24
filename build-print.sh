#!/bin/sh
echo [rooting-book-2]
echo Building rooting-book-2.pdf into src directory...
docker run --rm -v $PWD/src:/work vvakame/review:3.1 /bin/sh -c "cd /work && review-pdfmaker config-print.yml"

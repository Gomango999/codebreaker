#!/bin/bash

echo " === check cases are sane === "
for i in $(find "sample" -name *.in | sort)
do
    echo "checking sanity of $i"
    echo -en "\033[0;31m"
    diff -bq <(./sanity < $i) <(echo "1")
    echo -en "\033[0m"
done

for i in $(find "breaking" -name *.in | sort)
do
    echo "checking sanity of $i"
    echo -en "\033[0;31m"
    diff -bq <(./sanity < $i) <(echo "1")
    echo -en "\033[0m"
done

# === confirm that all expected outputs are correct ===
echo " === check all expected outputs are correct === "
for i in $(find "sample" -name *.in | sort)
do
    out="${i::${#i}-2}out"
    echo "checking output of $i and $out"
    echo -en "\033[0;31m"
    diff -w <(./checker <(./correct.exe < $i) $out $i) <(echo 100)
    echo -en "\033[0m"
done

for i in $(find "breaking" -name *.in | sort)
do
    out="${i::${#i}-2}out"
    echo "checking output of $i and $out"
    echo -en "\033[0;31m"
    diff -w <(./checker <(./correct.exe < $i) $out $i) <(echo 100)
    echo -en "\033[0m"
done

### === check which broken codes pass which cases ===
echo " === check which broken codes pass which cases === "
for i in $(find . -name '*.exe' | sort)
do
    if [ "$i" != "./correct.exe" ]; then

        echo "checking which cases $i passes"

        for j in $(find "sample" -name *.in | sort)
        do
            out="${j::${#j}-2}out"
            DIFF=$(diff -bq <(./checker <($i < $j) $out $j) <(echo 100))
            if [ "$DIFF" == "" ]; then
                echo "    $j - passed"
            else
                echo -en "\033[0;33m"
                echo "    $j - failed"
                echo -en "\033[0m"
            fi
        done

        in="breaking/${i::${#i}-3}in"
        out="breaking/${i::${#i}-3}out"
        DIFF=$(diff -bq <(./checker <($i < $in) $out $in) <(echo 100))
        if [ "$DIFF" == "" ]; then
            echo -en "\033[0;31m"
            echo "    $in - passed"
            echo -en "\033[0m"
        else
            echo -en "\033[0;32m"
            echo "    $in - failed"
            echo -en "\033[0m"
        fi
    fi
done


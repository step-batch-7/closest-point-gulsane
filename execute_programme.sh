#! /bin/bash
echo "compiling..."

mkdir -p bin
rm -rf ./*.o

excecutable=$1

gcc -c ./*.c
gcc -o $excecutable ./*.o

echo "compiling done"
echo "executing..."


mv ./${excecutable} ./bin
./bin/${excecutable}

rm -rf ./*.o
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -G Ninja -S . -B build
cd build
ninja
cd ..\bin\
.\generic_executable.exe
cd ..

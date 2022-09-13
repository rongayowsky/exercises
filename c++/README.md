# Exercises (C++)

This particular directory focuses on solving problems in C++ though other
directories will have the same problems solved in different languages.

## Sync with GoogleTest

To pull in the GoogleTest framework, run the following command:

```
    git submodule update --init
```

## Build and Run

1. Create executables with the standard `cmake` procedure

```
    mkdir build
    cd build && cmake ..
```

2. Compile the code and unit tests

```
    make
```

3. Run executable

```
    ./project1
```

4. Cmake supports add_test function, then the tests can be launch make test or ctest commands

```
    ./runUnitTests
```

## Acknowledgement

This project was made possible thanks to the direct use of the following repo
and the open source works it relies on.

[selyunin/gtest_submodule](https://github.com/selyunin/gtest_submodule)

Big thanks to all the open source devs out there, I hope to join your ranks in a
meaningful way at some point :)

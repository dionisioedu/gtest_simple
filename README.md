This is a basic example of usage of GTest running on a basic library project.

After clonning the project create a build folder and then run the cmake and make commands:

```
~/$ cd gtest_simple
~/gtest_simple$ mkdir build
~/gtest_simple$ cd build
~/gtest_simple/build$ cmake .. && make && make test
```

To see the detailed running tests, enter the Tests folder and then execute the tests binary:
```
~/gtest_simple/build$ cd Tests
~/gtest_simple/build/Tests$ ./ExampleTests
```
The output should be:
```
[==========] Running 2 tests from 1 test suite.
[----------] Global test environment set-up.
[----------] 2 tests from ExampleTests
[ RUN      ] ExampleTests.Test1
[       OK ] ExampleTests.Test1 (0 ms)
[ RUN      ] ExampleTests.Test2
[       OK ] ExampleTests.Test2 (0 ms)
[----------] 2 tests from ExampleTests (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test suite ran. (0 ms total)
[  PASSED  ] 2 tests.
```

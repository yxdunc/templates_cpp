### Build tests with:
```shell
g++ -I /usr/local/include -L /usr/local/lib -lgtest -lgtest_main -lpthread main.cpp softmax_test.cpp ../softmax.cpp -o test_all
```

### Run tests:
```shell
./test_all
```

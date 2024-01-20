**Command for building multiple source files:** 
```
$ g++ -c main.cpp -o main.o 
$ g++ -c rectangle.cpp -o rectangle.o 
$ g++ main.o rectangle.o -o main_app 
```

Command for running the executable: ``$ ./main``
# joepass
JoePass! is a program to write and animate juggling patterns.

This is a fork of https://sourceforge.net/projects/joepass/

**compiles with Windows msys2 x86_64**

https://www.msys2.org/

Install msys2-x86_64 

then install build tools and opengl:

```
pacman -Syu
pacman -S base-devel gcc
pacman -S mingw-w64-x86_64-freeglut
```

finally build joepass

```
autoreconf -i
./configure
make
```





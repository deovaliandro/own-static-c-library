## Usage

```bash
ar rcs libmy.a mylib.o
```

to check:

```bash
ar t libmy.a
```

for use:

```bash
gcc main.c -L. -lmy -o main
```

and for simple:

```bash
cd lib && gcc -c stack.c std.c && ar rcs libdeo.a stack.o std.o && mv libdeo.a .. && cd ..  && gcc main.c -L. -ldeo -o main && ./main
```
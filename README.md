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
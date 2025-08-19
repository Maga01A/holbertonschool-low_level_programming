# argc_argv Exercises

Bu repo C dilində **argc və argv** istifadə edərək yazılmış tapşırıqları ehtiva edir. Hər fayl ayrı bir tapşırıqdır.

## Tapşırıqlar

### 0. 0-whatsmyname.c
**Təsvir:** Proqram öz adını çap edir.
**İstifadə:**
```bash
./myprogram
```
**Qeyd:** Proqramın adını dəyişsən belə yenidən compile etməyə ehtiyac yoxdur.

### 1. 1-args.c
**Təsvir:** Proqram neçə argument verildiyini çap edir.
**İstifadə:**
```bash
./nargs hello world
```
Çıxış: 2

### 2. 2-args.c
**Təsvir:** Proqram bütün argumentləri çap edir.
**İstifadə:**
```bash
./args You can do anything
```
Çıxış:
./args
You
can
do
anything

### 3. 3-mul.c
**Təsvir:** İki rəqəmi vurur.
**İstifadə:**
```bash
./mul 2 3
```
Çıxış: 6
**Qeyd:** Əgər iki rəqəm verilməyibsə → Error

### 4. 4-add.c
**Təsvir:** Pozitiv rəqəmləri toplayır.
**İstifadə:**
```bash
./add 1 10 100
```
Çıxış: 111
**Qeyd:** Əgər rəqəm olmayan simvol varsa → Error. Əgər heç bir rəqəm verilməyibsə → 0

## Qeyd
- argv[0] → proqramın adı
- argv[1..argc-1] → istifadəçi tərəfindən verilən argumentlər
- argc → verilən sözlərin sayı (proqramın özü də daxil)
- atoi() → string → int çevirmək üçün
- isdigit() → simvol rəqəm olub olmadığını yoxlamaq üçün

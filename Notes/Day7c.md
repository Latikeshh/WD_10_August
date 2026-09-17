# Static Variable

## 1. Static Variable

A static variable is a variable that keeps its value throughout the entire execution of the program.

* It is created only once.
* Its value is preserved between function calls.
* If not given a value, it is automatically initialized to `0`.
* It can be local or global depending on where it is declared.

## 2. Local Variable

A local variable is a variable declared inside a function or block.

* It can be used only within that function or block.
* It is created when the function starts.
* Normally, it is destroyed when the function ends.
* It cannot be directly accessed from outside its scope.

## 3. Global Variable

A global variable is a variable declared outside all functions.

* It can be accessed by multiple functions in the same program.
* It remains available throughout the execution of the program.
* Its scope is generally the entire source file.
* If not initialized, it is automatically initialized to `0`.

# Recursion
* It is a function that control by condition and called by iteself.
## eg factorial 4!=24
* m1=n(n-1)!;
* 4!=4(4-1)
* =4x3!
* =4x3x2!

task static and factorial 3,5
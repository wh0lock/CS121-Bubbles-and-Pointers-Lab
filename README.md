# CS121-Bubbles-and-Pointers-Lab
## Program gives an array of 9 integers and sorts these numbers using "bubble sort" algorithm. 
## Starter code provided by Professor Harris // @twopiharris.
```
include standard input and output
set constant MAX to max length of array
create function sort array: 
    create int variables i and j
    for i from zero to MAX - 1:
        for j from zero to MAX - 1:
            if array[j] > array[j+1]:
                swap array[j] with array[j+1]
                printArray(array)

other functions:
printArray(array) - given an array, print values in a single line for debugging purposes, first function written
swap(a, b) - given pointers to variables a and b, swaps their values so that a contains starting value of b and b contains starting value of a, second function written
main - main function
int main(){
    create int array "values" as mixed up numbers 1-9
    print initial array before sort 
    
    // test the swap
    set int var x to 3
    set int var y to 5
    print x and y before
    perform swap function (swap &x, &y)
    print x and y after

    perform sort function
    print initial array after sort
    
    return 0
// end main
```

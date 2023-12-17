#include <stdio.h>

int main() {
    FILE *_input_file, *_output_file;
    int _n, _d, _sum = 0;

  
    _input_file = fopen("digit_input.txt", "r");



 
    fscanf(_input_file, "%d", &_n);

    
    fclose(_input_file);

  
    _output_file = fopen("digit_output.txt", "w");

   

    
    while (_n > 0) {
        _d = _n % 10;
        _sum += _d;
        _n /= 10;
    }

    fprintf(_output_file, "sum of digits: %d\n", _sum);

   
    fclose(_output_file);

    return 0;
}

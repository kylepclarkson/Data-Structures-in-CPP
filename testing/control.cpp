
#include <iostream>

// Compute the average of numbers read in by iostream.
void average(){
    double x, sum =0.0;
    int count = 0;
    std::cout << "Enter some numbers:\n (break with a letter):" << std::endl;
    
    while (std::cin >> x) {
        sum += x;
        ++count;
    }
    std::cout << "Numbers entered: " << count << std::endl;
    std::cout << "The average of the numbers is: " << sum / count << std::endl;
}

int main() {
    average();
    return 0;
}

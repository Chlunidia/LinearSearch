#include <iostream>

class LinearSearch {
private:
    int arr[20];
    int n;
    int i;

public:
    void input() {
        while (true) {
            std::cout << "Enter the number of elements in the array: ";
            std::cin >> n;
            if (n > 0 && n <= 20) {
                break;
            } else {
                std::cout << "\nArray should have minimum 1 and maximum 20 elements.\n";
            }
        }

        std::cout << "\n----------------------";
        std::cout << "\nEnter array elements";
        std::cout << "\n----------------------";
        
        for (i = 0; i < n; ++i) {
            std::cout << "<" << (i + 1) << ">";
            std::cin >> arr[i];
        }
    }

    void linearSearch() {
        char ch;

        do {
            std::cout << "\nEnter the element you want to search: ";
            int item;
            std::cin >> item;

            int ctr = 0;
            for (i = 0; i < n; ++i) {
                ++ctr;
                if (arr[i] == item) {
                    std::cout << "\n" << item << " found at position " << (i + 1);
                    break;
                }
            }

            if (i == n) {
                std::cout << "\n" << item << " not found in the array";
            }

            std::cout << "\nNumber of comparisons: " << ctr;

            std::cout << "\nContinue search (y/n): ";
            std::cin >> ch;

        } while (ch == 'y' || ch == 'Y');
    }
};
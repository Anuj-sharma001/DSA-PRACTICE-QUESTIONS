#include <iostream>
long long towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 0) {
        return 0;
    }
    
    if (n == 1) {
        std::cout << "Move disk 1 from rod " << source << " to rod " << destination << "\n";
        return 1;
    }

    long long movesCount1 = towerOfHanoi(n - 1, source, auxiliary, destination);

    std::cout << "Move disk " << n << " from rod " << source << " to rod " << destination << "\n";

    long long movesCount2 = towerOfHanoi(n - 1, auxiliary, destination, source);

    return movesCount1 + 1 + movesCount2;
}

int main() {
    int total_disks = 3; 
    
    std::cout << "--- Steps to solve Tower of Hanoi with " << total_disks << " disks ---\n";
    
    long long total_moves = towerOfHanoi(total_disks, 'A', 'C', 'B');
    
    std::cout << "--------------------------------------------------\n";
    std::cout << "Total number of moves: " << total_moves << "\n";
    
    return 0;
}

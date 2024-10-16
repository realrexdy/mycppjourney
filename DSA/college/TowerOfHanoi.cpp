#include <iostream>

void TOH(int num, char src, char auxi, char dest){
    if(num==0){
        return;
    }
    TOH(num-1, src, dest, auxi);
    printf("Disk %d moved from %c to %c\n", num, src, dest);
    TOH(num-1, auxi, src, dest);
}

int main(){
    int num;
    std::cout << "\nEnter the number of Disks:\n";
    std::cin >> num;
    TOH(num, 'A', 'B', 'C');
    return 0;
}
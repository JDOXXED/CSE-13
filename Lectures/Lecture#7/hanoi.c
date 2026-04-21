/* Solving the tower of hanoi problem */

/* Tower of Hanoi
 * n disks are placed on a rod A in increasing order of their size
 * you need to move the n disks from rod A to rod C without ever putting larger disks on top of the smaller ones
 * return the number of moves needed to achieve this goal
 * Hint: you may use an auxiliary rod B to help in the process */

#include <stdio.h>

int move(int n, char a, char b, char c) {
	/* TODO: complete this function to move n disks from rod A to C
	 * start with the base case for moving disks from one rod to another
	 * generalize the solution for larger number of disks 
	 * return the total number of moves */
    int moves = 0;

    if (n == 1){
        printf("Single disk left. Move %d disk(s) from %c to %c\n", n, a, c);
        return 1;
    }
    int n1 = move(n-1, a, c, b); //move the top n-1 disks from A to B using C as auxiliary
    printf("Move disk %d from %c to %c\n", n, a, c); //move the largest disk from A to C
    int n2 = move(n-1, b, a, c); //move the n-1 disks from B to C using A as auxiliary
    return n1 + n2 + 1; //total moves is the sum of moves for the two recursive calls plus one move for the largest disk
}

int main() {
    int n;
	printf("Enter the number of disks n: ");
	scanf("%d", &n);

	int moves = 0;
	/* TODO: call the move function to calculate the number of moves needed for n disks */
	moves = move(n, 'A', 'B', 'C');

	printf("Total moves needed to move %d disks from A to C are %d\n", n, moves);
	return 0;
}
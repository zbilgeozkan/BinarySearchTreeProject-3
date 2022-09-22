#include <stdio.h>

int main() {
    printf("Binary Search Tree Konulu Projem, açıklama satırındadır.");
    return 0;
}

/* [7  5  1  8  3  6  0  9  4  2] dizisinin Binary-Search-Tree aşamalarını yazınız.

       7   [root = 7]

 * Sağ tarafından kendinden büyük elemanlar, sol tarafında ise kendinden küçük elemanlar bulunacak.

       7
      /
     5

 * 5 sayısını 7'den küçük olduğunda 7'nin soluna ekledik.

       7
      / \
     5   8
 
 * 1 sayısını 5'ten ve 7'den küçük olduğundan, 7 ve 5'in soluna ekledik.

       7
      / \
     5   8
    /
   1

 * 8 sayısını 7'den büyük olduğundan, 7'nin sağına ekledik.

       7
      / \
     5   8
    /
   1
    \
     3

 * 3 sayısını 7'den ve 5'ten küçük olduğundan 5'in soluna, 1'den büyük olduğundan 1'in sağına ekledik.

       7
      / \
     5   8
    / \
   1   6
    \
     3

 * 6 sayısını 7'den küçük olduğundan 7'nin soluna, 5'ten büyük olduğundan 5'in sağına ekledik.

       7
      / \
     5   8
    / \
   1   6
  / \
 0   3

 * 0 sayısını 7'den, 5'ten ve 1'den küçük olduğundan 1'in soluna ekledik.

       7
      / \
     5   8
    / \   \
   1   6   9
  / \
 0   3

 * 9 sayısını 7'den ve 8'den büyük olduğundan 8'in sağına ekledik.

       7
      / \
     5   8
    / \   \
   1   6   9
  / \
 0   3
      \
       4

 * 4 sayısını 7'den ve 5'ten küçük olduğundan 5'in soluna, 1'den ve 3'ten büyük olduğundan 3'ün sağına ekledik.

       7
      / \
     5   8
    / \   \
   1   6   9
  / \
 0   3
    / \
   2   4

 * 2 sayısını 7'den ve 5'ten küçük olduğundan 5'in soluna, 1'den büyük olduğundan 1'in sağına ve 3'ten küçük olduğundan 3'ün soluna ekledik.

*/
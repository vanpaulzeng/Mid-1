//
//  main.cpp
//  Mid-1
//
//  Created by Admin on 2024-07-15.
//
#include <iostream>
using namespace std;

/*
#include <stdio.h>

void swapnum(int &i, int &j) {
  int temp = i;
  i = j;
  j = temp;
}

int main(void) {
  int a = 10;
  int b = 20;

  swapnum(a, b);
  printf("A is %d and B is %d\n", a, b);
  return 0;
}
 
 
*/



// function declaration: then implemtation in the later

int deleteNum(int *nums, int numItems, int val);

int insertNum(int *nums, int numItems, int val);





int main ()
{
const int NUMITEMS = 20;
int nums[NUMITEMS] = {3, 2, 3, 3, 9, 6, 7, 5};
int numItems=8;
// deleteNum should delete all of the occurrences
// of its 3rd argument from the array and return the
// number of meaningful numbers left in the array. For
// example nums after the call below start
// {2, 9, 6, 7, 5, ...} and numItems 5
    
    

numItems = deleteNum(nums, numItems, 3);
    cout << numItems;
// insertNum should insert its 3rd argument that
// number of times into the array and return the
// number of meaningful numbers in the array. For
// instance nums after the call below should start
// {2, 2, 2, 9, 6, 7, 5, ...} and numItems 7
// You can assume there is enough space in the array.

numItems = insertNum(nums, numItems, 2);
    cout << numItems;

    
//Q14
    int nums1[] = {2, 4, 6, 1, 2, 3};
    int *p = nums1;
    while (p< nums1 +6){    //nums is 0~5, p point to node 1, num1 + 6 means node next node 6
        cout << "p + 6 is :  " << nums1;
        if (*p % 3 == 0)
            *p = *p + 1;
        else if (*p % 2 == 0){
            *p += 2;
            p = p + 1;
        }
        p = p + 1;
    }
    for (int i = 0; i < 6; i++) cout << nums1[i] << " "; cout << endl;
    
    
    
    
//Q6:Be able to write the code for a dynamically resizable array.
    
    int n = 0;
      cout << "enter number of elements you want" << endl;;
      cin >> n;
      int numbersOne[n]; // not ok

      int n2 = 0;
      cout << "enter number of elements you want " << endl;
      cin >> n2;
      int *numbersTwo = new int[n2]; // ok
      
      delete[] numbersTwo;
   
    
    
    
return 0;
}




int deleteNum(int *nums, int numItems, int val) {
    int i, numItemsNew = 0;
    int *p = nums;  //let p point to nums item 0, then let p move on, check *p (you can say num[p]) by val, if match theh move p to next, num keep same to wait next nums != val, if match, let p move on is enough
    for (i = 0; i < numItems; i++){
        if (*p != val){  //not match, both move forward
            *nums = *p;
            nums ++;
            numItemsNew ++;
        }
        p++;
    }


    return numItemsNew;
}

int insertNum(int *nums, int numItems, int val){
    int i, numItemsNew = 0;
    for (i = numItems + val -1; i >= val; i-- ){
        *(nums + i) = *(nums + i - val );
    }
    for (i = 0; i < val; i++){
        *(nums + i) = val;
    }
    return numItems + val;
}

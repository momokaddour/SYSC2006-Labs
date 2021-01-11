#include <stdlib.h>
#include <string.h>

/*
An algorithm is a sequence of steps for accomplishing a task. Linear search is a 
search algorithm that starts from the beginning of a last and checks each 
element until the search key is found or the end of the list is reached.
*/

/*
Linear Search algorithm example
*/

int LinearSearch(int numbers[], int numbersSize, int key){
	int i;

	for (i = 0; i < numbersSize; ++i){
		if (numbers[i] == key){
			return i; 
			}
		}
		
		return -1; /*This is the case where i is not found*/
	}

/*
The runtime is the time the algorithm takes to execute.
If each comparison takes 1 microsecond, the list is 1 second with 1,000,000 elements
*/

/*
A Binary search: 

In a contact list for example, where names and letters are sorted by last name, it would
be faster to look at the middle element and then proceed to look at the first half 
and then the second half and keep dividing. 

example: Amy, Bob, Chris, Holly, Ray, Sarah, Zoe, if we're looking for Amy

First the binary search goes to Holly
Then it goes to Bob
And then to Amy

Overall binary search is a faster algorithm for searcing a list if the list's elements
are sorted and directly accessible 
*/

int BinarySearch(int numbers [], int numbersSize, int key){
	int mid;
	int low; 
	int high;

	low = 0;
	high = numbersSize -1;

	while (high >= low){
		mid = (high + low)/2;
		if (number[mid] < key){
			low = mid + 1;
			}
		else if (number[mid] > key){
			high = mid - 1;
			}
		else {
			return mid;
			}
		}

	return -1; // nothing found in the list
	
	}

/*
Binary search is incredibly efficient in finding elements in a sorted list
because the search space is reduced by a half. For a 32 element list, if the search
key is not found or the search space is empty.

For an N element list, the maximum number of steps needed to reduce the search space
to an empty sublist is [Logb2 N] + 1;

So for runtime, 1 microsecond per comparison, 20 microseconds for 1,000,000 
and 21 to search 2,000,000
*/

/*
Big O notation is a mathematical way of describing how a function generally behaves
in relation to the input size. In Big O notation, all functions that have the same growth 
rate are characterized using the same Big O notation. In essence, all functions 
that have the same growth rate are considered equivalent in Big O notation.

Given a function that describes the running time of an algorithm, the Big O notation
for that function can be determined using: 

1. If f(x) is a sum of several terms, the highest order term (the one with the fastest growth rate)
is kept and others are discarded.

2. If f(x) has a term that is a product of several factors, all constants are omitted

If algorithm steps are: 5 + 13N + 7N^2
Big O notation is: O(5 + 13N + 7N^2) = O (7N^2) (since it's the higest order)
= O (N^2) "Oh N suared"

Composite Functions:
c.O(f(x)) = O(f(x))
c + O(f(x)) = O(f(x))
Rg(x) * O(f(x)) = O(g(x)*Of(x)))
Rg(x) + O(f(x)) = O(g(x) + O(f(x)))

Some Considerations in evaluating algorithms:
When N is small, efficiency is less of a concern
For large N, the computation time varies greatly with the rate of growth of the function f.

For example:

N^2:
N = 10: 10micros
N = 50: 50 micros
N = 100: 100 micros
N = 1000: 1000 micros
N = 10,000: 10 ms
N = 1000000: 0.1s

Therefore, this increases exponentional 

Types of notations:
O(1): Constant:
Given two constant numbers and compare which is bigger, will be the same 
each time.

O(log N): Logarithmic:
Binary search as discussed above:

O(N): Linear: 
The linear search as discussed above, number of comparisons goes up with the number 
of elements. 

O(NlogN): Log-linear:
Merge sort: 
Find the midpoint, sort the left part, sort the right part, merge parts
*/

MergeSort(numbers, i, k) {
   j = 0
   if (i < k) {
      j = (i + k) / 2              // Find midpoint 
      
      MergeSort(numbers, i, j)     // Sort left part
      MergeSort(numbers, j + 1, k) // Sort right part
      Merge(numbers, i, j, k)      // Merge parts
   }
}

/*
O(N^2): quadratic
Selection Sort: 
Sorts an array by repeatedly finding the minimum element in ascending order and then
putting it at the beginning.

There are two subarrays
1) The subarray which is already sorted
2) Remaining subarray which is unsorted
*/

SelectionSort(number, N) { 
   for (i = 0; i < N; ++i) {
      indexSmallest = i
      for (j = i + 1; j < N; ++j) {
         if (numbers[j] < numbers[indexSmallest]) {
            indexSmallest = j
         }
      }
      
      temp = numbers[i]
      numbers[i] = numbers[indexSmallest]
      numbers[indexSmallest] = temp
}

/*
O(C^N): Exponential
Fibonnaci, adding the previous two elements to get the next	
/*/

Fibonacci(N) {
  if ((1 == N) || (2 == N)) {
    return 1
  }
  return Fibonacci(N-1) + Fibonacci(N-2)
}

/*
Algorithm Analysis: 
To analyze how runtime of an algorithm scales as the input size increases, we first 
determine how many operations that algorithm executes for a specific input size, N.

Then, the big-O notation for that function is determined
It is often determined for the worst-case runtime complexity.

The worst-case runtime of an algorithm is the runtime complexity for an input that results
in the longest execution. There are also best case runtime and average case runtime.

example:	
*/

void maxVal (numbers[], N){
		maxVal = numbers[0];
		for (i = 0; i < N; ++i){
			if (numbers[i] > maxVal){
				maxVal = numbers[i];
				}
			}
		}

/*
1 operation in the beginning with the initializing of maxVal
1 operation for setting i = 0 (only done once)
For N times there are 2 operations (compare i to N and i ++), 2 operation are also done (comparing using if and then setting max)
There is also one 1 final comparison done

Therefore:
f(N) = 1 + 1 + 1 + N( 2 + 2)
= 3 + 4N
= O(N)


for (i = 0; i < N; ++i) {
   if ((i % 2) == 0) {
      outVal[i] = inVals[i] * i;
   }
}

f(N) = 1 + 1 + 4N + N/2 (N/2 because of the one operation that is executed every other iteration)


nVal = N;
steps = 0;
while (nVal > 0) {
   nVal = nVal / 2;
   steps = steps + 1;
}

f(N) = 1 + 1 + Logb2N*3 (Log because it's dividing by 2)
O(Logb2N)


Counting Constant time operations:

for (i = 0; i < 24; ++i) {
   if (timeHour < 6) {        
      tollSchedule[i] = 1.55;
   }
   else if (timeHour < 10) { 
      tollSchedule[i] = 4.65;
   }
   else if (timeHour < 18) {  
      tollSchedule[i] = 2.35;
   }
   else {  
      tollSchedule[i] = 1.55;
   }
}

In this case, the statement within the loop have an O(1) and the for loop
executes a constant number of times so:

24*O(1) = O(1)


Runtime analysis of nested loops:

for (i = 0; i < N; ++i) {
   indexSmallest = i;

   for (j = i + 1; j < N; ++j) {
      if (numbers[j] < numbers[indexSmallest]) {
         indexSmallest = j;
      }
   }
      
   temp = numbers[i];
   numbers[i] = numbers[indexSmallest];
   numbers[indexSmallest] = temp;
}

f(N) = (N-1) + (N-2) +...+ 2 + 1 = N(N-1)/2
f(N) = c((N-1) + (N-2) +...+ 2 + 1) = c(N(N-1)/2)
f(N) = c((N-1) + (N-2) +...+ 2 + 1) = c(N(N-1)/2) * d*N (outerloop 5 operations generalized as d)
(4 operations generalized as c)
O(f(N)) = O(c/2(N^2-N)+d*N) = O(N^2 + N) = O(N^2)

A lot of the time, the number of independent nested for loops is the exponent of N
3 for loops = O(N^3)

	
*/


int main (void){
	
	}


## ARRAYS


	1. Contains Duplicate (217) - Sort and see if current == previous
	2. Valid Anagram (242) - vector of counters for each character
	3. Two Sum (1) - make a hashmap and look for target-current inside, if not found - insert.
	4. Group Anagrams (49) - hashmap (string -> vector of strings)
	5. Top K Freq Elements (347) - hashmap (number -> freq), insert each in priority queue and pop first k.
	6. Product of Array Except Self (238) - calculate total product without zeros, count number of 0, split in 3 cases.
	7. Valid Sudoku (36) - 3 vectors of hashmaps for rows, columns and subsquares. The index func for subsquares is[i/3*3+j/3]
	8. Longest Consecutive Sequence (128) - populate hash set, interate each leftmost num in set and count conseq elements. Figure the max.
	

## Two Pointers


	1. Valid Palindrome (125) - (LOW AND HIGH) see if every first and last num is alphanumeric and compare to each other *tolower()*. if different - return false.
	2. Two Sum II (167) - (LOW AND HIGH) see if every low and high make up the target, if not, move accordingly.
	3. 3Sum (15) - skip if every current == previous. Given the current, apply Two Sum II.
	4. Container with Most Water (11) - (LOW AND HIGH) check current vs max volume. The pontential max cap at every point is determined by current highest wall. Move low and high accordingly.
	5. Trapping Rain Water (42) - (LOW AND HIGH). Check which wall is higher (left or right) and move the opposite, count difference between heights and add to volume, repeat until >= wall is found.


## Sliding Window


	1. Best Time to Buy and Sell Stock (121) - l=0, r=1. If profit - slide r to the right and update max profit. Otherwise, move l=r as it is now a new low.
	2. Longest substring without repeating characters (3) - remember count of character in a map or array. Whenever repeat is found - decrease the current counter and move left pointer by one. Determine max and move right pointer.
	3. Longest Repeating Char Replacement (424) - Determine current most freq char and allow for k more non repeted. Move the window.
	4. Permutation in String (567) - Slide window of size s1.len, check if every contained substr is a permutation.
	5. Minimum Window Substring (76) - same as above.
	6. Sliding Window Maximum (239) - Deque sorts increasingly, store indices in the deque and check for every last indice that it's outdated. check for every new max.


## Stack


	1. Valid Parenthesis (20) - for every closed - check if top of the stack is the same open. If not, false. If open, push open on top of the stack.
	2. Min Stack (155) - insert pairs into regular stack. Second of the pair will store the max at the moment of insertion. 
	3. Generate Parentheses (22) - recursive. keep count of open and closed. close can be only considered when open > closed.
	4. Daily Temperature (739) - stack, while next day is warmer than top of the stack, populate the result and pop.
	5. Car Fleet (853) - make vector of pairs pos->speed. sort it. make vector time and calculate for each car. Compare from the end if previous car is faster than current. If faster, decrease number of fleets by 1 and adjust time.
	6. 

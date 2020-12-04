# cf-688-div2
editorial for B=
First, let's find the optimal strategy for Gildong to follow to make all elements of the array equal.

It's obvious that there is no need to perform any operation on the suffix starting at a1, since that operation changes all the integers in the array. For i=2 to n, the only way for ai to have equal value to ai−1 is to perform one of the operations on the suffix starting at ai abs(ai−ai−1) times. This is because all operations starting at other positions do not change the difference between ai and ai−1. Therefore, the minimum number of operations Gildong has to perform is ∑ni=2abs(ai−ai−1).

How should we change one element so that we can minimize this value? Let's take care of some special cases first. The optimal way to change a1 is to make it equal to a2, and then the minimum number of operations Gildong has to perform is decreased by abs(a2−a1). Similarly, the optimal way to change an is to make it equal to an−1, and then the minimum number of operations Gildong has to perform is decreased by abs(an−an−1).

For the rest of the elements, changing ai affects both abs(ai−ai−1) and abs(ai+1−ai). Here, we need to observe an important fact: This value is minimized when ai is between ai−1 and ai+1, inclusive. Intuitively, if ai−1<ai>ai+1, Gildong has to perform one or more 2-nd operations on the suffix starting at ai, and then one or more 1-st operations on the suffix starting at ai+1 to compensate for the extra 2-nd operations. This applies to the scenario where ai−1>ai<ai+1 as well. If ai is between ai−1 and ai+1, these additional operations are unnecessary. In fact, the number of operations is decreased from abs(ai−ai−1)+abs(ai+1−ai) to abs(ai+1−ai−1).

Therefore, we can decrease the number of operations needed by:

max⎧⎩⎨abs(a2−a1)abs(an−an−1)maxi=2..n−1abs(ai−ai−1)+abs(ai+1−ai)−abs(ai+1−ai−1)
The answer is x−y where x is the minimum number of operations Gildong needs to perform on the initial array, and y is the maximum number of operations we can decrease by changing exactly one element.

Time complexity: O(n).

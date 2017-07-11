/*Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
	public ListNode subtract(ListNode a) {
	    ListNode current = a;
	    
	    ArrayDeque<Integer> deque = new ArrayDeque<Integer>();
	    while(current != null){
	        deque.addFirst(current.val);
	        current = current.next;
	    }
	    
	    int iterations = deque.size()/2;
	    
	    //reset current to the head to iterate through the list
	    current = a;
	    for(int i = 0; i < iterations; i++){
	        current.val = deque.removeFirst() - current.val;
	        current = current.next;
	    }
	    
	    return a;
	}
}


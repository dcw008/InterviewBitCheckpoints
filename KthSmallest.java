public class Solution {
	// DO NOT MODIFY THE LIST. IT IS READ ONLY
	public int kthsmallest(final List<Integer> a, int k) {
	    
	    PriorityQueue<Integer> queue = new PriorityQueue<>(Collections.reverseOrder());
	    
	    for(int num : a){
	        queue.add(num);
	        if(queue.size() > k){
	            queue.poll();
	        }
	    }
	    
	    return queue.peek();
	}
}


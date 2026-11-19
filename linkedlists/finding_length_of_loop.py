class Node  : 
    def __init__(self,data,next):
        self.data = data
        self.next = next


# finding middle of linked list

class Solution : 

    def find_length(self,slow,fast) :
        len = 1
        fast = fast.next

        while(slow!= fast) :
            len += 1
            fast = fast.next

        return len
        

    def optimized (self,head) : 
        slow = head
        fast = head

        while fast != None and fast.next != None :
            slow = slow.next
            fast = fast.next.next

            if(slow == fast) : 
                return self.find_length(slow,fast)

        return 0

            

     
    def brute(self,head) : 
        map = {}
        temp = head
        t=0

        while temp != None :
             t += 1
             if temp in map :
                  return t - map[temp] 
             map[temp] = t
             temp = temp.next

        return 0

                 

            
   
            
class Node : 
    def __init__(self,data,next : Node = None):
        self.data = data
        self.next = next


class Solution : 

    def sort(self,head) : 
       if not head : 
          return head
       i=1

       odd_head = Node(-1)
       even_head = Node(-1)

       temp = head
       odd = odd_head
       even = even_head



       while temp : 
          if(i % 2 == 0) : 
             even.next = temp
             even = even.next
          else : 
             odd.next = temp
             odd = odd.next
          i+=1
          temp = temp.next

       even.next = None
       odd.next = even.next.next
       return odd_head.next
       


       

       
       
    def print_linked_list(self,head):
      temp = head

      while temp is not None:
        print(temp.data, end="")

        if temp.next is not None:
            print(" → ", end="")

        temp = temp.next

      print(" → None")
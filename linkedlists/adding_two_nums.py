class Node : 
    def __init__(self,data,next : Node = None):
        self.data = data
        self.next = next


class Solution : 
    def print_linked_list(self,head):
      temp = head

      while temp is not None:
        print(temp.data, end="")

        if temp.next is not None:
            print(" → ", end="")

        temp = temp.next

      print(" → None")
    
    def adding_two_ll(self, l1,l2) : 
        temp1 = l1
        temp2 = l2
        carry = 0
        # creating dummy node
        head =  Node(-1)
        res = head

        while temp1 != None or temp2 != None : 
            sum = carry
            if temp1 : 
                sum += temp1.data
                temp1 = temp1.next
            if temp2 :
                sum += temp2.data
                temp2 = temp2.next

            
            carry = sum // 10

            new_node = Node(sum % 10)
            res.next = new_node
            res = res.next

        if carry : 
            new_node = Node(carry)
            res.next = new_node

        return head.next


head1 = Node(1)
head1.next = Node(1)
head1.next.next = Node(5)
head1.next.next.next = Node(3)


# Second Linked List: 9 → 9 → 5 → 4
head2 = Node(9)
head2.next = Node(9)
head2.next.next = Node(5)
head2.next.next.next = Node(4)

sol = Solution()
res = sol.adding_two_ll(head1,head2)
sol.print_linked_list(res)


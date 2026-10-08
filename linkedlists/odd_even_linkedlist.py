class Node: 
    def __init__(self,data):
        self.data = data
        self.next = None

node1 = Node(1)
node2 = Node(2)
node3 = Node(3)
node4 = Node(4)
node5 = Node(5)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5


# time complexity  = 2N and space complexity = N


def odd_even_linker(head : Node) :
    stack = []
    temp = head

    # for odd

    while temp!= None and temp.next != None :
        stack.append(temp.data)
        temp = temp.next.next

    if temp:
        stack.append(temp.data)

    # for even

    temp = head.next

    while temp!= None and temp.next != None :
        stack.append(temp.data)
        temp = temp.next.next

    if temp :
        stack.append(temp.data)


    temp = head
    for el in stack :
        temp.data = el
        temp = temp.next

    temp = head

    while temp : 
        print(temp.data)
        print("\n")
        temp = temp.next


# more optimized

def odd_even_linker_optimized(head : Node) :
    if not head  or head.next == None: 
        return head
    
    odd = head
    even = head.next
    even_start = head.next

    while even != None and  even.next.next != None :

        odd.next = odd.next.next
        even.next = even.next.next

        odd = odd.next
        even = even.next

      


odd_even_linker(node1)



      



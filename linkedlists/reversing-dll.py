class Node: 
    def __init__(self,data):
        self.data = data
        self.prev = None
        self.next = None


# Linked list

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)

# 2. Manually link them to form a Doubly Linked List
# Link node1 <-> node2
node1.next = node2
node2.prev = node1

# Link node2 <-> node3
node2.next = node3
node3.prev = node2

# 3. Define head and tail references
head = node1


arr = [1,23,34]
print(arr.pop())

def reverse_dll(dll : Node):
    temp = dll
    stack = []
    while(temp!= None):
        stack.append(temp.data)
        temp = temp.next

    temp = dll
    while (len(stack) != 0):
        temp.data = stack.pop()
        temp = temp.next


def reverse_dll_links(dll :Node):

    temp  = dll
    while(temp):
        temp.next , temp.prev = temp.prev , temp.next

        if(temp.prev == None):
            head = temp
        temp = temp.prev

    return head

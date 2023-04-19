class node:
	
	def __init__(self,info, link=None):
		
		self.info=info
		self.link=link


class linkedlist:
	
	#default constructer
	def __init__(self):
		self.head=None
		
		
	def begin(self,info):
		#create a new node
		new=node(info)
		
		if self.head!=None:
			new.link=self.head
			self.head=new
		else:
			self.head=new
	
	
	def end(self,info):
		
		new=node(info)
		if self.head!=None:
			current = self.head
			while current.link!=None:
				current=current.link
			current.link=new
		else:
			self.head=new
	
	
	def display(self):
		current=self.head
		while current!=None:
			print(current.info)
			print(current.link)
			current=current.link
						
LL=linkedlist()
LL.begin(10)
LL.begin(650)
LL.end(53)
LL.end(520)
LL.display()			
LL.begin(13)
LL.display()
#include <iostream>

class Stack {
	struct Elem {
		int num;
		Elem *p;
	};
	
	Elem *top;
public:
	Stack() {
		top = NULL;
	}

	~Stack() {
		while(top)
			pop();
	}

	void push(int n) {
		Elem *tmp = new Elem;
		tmp->num = n;
		tmp->p = top;
		top = tmp;
	}

	int pop() {
		if(!top) return -1;
		Elem tmp = *top;
		delete top;
		top = tmp.p;
		return tmp.num;
	}
};

int main() {
	Stack obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	std::cout << obj.pop() << std::endl;
	std::cout << obj.pop() << std::endl;
	std::cout << obj.pop() << std::endl;
}

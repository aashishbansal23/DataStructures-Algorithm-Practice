template<typename T>
class StackUsingArray{
	T *data;
	int capacity, nextIndex;
	
	public:
	StackUsingArray(){
		data = new T[1];
		nextIndex = 0;
		capacity = 1;
	}
	
	int size(){
		return nextIndex;
	}
	
	bool isEmpty(){
		return nextIndex == 0;
	}
	
	bool isFull(){
		return nextIndex == capacity;
	}
	
	void push(T element){
		if(nextIndex == capacity){
			T *newData = new T[2*capacity];
			for(int i=0; i<nextIndex; i++){
				newData[i] = data[i];
				delete []data;
				data = newData;
			}
		}
		data[nextIndex++] = element;
	}
	
	T pop(){
		if(nextIndex == 0){
			cout << "Stack is empty !!!" << endl;
			return 0;
		}
		T temp = data[nextIndex-1];
		nextIndex--;
		return temp;
	}
	
	T peek(){
		if(nextIndex == 0){
			cout << "Stack is empty !!!" << endl;
			return 0;
		}
		T temp = data[nextIndex-1];
		return temp;
	}
	
	void display(){
		cout << "Elements of stack are:" << endl;
		for(int i=nextIndex-1; i>=0; i++){
			cout << data[i] << " ";
		}
		cout << endl;
	}
};

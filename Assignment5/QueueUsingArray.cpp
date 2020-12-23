#include<iostream>
using namespace std;
template<typename T>
class QueueUsingArray{
	T* data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	
	public:
		QueueUsingArray(){
			data = new T[1];
			nextIndex = 0;
			firstIndex = -1;
			size = 0;
			capacity = 1;
		}
		
		bool isEmpty(){
			return size==0;
		}
		
		bool isFull(){
			return size==capacity;
		}
		
		void enqueue(T element){
			if(size == capacity){
				T* newData = new T[2*capacity];
				for(int i=0; i<capacity; i++){
					newData[i] = data[i];
				}
				delete []data;
				data = newData;
				nextIndex = capacity;
				capacity *= 2;
			}
			data[nextIndex] = element;
			nextIndex = (nextIndex+1)%capacity;
			if(firstIndex == -1){
				firstIndex = 0;
			}
			size++;
		}
		
		T dequeue(){
			if(isEmpty()){
				cout << "Queue is empty !!!" << endl;
				return 0;
			}
			T ans = data[firstIndex];
			firstIndex = (firstIndex+1)%capacity;
			size--;
			if(size == 0){
				nextIndex = 0;
				firstIndex = -1;
			}
			return ans;
		}
		
		T peek(){
			if(isEmpty()){
				cout << "Queue is empty !!!" << endl;
				return 0;
			}
			return data[firstIndex];
		}
		
		void display(){
			if(isEmpty()){
				cout << "Queue is empty !!!" << endl;
				return ;
			}
			
			int temp = firstIndex;
			cout << "Elements in queue are:" << endl;
			for(int i=0; i<size; i++){
				cout << data[temp] << " ";
				temp = (temp+1)%capacity;
			}
			cout << endl;
		}
};

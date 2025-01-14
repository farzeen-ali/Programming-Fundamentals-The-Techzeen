#include<iostream>
#include<cmath>

using namespace std;

void numberPyramid(int n){
	for(int i = 1; i <= n; i++){ //outer loop: number of rows
		for(int j = 1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j = 1; j<=i; j++){ //first inner loop: numbers increment
			cout<<j;
		}
		for(int j = i - 1; j>=1; j--){ //second inner loop: numbers decrement
			cout<<j;
		}
		cout<<endl;
	}
}

void numberInvertedPyramid(int n){
	for(int i = n; i >= 1; i--){ //outer loop: number of rows
		for(int j = 1; j<=n-i; j++){
			cout<<" ";
		}
		for(int j = 1; j<=i; j++){ //first inner loop: numbers increment
			cout<<j;
		}
		for(int j = i - 1; j>=1; j--){ //second inner loop: numbers decrement
			cout<<j;
		}
		cout<<endl;
	}
}

void diamond(int n){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i; j++){
			cout<<" ";
		}
		for(int j = 1; j <= 2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	for(int i = n-1; i >= 1; i--){
		for(int j = 1; j <= n - i; j++){
			cout<<" ";
		}
		for(int j = 1; j <= 2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void snakePattern(int n){
	int count = 1;
	for(int i = 1; i <= n; i++){
		if(i%2 != 0){
			for(int j = 1; j <=n; j++){
				cout<<count++<<" ";
			}
		}
		else {
			int end = count + n - 1;
			for(int j = end; j>= count; j--){
				cout<<j<<" ";
			}
			count = end + 1;
		}
		cout<<endl;
	}
}
void uniquePattern(int n){
	int mid = (n+1)/2;
	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=n; j++){
			if((j == mid) || (i == mid) || (j == mid - abs(mid - i)) || (j== mid+abs(mid-i))){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
int main(){
	int n = 5;
	
	cout<<"1. Number Pyramid: "<<endl;
	numberPyramid(n);
	cout<<endl;
	
	cout<<"2. Number Inverted Pyramid: "<<endl;
	numberInvertedPyramid(n);
	cout<<endl;
	
	cout<<"3. Diamond: "<<endl;
	diamond(n);
	cout<<endl;
	
	cout<<"4. Snake Pattern: "<<endl;
	snakePattern(n);
	cout<<endl;
	
	int num = 7;
	cout<<"5. Unique Pattern: "<<endl;
	uniquePattern(num);
	cout<<endl;
	return 0;
}

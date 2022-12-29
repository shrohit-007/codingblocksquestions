#include<bits/stdc++.h>
using namespace std;
int main() {
	int q;
    cin>>q;
    queue<int> q1,q2,q3,q4,groupor;
    bool isOne = false, isTwo = false, isThree = false, isFour = false;
    for (int k = 0; k < q; k++) {
        char ch;
        cin>>ch;
        if (ch == 'E') {

            int x,y;
            cin>>x>>y;
            if (x == 1) {
                q1.push(y);
                if (!isOne) {
                    groupor.push(1);
                    isOne = true;
                }
            } else if (x == 2) {
                q2.push(y);
                if (!isTwo) {
                    groupor.push(2);
                    isTwo = true;
                }
            } else if (x == 3) {
                q3.push(y);

                if (!isThree) {
                    groupor.push(3);
                    isThree = true;
                }

            } else {
                q4.push(y);

                if (!isFour) {
                    groupor.push(4);
                    isFour = true;
                }
            }

        }
        if (ch == 'D') {
            int front = groupor.front();
            if (front == 1) {

                if (!q1.empty()) {
                    cout<<"1"<<" "<<q1.front()<<endl;
                    q1.pop();
                }

                if (q1.empty()) {
                    groupor.pop();
                    isOne = false;
                }

            } else if (front == 2) {

                if (!q2.empty()) {
                    cout<<"2"<<" "<<q2.front()<<endl;
                    q2.pop();
                }

                if (q2.empty()) {
                    groupor.pop();
                    isTwo = false;
                }

            } else if (front == 3) {

                if (!q3.empty()) {
                    cout<<"3"<<" "<<q3.front()<<endl;
                    q3.pop();

                }
                if (q3.empty()) {
                    groupor.pop();
                    isThree = false;
                }

            } else {

                if (!q4.empty()) {
                    cout<<"4"<<" "<<q4.front()<<endl;
                    q4.pop();
                }

                if (q4.empty()) {
                    groupor.pop();
                    isFour = false;

                }

            }
        }
    }
}

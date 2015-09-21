
#include <vector>
#include <stack>
#include <queue>
#include <iterator>
#include <set>
#include <map>
#include <stdlib.h>  

using namespace std;

int main (int argc, char *argv[]){
	vector<int> v(10); 
	fprintf(stdout, "Vector size %lu, %d\n", v.size(), v.empty());
	for(int i = 0; i < 10; i++) { 
	  v[i] = (i+1)*(i+1); 
	}
	vector<int>::iterator vs = v.begin();
	vector<int>::iterator ve = v.end();
	for(;vs < ve;vs++){
		printf("%d\n", vs[0]);
	}
	vector<int> v1; 
	fprintf(stdout, "Vector size %lu, %d\n", v1.size(), v1.empty());
	for(int i = 0; i < 10; i++) { 
	  v1.push_back( (i+1)*(i+1));
	}
	v1.clear();
	fprintf(stdout, "Vector size %lu, %d\n", v1.size(), v1.empty());
	stack<int> s; 
	for(int i = 0; i < 10; i++) { 
	  s.push( (i+1)*(i+1));
	}
	for(int i = 0; i < 10; i++) {
		int out = s.top();
		s.pop();
	  	printf("%d\n", out);
	}
	fprintf(stdout, "Stack size %lu, %d\n", s.size(), s.empty());
	queue<int> q; 
	for(int i = 0; i < 10; i++) { 
	  q.push( (i+1)*(i+1));
	}
	//q.clear();
	for(int i = 0; i < 10; i++) {
		int out = q.front();
		int last = q.back();
		q.pop();
		printf("%d %d\n", out, last);
	}
	fprintf(stdout, "Queue size %lu, %d\n", q.size(), q.empty());
	

	pair<int, int> p;
	p.first = 10;
	p.second = 20;
	pair<int, int> p1(20,30);
	if(p < p1){
		printf("P1 is greater\n");
	}

	set<int> se;
	for(int i=10;i>=0;i--){
		se.insert(i);
	}
	fprintf(stdout, "Set size %lu, %d\n", se.size(), se.empty());
	for(set<int>::iterator i = se.begin();i != se.end();i++){
		printf("%d\n", *i);
	}
	for(set<int>::iterator i = se.find(5);i != se.end();i++){
		printf("%d\n", *i);
	}
	for(int i=10;i>=0;i--){
		se.erase(i);
		//printf("%d\n", out);
	}
	fprintf(stdout, "Set size %lu, %d\n", se.size(), se.empty());
	
	map<int, int> m;
	for(int i=10;i>=0;i--){
		m.insert(pair<int, int>(i,100-i));
	}
	fprintf(stdout, "Map size %lu, %d\n", m.size(), m.empty());
	for(map<int, int>::iterator i = m.begin();i != m.end();i++){
		printf("%d %d\n", (*i).first, (*i).second);
	}
	for(map<int, int>::iterator i = m.find(5);i != m.end();i++){
		printf("%d %d\n", (*i).first, (*i).second);
	}
	for(int i=10;i>=0;i--){
		se.erase(i);
		//printf("%d\n", out);
	}
	fprintf(stdout, "Map size %lu, %d\n", se.size(), se.empty());

	priority_queue<int> pq;
	for(int i = 0; i < 10; i++) { 
		int in = rand();
		printf("%d\n",in);
		pq.push(in);
	}
	fprintf(stdout, "Priority_queue size %lu, %d\n", pq.size(), pq.empty());
	for(int i = 0; i < 10; i++) { 
		int out = pq.top();
		pq.pop();
		printf("%d\n",out);
	}
	return 0;
}
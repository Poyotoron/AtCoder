#include<bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	string s;
	unsigned long long int p = 0;
	vector<string> m, a, r, c, h;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> s;
		if (s[0] == 'M'){
			m.push_back(s);
		}else if (s[0] == 'A'){
			a.push_back(s);
		}else if (s[0] == 'R'){
			r.push_back(s);
		}else if (s[0] == 'C'){
			c.push_back(s);
		}else if (s[0] == 'H'){
			h.push_back(s);
		}
	}
	if (!m.empty() && !a.empty() && !r.empty()){
		p += m.size()*a.size()*r.size();
	}
	if (!m.empty() && !a.empty() && !c.empty()){
		p += m.size()*a.size()*c.size();
	}
	if (!m.empty() && !a.empty() && !h.empty()){
		p += m.size()*a.size()*h.size();
	}
	if (!m.empty() && !r.empty() && !c.empty()){
		p += m.size()*r.size()*c.size();
	}
	if (!m.empty() && !r.empty() && !h.empty()){
		p += m.size()*r.size()*h.size();
	}
	if (!m.empty() && !c.empty() && !h.empty()){
		p += m.size()*c.size()*h.size();
	}
	if (!a.empty() && !r.empty() && !c.empty()){
		p += a.size()*r.size()*c.size();
	}
	if (!a.empty() && !r.empty() && !h.empty()){
		p += a.size()*r.size()*h.size();
	}
	if (!a.empty() && !c.empty() && !h.empty()){
		p += a.size()*c.size()*h.size();
	}
	if (!r.empty() && !c.empty() && !h.empty()){
		p += r.size()*c.size()*h.size();
	}
	cout << p << "\n";
	return 0;
}
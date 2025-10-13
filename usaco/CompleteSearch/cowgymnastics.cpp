#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	freopen("gymnastics.in","r", stdin);
	int k, n;
	cin >> k >> n;
	map<int, vector<int>> pos;

	for(int i = 0;i < k;i++) {
		for(int j = 0;j < n;j++) {
			int num;
			cin >> num;
			
			pos[num].push_back(j);
		}
	}

	int cont = 0;
	for(int i = 1;i <= n;i++) {
		for(int j = i + 1;j <= n;j++) {
			int maior = 0, menor = 0;
			// cout << "Comparando " << i << " e " << j << " : ";
			for(int z = 0;z < k;z++) {
				// cout << pos[i][z] << " " << pos[j][z] << ", ";
				if(pos[i][z] < pos[j][z]) menor++;
				else if(pos[i][z] > pos[j][z]) maior++;
			}
			// cout << " | maior: " << maior << " menor: " << menor;
			// cout << "\n";

			if(maior == k || menor == k){
				cont++;
			}	

		}
	}


	/*
	 3 4
	 1 2 3 4
	 1 2 3 4
	 1 2 3 4
	 (1, 2), (1, 3), (1, 4), (2, 3), (2, 4), (3, 4)
	*/
	freopen("gymnastics.out", "w", stdout);
	cout << cont << "\n";
	return 0;
}

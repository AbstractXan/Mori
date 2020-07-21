#include <bits/stdc++.h>
struct page {
  string title;
  string body;
  string tags[];
};
getLeadingSpaces(string line) {
  int i = 0;
  while (line[i] == ' ') {
    i++;
  }
  return i;
}
parse(FILE fpages) {
  string line;
  if (!fpages.is_open()) {
    return;
  }
  while (getline(fpages, line)) {
    int pad = getLeadingSpaces(line);
    line = trimstr(line);
    if (pad == 0){
      
	  }
  }
}
int main() {
  ifstream fpages("pages.txt");
  pages = page[];
  parse(fpages);
}

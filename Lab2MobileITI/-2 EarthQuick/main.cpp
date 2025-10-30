#include <iostream>

using namespace std;

int main(){
  cout << "Enter Richter Scale Number\n";

  double rScale;
  cin >> rScale;

  if(rScale > 7.5) cout << "Catastrophe: most buildings destroyed";
  else if (rScale > 6.5 ) cout << "Disaster: houses and buildings may collapse";
  else if (rScale > 5.5) cout << "Serious damage : walls may crack or fall";
  else if (rScale > 5) cout << "Some damage";
  else cout << "Little or no damage";

  return 0;
}

#include <iostream>
#include <vector>

int main()
  {
  
  int turn = 1;
  bool possible = false;
  bool army1 = true;
  bool army2 = false;
  bool army3 = true;
  bool army4 = false;
  
  int tileW = 8;   // how big wide
  int tileH = 8;   // how big high
  
  //graphics/sprites go here
  
 std::vector<std::vector<bool> > map;
   for(int i=0; i<tileH; i++)
   {
    std::vector<bool> temp;
     for(int j=0; j<tileW; j++)
     {
      temp.push_back(false);
     }
     map.push_back(temp);
   }
  
    for(int i=0; i<map.size(); i++)
  {
    for(int j=0; j<map[i].size(); j++)
    {
      if(map[i][j] == true)
      {
        std::cout << '0';
      }
      else
      {
        std::cout << ' ';
      }
    }
    std::cout << std::endl;
  }
  
  }
  

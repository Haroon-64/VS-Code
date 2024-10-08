#include<iostream>
#include<vector>
void print(std::vector<int>& v);  // pass by reference to avoid copy 


int main()
{
   std::vector<int> v;
   v.reserve(4);   // optimize by pre allocating 4 instead of 1 by default
   v.push_back(1);   // v = {1}  
   v.push_back(2);   // v = {1, 2}
   v.push_back(3);   // v = {1, 2, 3}
   v.emplace_back(4);   // v = {1, 2, 3, 4}  // pass parameters instead of object to v
   std::cout<< v.size();  // 4

   v.erase(v.begin());   // v = {2, 3, 4}
   v.clear();            // v = {}
}

void print(std::vector<int>& v)
{
   for (int i = 0; i < v.size(); i++)
   {
      std::cout << v[i] << " ";
   }
   std::cout << std::endl;
}
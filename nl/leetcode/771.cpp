/*
#include <unordered_set>

//Brute Force
class Solution {
public:
  int numJewelsInStones(string J, string S) {
    int count = 0;
    std::string::iterator Jiter,Siter;
    for(Jiter=J.begin(),Jiter != J.end(),++Jiter)
      {
        for(Siter=S.begin(),Siter != S.end(),++Siter)
          {
            if (*Jiter == *Siter) {
              count++;
            }
          }
      }
    return count;
  }
};

//Hash Set
class Solution {
public:
  int numJewelsInStones(string J, string S) {
    int count = 0;
    std::unordered_set<char> Jset(J.begin(),J.end());
    for(std::string::iterator Siter = S.begin();Siter != S.end();++Siter)
      {
        if(Jset.count(*Siter))
          {
            count++;
              }
      }
    return count;
  }
};



*/
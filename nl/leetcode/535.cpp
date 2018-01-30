class Solution {
public:

  // Encodes a URL to a shortened URL.
  string encode(string longUrl) {
    auto id = urls.size()+1;
    urls[id] = longUrl;

    std::vector<char> key;
    while(id != 0) {
      key.emplace_back(chars[id%62]);
      id /= 62;
    }
    
  }

  // Decodes a shortened URL to its original URL.
  string decode(string shortUrl) {
        
  }
private:
  std::string baseUrl = "http://tinyurl.com";
  std::map<int,std::string> urls;
  std::map<string,int> charToIntMap;
  std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

/*
class Solution {
public:

Solution(){
for(std::string::size_type i = 0; i < chars.size();++i) {
charToValue[chars[i]] = i;
}
}
// Encodes a URL to a shortened URL.
string encode(string longUrl) {
auto id = urls.size()+1;
urls[id] = longUrl;

std::vector<char> key;
auto temp = id;
while(temp != 0) {
key.emplace_back(chars[temp%base]);
temp /= base;
}

return baseUrl + std::string(key.rbegin(), key.rend());
}

// Decodes a shortened URL to its original URL.
string decode(string shortUrl) {
std::string key = shortUrl.substr(baseUrl.size(), shortUrl.size()-baseUrl.size());
int keyLen = key.length();
int id = 0;
for(auto n = 0;n < keyLen;++n)
{
id += charToValue[key[n]]*std::pow(base,keyLen-n-1);
}
return urls[id];
}
private:
std::string baseUrl = "http://tinyurl.com/";
std::map<int,std::string> urls;
std::map<char,int> charToValue;
const std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const int base = chars.length();
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

*/
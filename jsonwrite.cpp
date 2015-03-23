#include<json/json.h>  
  
#include<iostream>  
  
using namespace std;  
  
	//g++ jsonwrite.cpp -ljson
int main(int argc, char** argv) //http://blog.csdn.net/guoyilongedu/article/details/41181635
  
{  
  
Json::Value root;  
  
Json::FastWriter fast;  
  
root["ModuleType"]= Json::Value("你好");  
  
root["ModuleCode"]= Json::Value("22");  
  
root["ModuleDesc"]= Json::Value("33");  
  
root["DateTime"]= Json::Value("44");  
  
root["LogType"]= Json::Value("55");  
  
cout<<fast.write(root)<<endl;  
  
return 0;  
  
}

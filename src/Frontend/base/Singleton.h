#pragma once

template<typename T>
class Singleton
{
public:
	static T * sharedMgr(){
		return instance();
	}
	static T * instance(){
		static T t;
		return &t;
	}
public:
	Singleton(void){};
	~Singleton(void){};
};
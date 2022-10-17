#pragma once
class stapel
{
	bool empty{true};
public:
	bool is_empty()
	{
		return empty;
	}

	void push(int value)
	{
		empty = false;
	}
};


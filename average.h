class average{
public:
	average();
	void add_value(float val);
	float get();
	void reset();
private:
	long double avg;
	unsigned long long count;
};

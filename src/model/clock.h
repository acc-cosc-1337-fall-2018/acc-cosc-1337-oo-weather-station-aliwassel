#ifndef CLOCK_H //if not define
#define CLOCK_H // define

class Clock 
{
public:
    int get_hours(long long seconds);
	int get_minutes(long long seconds);
	int get_seconds(long long seconds);
	void display_time();
	
};

#endif // CLOCK_H
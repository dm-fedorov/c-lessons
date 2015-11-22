#include <stdio.h>
#include <time.h>

/***

The <time.h> header declares the structure tm, which includes at least the following members:

struct tm {
	int    tm_sec;   // seconds [0,59]-!
	int    tm_min;   // minutes [0,59]
	int    tm_hour;  // hour [0,23]
	int    tm_mday;  // day of month [1,31]
	int    tm_mon;   // month of year [0,11]
	int    tm_year;  // years since 1900
	int    tm_wday;  // day of week [0,6] (Sunday = 0)
	int    tm_yday;  // day of year [0,365]
	int    tm_isdst; // daylight savings flag
};

// https://www-s.acm.illinois.edu/webmonkeys/book/c_guide/2.15.html

***/

int main() {
	long int seconds_since_epoch;
	struct tm current_time, *time_ptr;
	int hour, minute, second, day, month, year;

	seconds_since_epoch = time(0); // pass time a null pointer as argument
	printf("time() - seconds since epoch: %ld\n", seconds_since_epoch);
	// time() возвращает кол-во секунд с 1 января 1970 года
	time_ptr = &current_time;  // set time_ptr to the address of
                              // the current_time struct
	localtime_r(&seconds_since_epoch, time_ptr);

	// three different ways to access struct elements
	hour = current_time.tm_hour;  // direct access
	minute = time_ptr->tm_min;    // access via pointer
	second = *((int *) time_ptr); // hacky pointer access

	printf("Current time is: %02d:%02d:%02d\n", hour, minute, second);
}

/***

time() - seconds since epoch: 1448201855
Current time is: 17:17:35

***/
	
	

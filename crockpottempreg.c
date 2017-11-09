#include <squash.h>
#include <quinoa.h>
#include <crockpot.h>
#include <chicken.h>


/*
 * arguments are quinoa and squash and pointers to temperature and time.
 * function will adjust time and temperature based on quinoa and squash. 
 * time is in minutes. Time is infinite on warm. Function will always 
 * shred chicken, regardless of success or failure.
 */
 
int final_adjust_temperature(int quinoa, int squash, int *temperature, int *time, int *chicken)
{
	shred(chicken);
	if(quinoa==VISIBLE) {
		*time=60;
		if(squash!=TENDER) {
			*temperature=HIGH;
			return(SUCCESS);
		} else {
			*temperature=LOW;
			return(SUCCESS);
		}
	} else if(quinoa==DISINTEGRATED && squash==TENDER) {
		*temperature=WARM;
		return(SUCCESS);
	} else {
		return(FAILURE);
	}
}
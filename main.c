#include <inttypes.h>
#include <stdio.h>

int primesList[40] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149 };

uint64_t solve(uint64_t n) {
	uint64_t prevres = 1;
	uint64_t res = 1;
	for (int i = 0; res < n; i++) {
		prevres = res;
		res *= primesList[i];
	}
	return prevres;
}

int main()
{
    int n = 1000000;

    uint64_t res = solve(n);

    printf("%" PRIu64 "\n", res);
	
    return 0;
}


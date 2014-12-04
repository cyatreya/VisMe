#ifndef RETINEX_FILTER_9x9_H
#define RETINEX_FILTER_9x9_H

//These are from the Matlab implementation (now they do not seem that "intelligent" might really
// be a bug but since these work on VisMe paper well use them here too... TODO check what is ok)

float H1[9][9] = {
{0.011842,0.012028,0.012162,0.012243,0.012271,0.012243,0.012162,0.012028,0.011842},
{0.012028,0.012216,0.012353,0.012435,0.012463,0.012435,0.012353,0.012216,0.012028},
{0.012162,0.012353,0.012491,0.012574,0.012602,0.012574,0.012491,0.012353,0.012162},
{0.012243,0.012435,0.012574,0.012658,0.012687,0.012658,0.012574,0.012435,0.012243},
{0.012271,0.012463,0.012602,0.012687,0.012715,0.012687,0.012602,0.012463,0.012271},
{0.012243,0.012435,0.012574,0.012658,0.012687,0.012658,0.012574,0.012435,0.012243},
{0.012162,0.012353,0.012491,0.012574,0.012602,0.012574,0.012491,0.012353,0.012162},
{0.012028,0.012216,0.012353,0.012435,0.012463,0.012435,0.012353,0.012216,0.012028},
{0.011842,0.012028,0.012162,0.012243,0.012271,0.012243,0.012162,0.012028,0.011842},
};

float H2[9][9] = {
{0.012328,0.012334,0.012339,0.012342,0.012343,0.012342,0.012339,0.012334,0.012328},
{0.012334,0.012341,0.012346,0.012349,0.012350,0.012349,0.012346,0.012341,0.012334},
{0.012339,0.012346,0.012351,0.012354,0.012355,0.012354,0.012351,0.012346,0.012339},
{0.012342,0.012349,0.012354,0.012357,0.012358,0.012357,0.012354,0.012349,0.012342},
{0.012343,0.012350,0.012355,0.012358,0.012359,0.012358,0.012355,0.012350,0.012343},
{0.012342,0.012349,0.012354,0.012357,0.012358,0.012357,0.012354,0.012349,0.012342},
{0.012339,0.012346,0.012351,0.012354,0.012355,0.012354,0.012351,0.012346,0.012339},
{0.012334,0.012341,0.012346,0.012349,0.012350,0.012349,0.012346,0.012341,0.012334},
{0.012328,0.012334,0.012339,0.012342,0.012343,0.012342,0.012339,0.012334,0.012328},
};

float H3[9][9] = {
{0.012344,0.012345,0.012345,0.012345,0.012345,0.012345,0.012345,0.012345,0.012344},
{0.012345,0.012345,0.012346,0.012346,0.012346,0.012346,0.012346,0.012345,0.012345},
{0.012345,0.012346,0.012346,0.012347,0.012347,0.012347,0.012346,0.012346,0.012345},
{0.012345,0.012346,0.012347,0.012347,0.012347,0.012347,0.012347,0.012346,0.012345},
{0.012345,0.012346,0.012347,0.012347,0.012347,0.012347,0.012347,0.012346,0.012345},
{0.012345,0.012346,0.012347,0.012347,0.012347,0.012347,0.012347,0.012346,0.012345},
{0.012345,0.012346,0.012346,0.012347,0.012347,0.012347,0.012346,0.012346,0.012345},
{0.012345,0.012345,0.012346,0.012346,0.012346,0.012346,0.012346,0.012345,0.012345},
{0.012344,0.012345,0.012345,0.012345,0.012345,0.012345,0.012345,0.012345,0.012344},
};

#endif
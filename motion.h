#ifndef __MOTION_H_
#define __MOTION_H_
/* ==========================================================================
 
   COMPONENT:        Global motion variable definitions
   AUTHOR:           Ariel Vernaza
   DESCRIPTION:      This component defines the motion pages and related
                     global variables. Auto-generated from the *.mtn file.
 
========================================================================== */
 
#include <stdint.h>
#include <avr/pgmspace.h>
#include "global.h"
 
// Array showing which Dynamixel servos are enabled in motion file 
const uint8 AX12_ENABLED[MAX_AX12_SERVOS] = {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0}; 

struct // Bow 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[6][6]; 
   const uint16 PauseTime[6]; 
   const uint16 PlayTime[6]; 
} MotionPage1 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 10, 32, 6, 
{{1406501143,-1173458383,1481961980,-2134189404,1184311913,1703928323},
 {1209465112,-1178176719,1481961980,-2134189404,1184311913,1703928323},
 {2026955032,-1178176719,1481961980,-2134701154,1184311843,1997529603},
 {1209465112,-1178176719,1481961980,-2134189404,1184311913,1703928323},
 {1406501143,-1173458383,1481961980,-2134189404,1184311913,1703928323},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,496,0,0,0}, {296,496,1000,1000,296,400} 
}; 

struct // Bravo 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage2 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
3, 0, 1, 15, 32, 5, 
{{-939067019,-1567716818,1481961980,-2133882354,1184311973,1452270083},
 {-939067169,-938571218,1481961980,-2133882354,1184311973,1452270083},
 {-939067019,-1567716818,1481961980,-2133882354,1184311973,1452270083},
 {-939067169,-938571218,1481961980,-2133882354,1184311973,1452270083},
 {-939067019,-1567716818,1481961980,-2133882354,1184311973,1452270083}},
{0,0,0,0,0}, {2000,496,496,496,496} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage3 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
4, 0, 1, 15, 32, 5, 
{{-939067019,-1567716818,1767324143,-2112818638,1385697955,1477394946},
 {-939067169,-938571218,1767324143,-2112818638,1385697955,1477394946},
 {-939067019,-1567716818,1767324143,-2112818638,1385697955,1477394946},
 {-939067169,-938571218,1767324143,-2112818638,1385697955,1477394946},
 {-939067019,-1567716818,1767324143,-2112818638,1385697955,1477394946}},
{0,0,0,0,0}, {1000,496,496,496,496} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage4 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 7, 
{{-939067019,-1567716818,1175638519,-2079456799,852863685,1460683287},
 {-939067169,-938571218,1175638519,-2079456799,852863685,1460683287},
 {-939067019,-1567716818,1175638519,-2079456799,852863685,1460683287},
 {-939067169,-938571218,1175638519,-2079456799,852863685,1460683287},
 {-939067019,-1567716818,1175638519,-2079456799,852863685,1460683287},
 {1767035407,2081311286,1481961980,-2133882354,1184311973,1452270083},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {1000,496,496,496,496,1496,2000} 
}; 

struct // Rap chest 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage5 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
6, 0, 1, 15, 32, 5, 
{{-1978746456,-1782252704,1481961980,-2134025644,1184311943,1578099203},
 {-1978746735,-1782254752,1481961980,-2134025644,1184311943,1578099203},
 {-1978746456,-1782252704,1481961980,-2134025644,1184311943,1578099203},
 {-1978746456,-528155807,1481961980,-2134025644,1184311943,1578099203},
 {-1978746456,-1782252704,1481961980,-2134025644,1184311943,1578099203}},
{0,0,0,0,0}, {1496,400,200,400,200} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage6 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 5, 
{{-1978746735,-1782254752,1481961980,-2134025644,1184311943,1578099203},
 {-1978746456,-1782252704,1481961980,-2134025644,1184311943,1578099203},
 {-1978746456,-528155807,1481961980,-2134025644,1184311943,1578099203},
 {-1978746456,-1782252704,1481961980,-2134025644,1184311943,1578099203},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0}, {400,200,400,200,1496} 
}; 

struct // Scratch head 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage7 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 8, 32, 5, 
{{-862412538,-1173853647,1481961980,-2134291754,1184311893,1787814403},
 {-925327031,-1174080975,1481961980,-2134291754,1184311893,1787814403},
 {-862412538,-1173853647,1481961980,-2134291754,1184311893,1787814403},
 {-925327031,-1174080975,1481961980,-2134291754,1184311893,1787814403},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0}, {1000,496,496,496,1000} 
}; 

struct // Push up 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[6][6]; 
   const uint16 PauseTime[6]; 
   const uint16 PlayTime[6]; 
} MotionPage8 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
9, 0, 1, 15, 32, 6, 
{{1909571847,-1106343378,1486154240,2143497114,660279926,1649410559},
 {-2091937558,-984630776,1486154240,2143484832,1029198452,1657799137},
 {-2079360790,-984630776,1486154240,2143447968,119034706,1657799137},
 {-2079360790,-984630776,1486154240,2143976352,2086163053,1657799167},
 {-2079360790,-984630776,1486154240,2143976391,2086648429,760218111},
 {1968263402,-984630776,1486154240,2144303632,2068878032,1271923199}},
{0,0,0,0,0,0}, {1496,1000,1000,1000,1000,1000} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[2][6]; 
   const uint16 PauseTime[2]; 
   const uint16 PlayTime[2]; 
} MotionPage9 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
10, 0, 3, 15, 32, 2, 
{{-2117090854,-1991959716,1486154240,2144303632,2068878076,1087373823},
 {1968263402,-984630776,1486154240,2144303632,2068878032,1271923199}},
{0,0}, {1000,1000} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage10 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 7, 
{{1968263402,-984630776,1486154240,2144303632,2068878032,1271923199},
 {-2079360790,-984630776,1486154240,2143976391,2086648429,760218111},
 {-2079360790,-984630776,1486154240,2143976352,2086163053,1657799137},
 {-2079360790,-984630776,1486154240,2143566752,366498623,1657799137},
 {1993416938,-984630776,1486154240,2143484832,1154966092,1825571327},
 {1532268781,-997197312,1486154240,2143454127,287189657,1502609919},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {72,1000,600,1000,600,1496,1496} 
}; 

struct // Hand standing 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[6][6]; 
   const uint16 PauseTime[6]; 
   const uint16 PlayTime[6]; 
} MotionPage11 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
12, 0, 1, 10, 32, 6, 
{{-1337331437,-1156726201,1481961971,-2097034298,1549038049,-2020617723},
 {-800722447,-2088324311,1481961970,-2092827712,-2096129513,2047846922},
 {-821683713,-2146432514,1481961970,-2092827712,-2100321769,2047846922},
 {1377155580,-2133818897,1481961970,-2092827712,-2100321769,2047846922},
 {-2146436814,-1286618617,1481961970,-2092827712,-2100321769,2047846922},
 {-2062591694,-1286618617,1481961970,-2091705956,1896995368,1976543754}},
{0,0,0,0,0,0}, {1000,1000,496,496,1000,2040} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[2][6]; 
   const uint16 PauseTime[2]; 
   const uint16 PlayTime[2]; 
} MotionPage12 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
13, 0, 2, 10, 32, 2, 
{{-2062591694,-1286618617,1481961970,-2091705956,1896995368,1976543754},
 {-2062591694,-1286618617,1481961720,-1043129956,1896995368,1976543754}},
{496,496}, {1000,1000} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage13 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 5, 
{{-2062591694,-1286618617,1481961970,-2091705956,1896995368,1976543754},
 {-2146436814,-1286618617,1481961970,-2092827712,-2100321769,2047846922},
 {-1731403196,1858394980,1481961970,-2092844088,509358915,789561863},
 {1653844232,-1110560199,1486154240,2143454127,161401537,1334837759},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0}, {2000,2000,1000,1000,2000} 
}; 

struct // R blocking 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage14 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
14, 15, 1, 12, 4, 1, 
{{1192886657,-1311825398,1477767546,-2109142497,336716545,1880083079}},
{400}, {600} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[2][6]; 
   const uint16 PauseTime[2]; 
   const uint16 PlayTime[2]; 
} MotionPage15 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 4, 2, 
{{911814964,-1294939674,1481961980,-2134340882,270400239,1141891587},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{200,0}, {1000,1000} 
}; 

struct // L blocking 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage16 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
16, 17, 1, 12, 4, 1, 
{{802625848,-1617974757,1477767670,-1588657442,1893562943,1066123782}},
{400}, {600} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[2][6]; 
   const uint16 PauseTime[2]; 
   const uint16 PlayTime[2]; 
} MotionPage17 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 4, 2, 
{{911814964,-1294939674,1481961980,-2134340882,270400239,1141891587},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{200,0}, {1000,1000} 
}; 

struct // L kick 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[6][6]; 
   const uint16 PauseTime[6]; 
   const uint16 PlayTime[6]; 
} MotionPage18 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 4, 6, 
{{987275543,-1173458383,1486146077,-1853164903,1205244528,1691474501},
 {987275543,-1173458383,1486154250,-1769278715,1205682800,1255268935},
 {987275543,-1173458383,1486154250,-1769176285,1204822640,-1773018553},
 {987275543,-1173458383,1486154250,-1769278715,1205682800,1255268935},
 {987275543,-1173458383,1486146077,-1853164903,1205244528,1691474501},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,400,0,0,0}, {1000,400,200,600,1000,1000} 
}; 

struct // R kick 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[6][6]; 
   const uint16 PauseTime[6]; 
   const uint16 PlayTime[6]; 
} MotionPage19 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 4, 6, 
{{987275543,-1173458383,1502931385,2022388385,1263993452,1674432959},
 {987275543,-1173458383,1486154149,2143802017,366412500,1674428862},
 {987275543,-1173458383,1486154149,2143740527,2128019878,1674428862},
 {987275543,-1173458383,1486154149,2143802017,366412500,1674428862},
 {987275543,-1173458383,1502931385,2064331425,1263993452,1674432959},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,400,0,0,0}, {1000,400,200,600,1000,1000} 
}; 

struct // R attack 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[4][6]; 
   const uint16 PauseTime[4]; 
   const uint16 PlayTime[4]; 
} MotionPage20 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 4, 
{{1947400521,-1111151944,1507129816,-1802933596,878127749,1712304652},
 {-2083538428,-711969959,1481963951,-1224173016,135422705,2030942937},
 {1188510001,-1265759680,1481964027,-2130150681,144630514,1120918020},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,296,200,0}, {400,96,1000,1496} 
}; 

struct // L attack 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[4][6]; 
   const uint16 PauseTime[4]; 
   const uint16 PlayTime[4]; 
} MotionPage21 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 4, 
{{1745975560,-1383449766,1477755309,-1983194414,1184461415,1586469385},
 {-2112913239,2126852601,1477767459,-1810973972,1826552347,1133064776},
 {1188510001,-1265759680,1481964027,-2130150681,144630514,1120918020},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,296,200,0}, {400,96,1000,1496} 
}; 

struct // F attack 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage22 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 15, 32, 7, 
{{1784191609,-1182457294,1481964028,-2096440668,1184311913,1712316940},
 {1783822969,-2147147264,1452603882,-2096227676,1972841073,1460560316},
 {-1441519465,-1643224529,1729321465,-1950250582,357599813,1112375824},
 {1917962531,-1508984294,1729321465,-1950090463,442178295,814580270},
 {-1899093466,1984224100,1481961970,-2092844088,509358875,957334023},
 {1653844232,-1110560208,1486154240,2143454127,161401537,1334837759},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,600,0,0,0,0}, {200,200,200,400,1000,1000,1000} 
}; 

struct // Defence 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage23 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
23, 24, 1, 10, 32, 1, 
{{765085990,-1236315627,1481961980,-2134351117,299746033,1133502979}},
{0}, {400} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[2][6]; 
   const uint16 PauseTime[2]; 
   const uint16 PlayTime[2]; 
} MotionPage24 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 8, 32, 2, 
{{765085990,-1236315627,1486162427,-2146919700,521935558,1313856000},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0}, {496,496} 
}; 

struct // Sit down 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage25 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 10, 32, 1, 
{{765085990,-1236315627,1481961980,-2134351117,299746033,1133502979}},
{0}, {600} 
}; 

struct // Stand up 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[2][6]; 
   const uint16 PauseTime[2]; 
   const uint16 PlayTime[2]; 
} MotionPage26 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 8, 32, 2, 
{{765085990,-1236315627,1486162427,-2146919700,521935558,1313856000},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0}, {496,496} 
}; 

struct // F getup 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage27 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 16, 32, 5, 
{{983083517,-2138148303,1481961980,-2134191451,1184311913,1703928323},
 {1515500016,-2083542518,1481961980,-2134191451,1184311913,1703928323},
 {-1731403196,1858394980,1481961970,-2092844088,509358915,789561863},
 {1653844232,-1110560199,1486154240,2143454127,161401537,1334837759},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0}, {200,200,1000,1000,2000} 
}; 

struct // B getup   
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[5][6]; 
   const uint16 PauseTime[5]; 
   const uint16 PlayTime[5]; 
} MotionPage28 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 10, 32, 5, 
{{1779612278,1649408512,1481961980,-2133673560,802816539,2031084035},
 {-2008091902,1062226422,1481961980,-2133671513,467436316,953147907},
 {903430664,2110802422,1481961980,-2133671513,760894236,995090947},
 {735740241,-1416656370,1481961980,-2134142323,760894136,1372578307},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0}, {496,496,1000,1000,1000} 
}; 

struct // Clap ready 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage29 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 5, 32, 1, 
{{-1203179219,-1265806763,1486154228,-2100632925,1188504158,1750049291}},
{0}, {1000} 
}; 

struct // Clapping 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[3][6]; 
   const uint16 PauseTime[3]; 
   const uint16 PlayTime[3]; 
} MotionPage30 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 20, 32, 3, 
{{-1203179219,-1265806763,1486154228,-2100632925,1188504158,1750049291},
 {-1203179312,-875857264,1486154228,-2100632925,1188504158,1750049291},
 {-1203179219,-1265806763,1486154228,-2100632925,1188504158,1750049291}},
{0,96,0}, {72,200,1000} 
}; 

struct // Walk Ready 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage31 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 10, 5, 1, 
{{987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0}, {1000} 
}; 

struct // F_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage32 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
33, 33, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage33 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
38, 42, 1, 21, 5, 7, 
{{978882839,-1173458383,1502925303,-1966404907,1121532545,1620093472},
 {1041828119,-1173458383,1502925321,-2012534066,1108863624,1766890013},
 {1104773399,-1173458383,1502925328,-2041898295,1087849100,1833992729},
 {1159325975,-1173458383,1502925324,-2058681650,1058503311,1821401621},
 {1205485847,-1173458383,1502925319,-2079651120,1041744532,1792031248},
 {1239056663,-1173458383,1502925313,-2104808753,1033374362,1754270218},
 {1264234775,-1173458383,1502925307,-2129960244,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // F_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage34 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
35, 35, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage35 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
36, 40, 1, 21, 5, 7, 
{{991471895,-1173458383,1502925268,-2113318242,907518589,1603205610},
 {928526615,-1173458383,1502925279,2106165914,1083685466,1573851628},
 {865581335,-1173458383,1502925286,2076816028,1171776074,1557082607},
 {811028759,-1173458383,1502925290,2093583007,1142430285,1544507891},
 {764868887,-1173458383,1502925295,2114550430,1104689748,1523546616},
 {731298071,-1173458383,1502925301,2139718298,1066945117,1498393086},
 {706119959,-1173458383,1502925307,-2130077037,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // F_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage36 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
37, 37, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925313,-2104921452,1033374317,1460668938},
 {697727255,-1173458383,1502925318,-2083937653,1041746545,1460679183},
 {701923607,-1173458383,1502925319,-2058759542,1058523764,1452300820},
 {718709015,-1173458383,1502925313,-2025190762,1079530101,1431337497},
 {752279831,-1173458383,1502925304,-1987429718,1100548726,1418760733},
 {794243351,-1173458383,1502925296,-1962253632,1117364855,1435542047},
 {844599575,-1173458383,1502925293,-1953858860,1121573497,1485875744}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage37 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
38, 42, 1, 27, 5, 7, 
{{903348503,-1173458383,1502925296,-1962243360,1117364860,1569759775},
 {966293783,-1173458383,1502925304,-1987407132,1100548737,1662030365},
 {1033435415,-1173458383,1502925313,-2025153823,1079530119,1745910297},
 {1092184343,-1173458383,1502925319,-2058706212,1058523790,1796233748},
 {1150933271,-1173458383,1502925318,-2083865894,1041746580,1792029199},
 {1197093143,-1173458383,1502925313,-2104829222,1033374362,1754270218},
 {1234860311,-1173458383,1502925307,-2129980714,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // F_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage38 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
39, 39, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925301,2139839185,1066945187,1687136766},
 {1272627479,-1173458383,1502925296,2118886091,1100495523,1670349305},
 {1268431127,-1173458383,1502925290,2114693829,1100487333,1657756148},
 {1251645719,-1173458383,1502925282,2139835070,1029173930,1653551600},
 {1218074903,-1173458383,1502925273,-2117424456,932694701,1649349101},
 {1176111383,-1173458383,1502925267,-2083915085,852994729,1645150699},
 {1125755159,-1173458383,1502925265,-2071373136,823632541,1636760042}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage39 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
36, 40, 1, 27, 5, 7, 
{{1067006231,-1173458383,1502925267,-2083980626,852994697,1624179179},
 {1004060951,-1173458383,1502925273,-2117543251,932694643,1603211757},
 {936919319,-1173458383,1502925282,2139681452,1029173855,1578054128},
 {878170391,-1173458383,1502925290,2114525867,1100487251,1548704244},
 {819421463,-1173458383,1502925296,2118724264,1100495444,1523548665},
 {773261591,-1173458383,1502925301,2139695780,1066945117,1498393086},
 {735494423,-1173458383,1502925307,-2130097507,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // F_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage40 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
41, 41, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925313,-2104900982,1033374317,1464863242},
 {706119959,-1173458383,1502925319,-2079722879,1041744497,1460681232},
 {722905367,-1173458383,1502925324,-2058741126,1058503282,1469080085},
 {756476183,-1173458383,1502925328,-2041957769,1087849071,1490059801},
 {802636055,-1173458383,1502925321,-2012589433,1108863597,1469094429},
 {857188631,-1173458383,1502925303,-1966437718,1121532529,1439738400},
 {915937559,-1173458383,1502925294,-1945449783,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage41 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // F_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage42 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
43, 43, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925301,2139859655,1066945186,1687136766},
 {1264234775,-1173458383,1502925295,2114712257,1104689827,1670347256},
 {1247449367,-1173458383,1502925290,2093755068,1142430369,1666142707},
 {1213878551,-1173458383,1502925286,2076983993,1171776156,1678717423},
 {1167718679,-1173458383,1502925279,2106311349,1083685537,1687097836},
 {1113166103,-1173458383,1502925268,-2113230162,907518632,1670314474},
 {1054417175,-1173458383,1502925263,-2075544922,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage43 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // B_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage44 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
45, 45, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage45 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
50, 54, 1, 21, 5, 7, 
{{991471895,-1173458383,1502925303,-1966437718,1121532529,1439738400},
 {928526615,-1173458383,1502925321,-2012589433,1108863597,1469094429},
 {865581335,-1173458383,1502925328,-2041957769,1087849071,1490059801},
 {811028759,-1173458383,1502925324,-2058741126,1058503282,1469080085},
 {764868887,-1173458383,1502925319,-2079722879,1041744497,1460681232},
 {731298071,-1173458383,1502925313,-2104900982,1033374317,1464863242},
 {706119959,-1173458383,1502925307,-2130077037,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // B_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage46 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
47, 47, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage47 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
48, 52, 1, 21, 5, 7, 
{{978882839,-1173458383,1502925268,-2113230162,907518632,1670314474},
 {1041828119,-1173458383,1502925279,2106311349,1083685537,1687097836},
 {1104773399,-1173458383,1502925286,2076983993,1171776156,1678717423},
 {1159325975,-1173458383,1502925290,2093755068,1142430369,1666142707},
 {1205485847,-1173458383,1502925295,2114712257,1104689827,1670347256},
 {1239056663,-1173458383,1502925301,2139859655,1066945186,1687136766},
 {1264234775,-1173458383,1502925307,-2129960244,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // B_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage48 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
49, 49, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925313,-2108982586,1033374362,1754270217},
 {1272627479,-1173458383,1502925318,-2088021306,1041746580,1792029198},
 {1268431127,-1173458383,1502925319,-2062859576,1054331534,1796231699},
 {1251645719,-1173458383,1502925312,-2029307187,1079532168,1745908247},
 {1218074903,-1173458383,1502925303,-1995754799,1100550786,1662028315},
 {1176111383,-1173458383,1502925294,-1970593075,1113172605,1569757726},
 {1125755159,-1173458383,1502925291,-1958012224,1121575545,1485871647}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage49 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
50, 54, 1, 27, 5, 7, 
{{1067006231,-1173458383,1502925294,-1970603348,1113172600,1431345694},
 {1004060951,-1173458383,1502925303,-1995779434,1100550774,1414564379},
 {936919319,-1173458383,1502925312,-2029346174,1079532149,1431335447},
 {878170391,-1173458383,1502925319,-2062912906,1054331508,1452298771},
 {819421463,-1173458383,1502925318,-2088091017,1041746546,1460679182},
 {773261591,-1173458383,1502925313,-2109074816,1033374317,1460668937},
 {735494423,-1173458383,1502925307,-2130056567,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // B_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage50 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
51, 51, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925302,2139736720,1066945117,1498395134},
 {697727255,-1173458383,1502925297,2118765205,1100495444,1523550713},
 {701923607,-1173458383,1502925291,2114566807,1096294995,1548706293},
 {718709015,-1173458383,1502925283,2143916696,1024979551,1573863921},
 {752279831,-1173458383,1502925275,-2113310055,928500339,1599021550},
 {794243351,-1173458383,1502925269,-2075553125,848802441,1619986924},
 {844599575,-1173458383,1502925266,-2062943588,819438237,1636762092}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage51 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
48, 52, 1, 27, 5, 7, 
{{903348503,-1173458383,1502925269,-2075485536,848802474,1640958444},
 {966293783,-1173458383,1502925275,-2113189211,928500398,1649353198},
 {1033435415,-1173458383,1502925283,2144070315,1024979626,1653555697},
 {1092184343,-1173458383,1502925291,2114734769,1096295077,1657758197},
 {1150933271,-1173458383,1502925297,2118927031,1100495523,1666157049},
 {1197093143,-1173458383,1502925302,2139880125,1066945187,1687138814},
 {1234860311,-1173458383,1502925307,-2129939774,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // B_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage52 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
53, 53, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925313,-2104808753,1033374362,1754270218},
 {1264234775,-1173458383,1502925319,-2079651120,1041744532,1792031248},
 {1247449367,-1173458383,1502925324,-2058681650,1058503311,1821401621},
 {1213878551,-1173458383,1502925328,-2041898295,1087849100,1833992729},
 {1167718679,-1173458383,1502925321,-2012534066,1108863624,1766890013},
 {1113166103,-1173458383,1502925303,-1966404907,1121532545,1620093472},
 {1054417175,-1173458383,1502925294,-1945449783,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage53 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // B_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage54 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
55, 55, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925301,2139718298,1066945117,1498393086},
 {706119959,-1173458383,1502925295,2114550430,1104689748,1523546616},
 {722905367,-1173458383,1502925290,2093583007,1142430285,1544507891},
 {756476183,-1173458383,1502925286,2076816028,1171776074,1557082607},
 {802636055,-1173458383,1502925279,2106165914,1083685466,1573851628},
 {857188631,-1173458383,1502925268,-2113318242,907518589,1603205610},
 {915937559,-1173458383,1502925263,-2075544922,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage55 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LT_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage56 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
57, 57, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage57 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
62, 66, 1, 21, 5, 7, 
{{987275543,-1173458383,1695767031,-1970595132,1117346431,1552984607},
 {987275543,-1173458383,1741881865,-2016736588,1100501633,1624283675},
 {987275543,-1173458383,1758650896,-2046102868,1075305092,1653637656},
 {987275543,-1173458383,1758650892,-2062890321,1050153606,1632657940},
 {987275543,-1173458383,1758650887,-2083870032,1029194375,1615870479},
 {987275543,-1173458383,1758650881,-2109044047,1012427399,1599080969},
 {987275543,-1173458383,1758650875,-2130019664,1008237189,1586485764}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LT_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage58 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
59, 59, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage59 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
60, 60, 1, 21, 5, 7, 
{{987275543,-1173458383,1565807060,-2113273184,890743442,1628371434},
 {987275543,-1173458383,1519692255,2106233507,1029163651,1624183276},
 {987275543,-1173458383,1502925286,2076889767,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093660842,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114626220,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139785902,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130017617,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LT_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage60 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
61, 61, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925314,-2104839511,1012427398,1582305802},
 {987275543,-1173458383,1502925320,-2079669594,1029194372,1594901008},
 {987275543,-1173458383,1507115529,-2050303321,1050167938,1590716950},
 {987275543,-1173458383,1523884548,-2012548434,1079554687,1565559323},
 {987275543,-1173458383,1553230330,-1978985800,1104755325,1536207391},
 {987275543,-1173458383,1590960626,-1949619520,1121561212,1515239970},
 {987275543,-1173458383,1628690927,-1941226811,1129960060,1515239971}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage61 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
62, 66, 1, 27, 5, 7, 
{{987275543,-1173458383,1670613490,-1953807676,1121561214,1532015138},
 {987275543,-1173458383,1704151546,-1983171906,1104755329,1561371166},
 {987275543,-1173458383,1733497347,-2016732491,1079554691,1594919450},
 {987275543,-1173458383,1750266377,-2054491474,1050167942,1620075029},
 {987275543,-1173458383,1758650887,-2083859797,1029194375,1615870479},
 {987275543,-1173458383,1758650881,-2104837460,1012427399,1599080970},
 {987275543,-1173458383,1758650875,-2130009429,1008237189,1586485764}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LT_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage62 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
63, 63, 1, 27, 5, 7, 
{{987275543,-1173458383,1758650869,2139789992,1016623746,1578084862},
 {987275543,-1173458383,1758650864,2114626213,1037587070,1578074616},
 {987275543,-1173458383,1750266345,2106231457,1033382525,1582256627},
 {987275543,-1173458383,1733497312,2131382940,978842243,1594829294},
 {987275543,-1173458383,1704151512,-2125854055,907526795,1603209707},
 {987275543,-1173458383,1670613457,-2092311913,848798354,1615784425},
 {987275543,-1173458383,1628690894,-2079731048,827822742,1624170984}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage63 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
60, 60, 1, 27, 5, 7, 
{{987275543,-1173458383,1590960592,-2092303718,848798358,1624173032},
 {987275543,-1173458383,1553230295,-2125841763,907526801,1619984874},
 {987275543,-1173458383,1523884511,2127202977,978842250,1611604462},
 {987275543,-1173458383,1507115496,2106245796,1033382532,1599031794},
 {987275543,-1173458383,1502925295,2110442151,1037587075,1590655479},
 {987275543,-1173458383,1502925301,2135601833,1016623750,1582279165},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LT_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage64 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
65, 65, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104849746,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079679829,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058704216,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041920859,1075305087,1620083225},
 {987275543,-1173458383,1519692297,-2012552531,1100501628,1594923549},
 {987275543,-1173458383,1565807095,-1966409025,1117346427,1532013088},
 {987275543,-1173458383,1628690926,-1949625654,1125765756,1511043617}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage65 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LT_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage66 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
67, 67, 1, 21, 5, 7, 
{{987275543,-1173458383,1758650870,2139779758,1016623746,1578086910},
 {987275543,-1173458383,1758650864,2114615978,1037587070,1578074616},
 {987275543,-1173458383,1758650859,2093646502,1062742650,1582258675},
 {987275543,-1173458383,1758650855,2076875425,1092090485,1590639087},
 {987275543,-1173458383,1741881824,2106219166,1029163644,1603215852},
 {987275543,-1173458383,1695766997,-2113283428,890743437,1611596266},
 {987275543,-1173458383,1628690896,-2075546979,827824791,1624175081}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage67 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RT_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage68 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
69, 69, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage69 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
74, 74, 1, 21, 5, 7, 
{{987275543,-1173458383,1565807095,-1966409025,1117346427,1532013088},
 {987275543,-1173458383,1519692297,-2012552531,1100501628,1594923549},
 {987275543,-1173458383,1502925328,-2041920859,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058704216,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079679829,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104849746,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130017617,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RT_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage70 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
71, 71, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage71 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
72, 76, 1, 21, 5, 7, 
{{987275543,-1173458383,1695766997,-2113283428,890743437,1611596266},
 {987275543,-1173458383,1741881824,2106219166,1029163644,1603215852},
 {987275543,-1173458383,1758650855,2076875425,1092090485,1590639087},
 {987275543,-1173458383,1758650859,2093646502,1062742650,1582258675},
 {987275543,-1173458383,1758650864,2114615978,1037587070,1578074616},
 {987275543,-1173458383,1758650870,2139779758,1016623746,1578086910},
 {987275543,-1173458383,1758650875,-2130019664,1008237189,1586485764}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RT_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage72 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
73, 73, 1, 27, 5, 7, 
{{987275543,-1173458383,1758650881,-2104837460,1012427399,1599080970},
 {987275543,-1173458383,1758650887,-2083859797,1029194375,1615870479},
 {987275543,-1173458383,1750266377,-2054491474,1050167942,1620075029},
 {987275543,-1173458383,1733497347,-2016732491,1079554691,1594919450},
 {987275543,-1173458383,1704151546,-1983171906,1104755329,1561371166},
 {987275543,-1173458383,1670613490,-1953807676,1121561214,1532015138},
 {987275543,-1173458383,1628690927,-1941226811,1129960060,1515239971}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage73 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
74, 74, 1, 27, 5, 7, 
{{987275543,-1173458383,1590960626,-1949619520,1121561212,1515239970},
 {987275543,-1173458383,1553230330,-1978985800,1104755325,1536207391},
 {987275543,-1173458383,1523884548,-2012548434,1079554687,1565559323},
 {987275543,-1173458383,1507115529,-2050303321,1050167938,1590716950},
 {987275543,-1173458383,1502925320,-2079669594,1029194372,1594901008},
 {987275543,-1173458383,1502925314,-2104839511,1012427398,1582305802},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RT_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage74 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
75, 75, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925301,2135601833,1016623750,1582279165},
 {987275543,-1173458383,1502925295,2110442151,1037587075,1590655479},
 {987275543,-1173458383,1507115496,2106245796,1033382532,1599031794},
 {987275543,-1173458383,1523884511,2127202977,978842250,1611604462},
 {987275543,-1173458383,1553230295,-2125841763,907526801,1619984874},
 {987275543,-1173458383,1590960592,-2092303718,848798358,1624173032},
 {987275543,-1173458383,1628690894,-2079731048,827822742,1624170984}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage75 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
72, 76, 1, 27, 5, 7, 
{{987275543,-1173458383,1670613457,-2092311913,848798354,1615784425},
 {987275543,-1173458383,1704151512,-2125854055,907526795,1603209707},
 {987275543,-1173458383,1733497312,2131382940,978842243,1594829294},
 {987275543,-1173458383,1750266345,2106231457,1033382525,1582256627},
 {987275543,-1173458383,1758650864,2114626213,1037587070,1578074616},
 {987275543,-1173458383,1758650869,2139789992,1016623746,1578084862},
 {987275543,-1173458383,1758650875,-2130009429,1008237189,1586485764}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RT_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage76 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
77, 77, 1, 21, 5, 7, 
{{987275543,-1173458383,1758650881,-2109044047,1012427399,1599080969},
 {987275543,-1173458383,1758650887,-2083870032,1029194375,1615870479},
 {987275543,-1173458383,1758650892,-2062890321,1050153606,1632657940},
 {987275543,-1173458383,1758650896,-2046102868,1075305092,1653637656},
 {987275543,-1173458383,1741881865,-2016736588,1100501633,1624283675},
 {987275543,-1173458383,1695767031,-1970595132,1117346431,1552984607},
 {987275543,-1173458383,1628690926,-1949625654,1125765756,1511043617}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage77 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RT_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage78 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
79, 79, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139785902,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114626220,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093660842,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076889767,1092090493,1611608559},
 {987275543,-1173458383,1519692255,2106233507,1029163651,1624183276},
 {987275543,-1173458383,1565807060,-2113273184,890743442,1628371434},
 {987275543,-1173458383,1628690896,-2075546979,827824791,1624175081}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage79 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // L_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage80 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
81, 81, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage81 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
86, 90, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925292,-1794440541,1100485244,1607488074},
 {987275543,-1173458383,1502925302,-1823804788,1083611774,1703936585},
 {987275543,-1173458383,1502925305,-1853169020,1066801792,1737476678},
 {987275543,-1173458383,1502925298,-1878338931,1050063490,1699713600},
 {987275543,-1173458383,1502925290,-1907699050,1045904002,1661948473},
 {987275543,-1173458383,1502925281,-1941253475,1050126978,1632569905},
 {987275543,-1173458383,1502925272,-1983190366,1075313279,1611579943}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // L_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage82 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
83, 83, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage83 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
84, 84, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925244,-2138404197,970427019,1640903140},
 {987275543,-1173458383,1502925263,2055926427,1083675262,1640927712},
 {987275543,-1173458383,1502925274,2026576543,1125632633,1624166883},
 {987275543,-1173458383,1502925281,2051732131,1083705982,1607404009},
 {987275543,-1173458383,1502925289,2085278375,1045973634,1590643185},
 {987275543,-1173458383,1502925298,2123020969,1020818053,1582273018},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // L_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage84 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
85, 85, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925315,-2096450904,1012425350,1586502156},
 {987275543,-1173458383,1502925323,-2067086682,1029192324,1594907155},
 {987275543,-1173458383,1502925325,-2029331802,1054358145,1594919451},
 {987275543,-1173458383,1502925318,-1974799701,1083738750,1573954084},
 {987275543,-1173458383,1502925306,-1916075343,1100542588,1548788269},
 {987275543,-1173458383,1502925293,-1865739595,1113141882,1532004918},
 {987275543,-1173458383,1502925285,-1832187211,1108947579,1531996733}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage85 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
86, 90, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925282,-1819606352,1100536444,1552955969},
 {987275543,-1173458383,1502925285,-1832193370,1083720318,1594882626},
 {987275543,-1173458383,1502925289,-1857363300,1066902144,1636809280},
 {987275543,-1173458383,1502925291,-1890919786,1054292609,1661958716},
 {987275543,-1173458383,1502925287,-1920281960,1050106498,1653553718},
 {987275543,-1173458383,1502925279,-1949640034,1054325377,1628371503},
 {987275543,-1173458383,1502925272,-1983190366,1075313279,1611579943}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // L_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage86 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
87, 87, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925264,-2012542300,1108877947,1603174944},
 {987275543,-1173458383,1502925257,-2046084443,1159211637,1598966296},
 {987275543,-1173458383,1502925250,-2062857564,1175986803,1603148304},
 {987275543,-1173458383,1502925242,-2054481245,1121454713,1607334408},
 {987275543,-1173458383,1502925236,-2037724511,1037560451,1615718912},
 {987275543,-1173458383,1502925233,-2025162081,957860493,1624109560},
 {987275543,-1173458383,1502925236,-2037755234,911719058,1628312050}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage87 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
84, 84, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925244,-2071309667,911717010,1632520686},
 {987275543,-1173458383,1502925256,-2125827425,945277582,1624150507},
 {987275543,-1173458383,1502925270,2118820513,999811720,1615780331},
 {987275543,-1173458383,1502925283,2089470628,1041769091,1603215854},
 {987275543,-1173458383,1502925292,2097859239,1041781379,1590649332},
 {987275543,-1173458383,1502925299,2131409577,1020818053,1582275068},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // L_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage88 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
89, 89, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925317,-2092256600,1012425350,1586506253},
 {987275543,-1173458383,1502925326,-2054503771,1033384580,1599107606},
 {987275543,-1173458383,1502925334,-2020941151,1066920576,1615901214},
 {987275543,-1173458383,1502925340,-1991572836,1100454524,1636885029},
 {987275543,-1173458383,1502925333,-1945427295,1129835128,1615919661},
 {987275543,-1173458383,1502925309,-1865735506,1134084728,1561385529},
 {987275543,-1173458383,1502925292,-1802822991,1121514105,1548788292}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage89 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // L_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage90 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
91, 91, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925262,-2020928859,1117268602,1598976542},
 {987275543,-1173458383,1502925254,-2058663259,1175990899,1598960149},
 {987275543,-1173458383,1502925247,-2092199259,1247292010,1598945805},
 {987275543,-1173458383,1502925241,-2121540957,1326975585,1607322118},
 {987275543,-1173458383,1502925234,-2108974431,1259858537,1615704575},
 {987275543,-1173458383,1502925227,-2067078497,1062718080,1624091125},
 {987275543,-1173458383,1502925229,-2067107172,945267342,1636686315}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage91 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // R_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage92 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
93, 93, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage93 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
98, 98, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925309,-1865735506,1134084728,1561385529},
 {987275543,-1173458383,1502925333,-1945427295,1129835128,1615919661},
 {987275543,-1173458383,1502925340,-1991572836,1100454524,1636885029},
 {987275543,-1173458383,1502925334,-2020941151,1066920576,1615901214},
 {987275543,-1173458383,1502925326,-2054503771,1033384580,1599107606},
 {987275543,-1173458383,1502925317,-2092256600,1012425350,1586506253},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // R_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage94 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
95, 95, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage95 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
96, 100, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925227,-2067078497,1062718080,1624091125},
 {987275543,-1173458383,1502925234,-2108974431,1259858537,1615704575},
 {987275543,-1173458383,1502925241,-2121540957,1326975585,1607322118},
 {987275543,-1173458383,1502925247,-2092199259,1247292010,1598945805},
 {987275543,-1173458383,1502925254,-2058663259,1175990899,1598960149},
 {987275543,-1173458383,1502925262,-2020928859,1117268602,1598976542},
 {987275543,-1173458383,1502925272,-1983190366,1075313279,1611579943}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // R_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage96 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
97, 97, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925279,-1949640034,1054325377,1628371503},
 {987275543,-1173458383,1502925287,-1920281960,1050106498,1653553718},
 {987275543,-1173458383,1502925291,-1890919786,1054292609,1661958716},
 {987275543,-1173458383,1502925289,-1857363300,1066902144,1636809280},
 {987275543,-1173458383,1502925285,-1832193370,1083720318,1594882626},
 {987275543,-1173458383,1502925282,-1819606352,1100536444,1552955969},
 {987275543,-1173458383,1502925285,-1832187211,1108947579,1531996733}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage97 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
98, 98, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925293,-1865739595,1113141882,1532004918},
 {987275543,-1173458383,1502925306,-1916075343,1100542588,1548788269},
 {987275543,-1173458383,1502925318,-1974799701,1083738750,1573954084},
 {987275543,-1173458383,1502925325,-2029331802,1054358145,1594919451},
 {987275543,-1173458383,1502925323,-2067086682,1029192324,1594907155},
 {987275543,-1173458383,1502925315,-2096450904,1012425350,1586502156},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // R_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage98 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
99, 99, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925299,2131409577,1020818053,1582275068},
 {987275543,-1173458383,1502925292,2097859239,1041781379,1590649332},
 {987275543,-1173458383,1502925283,2089470628,1041769091,1603215854},
 {987275543,-1173458383,1502925270,2118820513,999811720,1615780331},
 {987275543,-1173458383,1502925256,-2125827425,945277582,1624150507},
 {987275543,-1173458383,1502925244,-2071309667,911717010,1632520686},
 {987275543,-1173458383,1502925236,-2037755234,911719058,1628312050}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage99 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
96, 100, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925233,-2025162081,957860493,1624109560},
 {987275543,-1173458383,1502925236,-2037724511,1037560451,1615718912},
 {987275543,-1173458383,1502925242,-2054481245,1121454713,1607334408},
 {987275543,-1173458383,1502925250,-2062857564,1175986803,1603148304},
 {987275543,-1173458383,1502925257,-2046084443,1159211637,1598966296},
 {987275543,-1173458383,1502925264,-2012542300,1108877947,1603174944},
 {987275543,-1173458383,1502925272,-1983190366,1075313279,1611579943}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // R_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage100 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
101, 101, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925281,-1941253475,1050126978,1632569905},
 {987275543,-1173458383,1502925290,-1907699050,1045904002,1661948473},
 {987275543,-1173458383,1502925298,-1878338931,1050063490,1699713600},
 {987275543,-1173458383,1502925305,-1853169020,1066801792,1737476678},
 {987275543,-1173458383,1502925302,-1823804788,1083611774,1703936585},
 {987275543,-1173458383,1502925292,-1794440541,1100485244,1607488074},
 {987275543,-1173458383,1502925292,-1802822991,1121514105,1548788292}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage101 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // R_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage102 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
103, 103, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925298,2123020969,1020818053,1582273018},
 {987275543,-1173458383,1502925289,2085278375,1045973634,1590643185},
 {987275543,-1173458383,1502925281,2051732131,1083705982,1607404009},
 {987275543,-1173458383,1502925274,2026576543,1125632633,1624166883},
 {987275543,-1173458383,1502925263,2055926427,1083675262,1640927712},
 {987275543,-1173458383,1502925244,-2138404197,970427019,1640903140},
 {987275543,-1173458383,1502925229,-2067107172,945267342,1636686315}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage103 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FLT_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage104 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
105, 105, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage105 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
110, 114, 1, 21, 5, 7, 
{{978882839,-1173458383,1695767029,-1991570719,1121532550,1649449498},
 {1041828119,-1173458383,1741881861,-2062865702,1108863629,1796241937},
 {1104773399,-1173458383,1758650891,-2100618540,1087849104,1859148299},
 {1159325975,-1173458383,1758650887,-2117405993,1058503314,1838168583},
 {1205485847,-1173458383,1758650881,-2134185256,1041744534,1804601859},
 {1239056663,-1173458383,1758650874,2144008918,1033374362,1762644479},
 {1264234775,-1173458383,1758650866,2127241937,1041775261,1716490747}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FLT_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage106 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
107, 107, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage107 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
108, 108, 1, 21, 5, 7, 
{{991471895,-1173458383,1565807062,-2113334622,907518587,1594821098},
 {928526615,-1173458383,1519692256,2106153631,1083685465,1573853676},
 {865581335,-1173458383,1502925286,2076805793,1171776074,1557082607},
 {811028759,-1173458383,1502925290,2093572772,1142430285,1544507891},
 {764868887,-1173458383,1502925295,2114540195,1104689748,1523546616},
 {731298071,-1173458383,1502925301,2139708063,1066945117,1498393086},
 {706119959,-1173458383,1502925307,-2130087272,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FLT_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage108 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
109, 109, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925313,-2104921452,1033374317,1464863242},
 {697727255,-1173458383,1502925319,-2079743349,1041744497,1460681232},
 {701923607,-1173458383,1507115528,-2050370934,1058523764,1456497173},
 {718709015,-1173458383,1523884547,-2012607850,1079530102,1435535899},
 {752279831,-1173458383,1553230330,-1974844757,1104743031,1427153440},
 {794243351,-1173458383,1590960625,-1949666621,1117362809,1452321314},
 {844599575,-1173458383,1628690926,-1949656359,1125765756,1511043617}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage109 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
110, 114, 1, 27, 5, 7, 
{{903348503,-1173458383,1670613488,-1974818073,1117362816,1599119901},
 {966293783,-1173458383,1704151543,-2016757014,1104743046,1691388438},
 {1033435415,-1173458383,1733497343,-2067088666,1079530124,1771072014},
 {1092184343,-1173458383,1750266372,-2109029664,1058523793,1817199111},
 {1150933271,-1173458383,1758650881,-2134195491,1041744534,1804601859},
 {1197093143,-1173458383,1758650874,2143998683,1033374362,1762644479},
 {1234860311,-1173458383,1758650866,2127231702,1041775261,1716490747}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FLT_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage110 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
111, 111, 1, 27, 5, 7, 
{{1260038423,-1173458383,1758650859,2110468816,1066945182,1678727671},
 {1272627479,-1173458383,1758650852,2093705928,1104689820,1653547507},
 {1268431127,-1173458383,1750266333,2093705921,1100487324,1640954351},
 {1251645719,-1173458383,1733497303,2127235769,1029173921,1632559597},
 {1218074903,-1173458383,1704151506,-2125829453,932692645,1628363243},
 {1176111383,-1173458383,1670613455,-2088123729,857189026,1628365290},
 {1125755159,-1173458383,1628690896,-2075577684,827824791,1624175081}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage111 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
108, 108, 1, 27, 5, 7, 
{{1067006231,-1173458383,1590960595,-2088183124,857188997,1615790570},
 {1004060951,-1173458383,1553230298,-2121741652,932692593,1599019500},
 {936919319,-1173458383,1523884514,2135487148,1029173854,1573859823},
 {878170391,-1173458383,1507115497,2110331563,1100487251,1548702195},
 {819421463,-1173458383,1502925295,2114529960,1104689748,1523546616},
 {773261591,-1173458383,1502925301,2139697828,1066945117,1498393086},
 {735494423,-1173458383,1502925307,-2130097507,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FLT_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage112 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
113, 113, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925313,-2104911217,1033374317,1464863242},
 {706119959,-1173458383,1502925319,-2079733114,1041744497,1460681232},
 {722905367,-1173458383,1502925324,-2058751361,1058503282,1469080085},
 {756476183,-1173458383,1502925328,-2041968004,1087849071,1490059801},
 {802636055,-1173458383,1519692298,-2008405364,1108863598,1469096477},
 {857188631,-1173458383,1565807096,-1962249550,1121532531,1448129058},
 {915937559,-1173458383,1628690926,-1949646124,1125765756,1511043617}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage113 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FLT_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage114 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
115, 115, 1, 21, 5, 7, 
{{1272627479,-1173458383,1758650859,2110479051,1066945182,1678727671},
 {1264234775,-1173458383,1758650852,2093716163,1104689820,1653547507},
 {1247449367,-1173458383,1758650846,2076949181,1142430360,1645146607},
 {1213878551,-1173458383,1758650843,2060178104,1171776147,1653529067},
 {1167718679,-1173458383,1741881814,2093697716,1083685527,1657719273},
 {1113166103,-1173458383,1695766992,-2121645394,907518624,1645140456},
 {1054417175,-1173458383,1628690896,-2075567449,827824791,1624175081}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage115 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FRT_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage116 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
117, 117, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage117 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
122, 122, 1, 21, 5, 7, 
{{978882839,-1173458383,1565807095,-1974801699,1121532547,1628482078},
 {1041828119,-1173458383,1519692297,-2016738604,1108863624,1771084316},
 {1104773399,-1173458383,1502925328,-2041908530,1087849100,1833992729},
 {1159325975,-1173458383,1502925324,-2058691885,1058503311,1821401621},
 {1205485847,-1173458383,1502925319,-2079661355,1041744532,1792031248},
 {1239056663,-1173458383,1502925313,-2104818988,1033374362,1754270218},
 {1264234775,-1173458383,1502925307,-2129970479,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FRT_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage118 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
119, 119, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage119 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
120, 124, 1, 21, 5, 7, 
{{991471895,-1173458383,1695767002,-2104954210,907518582,1582246380},
 {928526615,-1173458383,1741881835,2122918554,1083685459,1552904688},
 {865581335,-1173458383,1758650868,2097765020,1171776068,1540334068},
 {811028759,-1173458383,1758650872,2114536097,1142430281,1531953656},
 {764868887,-1173458383,1758650876,2139699874,1104689745,1515184638},
 {731298071,-1173458383,1758650880,-2125903200,1066945115,1498415621},
 {706119959,-1173458383,1758650884,-2092338533,1041775206,1485840909}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FRT_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage120 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
121, 121, 1, 27, 5, 7, 
{{710316311,-1173458383,1758650888,-2062976359,1033374319,1481654804},
 {697727255,-1173458383,1758650892,-2033599854,1041744501,1490051611},
 {701923607,-1173458383,1750266380,-2004225390,1058523768,1490059808},
 {718709015,-1173458383,1733497348,-1979043170,1079530106,1469092387},
 {752279831,-1173458383,1704151546,-1958059342,1104743035,1452319268},
 {794243351,-1173458383,1670613489,-1945468217,1117362811,1464904227},
 {844599575,-1173458383,1628690926,-1949656359,1125765756,1511043617}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage121 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
122, 122, 1, 27, 5, 7, 
{{903348503,-1173458383,1590960625,-1962239260,1117362814,1586539039},
 {966293783,-1173458383,1553230329,-1991599386,1104743042,1670421020},
 {1033435415,-1173458383,1523884546,-2025153823,1079530120,1750106649},
 {1092184343,-1173458383,1507115528,-2054511908,1058523790,1796235797},
 {1150933271,-1173458383,1502925319,-2079671590,1041744532,1792031248},
 {1197093143,-1173458383,1502925313,-2104829223,1033374362,1754270218},
 {1234860311,-1173458383,1502925307,-2129980714,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FRT_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage122 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
123, 123, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925301,2139839185,1066945186,1687136766},
 {1272627479,-1173458383,1502925295,2114691787,1104689827,1670347256},
 {1268431127,-1173458383,1507115496,2110499525,1100487332,1657754099},
 {1251645719,-1173458383,1523884511,2131446462,1029173929,1649353198},
 {1218074903,-1173458383,1553230294,-2125815113,932692651,1645148651},
 {1176111383,-1173458383,1590960592,-2088115535,857189029,1636755946},
 {1125755159,-1173458383,1628690896,-2075577684,827824791,1624175081}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage123 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
120, 124, 1, 27, 5, 7, 
{{1067006231,-1173458383,1670613462,-2083994966,857188994,1607406059},
 {1004060951,-1173458383,1704151520,-2113361240,932692588,1582254574},
 {936919319,-1173458383,1733497324,-2146907480,1029173849,1557105138},
 {878170391,-1173458383,1750266358,2127100583,1100487246,1536147959},
 {819421463,-1173458383,1758650876,2139689639,1104689745,1515184638},
 {773261591,-1173458383,1758650880,-2125913435,1066945115,1498415621},
 {735494423,-1173458383,1758650884,-2092348768,1041775206,1485840909}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FRT_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage124 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
125, 125, 1, 21, 5, 7, 
{{697727255,-1173458383,1758650888,-2062966124,1033374319,1481654804},
 {706119959,-1173458383,1758650892,-2033589619,1041744501,1490051611},
 {722905367,-1173458383,1758650896,-2008411512,1058503287,1506837025},
 {756476183,-1173458383,1758650900,-1995818363,1087849077,1527816740},
 {802636055,-1173458383,1741881868,-1974838634,1108863604,1511043622},
 {857188631,-1173458383,1695767033,-1949660489,1121532535,1473296932},
 {915937559,-1173458383,1628690926,-1949646124,1125765756,1511043617}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage125 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FRT_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage126 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
127, 127, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925301,2139849420,1066945186,1687136766},
 {1264234775,-1173458383,1502925295,2114702022,1104689827,1670347256},
 {1247449367,-1173458383,1502925290,2093744833,1142430369,1666142707},
 {1213878551,-1173458383,1502925286,2076973758,1171776156,1678717423},
 {1167718679,-1173458383,1519692254,2102106810,1083685537,1682903531},
 {1113166103,-1173458383,1565807059,-2117440847,907518630,1661921769},
 {1054417175,-1173458383,1628690896,-2075567449,827824791,1624175081}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage127 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BLT_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage128 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
129, 129, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage129 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
134, 138, 1, 21, 5, 7, 
{{991471895,-1173458383,1305887205,-1924482416,1100538482,1418730027},
 {928526615,-1173458383,1259772402,-1983212951,1092051568,1452270116},
 {865581335,-1173458383,1243003383,-2016769448,1075227250,1477425695},
 {811028759,-1173458383,1243003379,-2033548706,1054278262,1460640283},
 {764868887,-1173458383,1243003373,-2050332056,1045914230,1448045079},
 {731298071,-1173458383,1243003366,-2067113356,1050133107,1448030739},
 {706119959,-1173458383,1243003358,-2083894657,1071121004,1460597263}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BLT_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage130 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
131, 131, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage131 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
132, 132, 1, 21, 5, 7, 
{{978882839,-1173458383,1435847121,-2088035673,920105642,1670306288},
 {1041828119,-1173458383,1481961950,2110528172,1087879841,1687097837},
 {1104773399,-1173458383,1502925286,2077004463,1171776156,1678717423},
 {1159325975,-1173458383,1502925290,2093775538,1142430369,1666142707},
 {1205485847,-1173458383,1502925295,2114732727,1104689827,1670347256},
 {1239056663,-1173458383,1502925301,2139880125,1066945186,1687136766},
 {1264234775,-1173458383,1502925307,-2129939774,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BLT_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage132 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
133, 133, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925313,-2104798517,1033374362,1754270218},
 {1272627479,-1173458383,1502925318,-2083835189,1041746580,1792029199},
 {1268431127,-1173458383,1494538759,-2054481204,1058523790,1796233749},
 {1251645719,-1173458383,1477769728,-2008347951,1075333767,1745906204},
 {1218074903,-1173458383,1448423924,-1962214702,1096350337,1657827875},
 {1176111383,-1173458383,1410693609,-1924470069,1104773756,1561356841},
 {1125755159,-1173458383,1372963298,-1907699013,1108978297,1473270315}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage133 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
134, 138, 1, 27, 5, 7, 
{{1067006231,-1173458383,1331040737,-1916093788,1100569208,1414539818},
 {1004060951,-1173458383,1297502694,-1949654389,1083748984,1397752358},
 {936919319,-1173458383,1268156908,-1991605642,1066920568,1414517280},
 {878170391,-1173458383,1251387887,-2029362582,1054302839,1439668763},
 {819421463,-1173458383,1243003372,-2054534547,1045916278,1448043030},
 {773261591,-1173458383,1243003365,-2067123591,1050133107,1448028691},
 {735494423,-1173458383,1243003358,-2083904892,1071121004,1460597263}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BLT_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage134 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
135, 135, 1, 27, 5, 7, 
{{710316311,-1173458383,1243003351,-2096485746,1104685668,1485748748},
 {697727255,-1173458383,1243003345,-2113256811,1150825052,1510902280},
 {701923607,-1173458383,1251387851,-2113256806,1155015259,1536057860},
 {718709015,-1173458383,1268156870,-2088103266,1083705959,1569610240},
 {752279831,-1173458383,1297502658,-2050366815,978840186,1598970364},
 {794243351,-1173458383,1331040706,-2025200989,890751631,1619950072},
 {844599575,-1173458383,1372963270,-2025184603,848804512,1636737525}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage135 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
132, 132, 1, 27, 5, 7, 
{{903348503,-1173458383,1410693581,-2050317657,869778091,1645138419},
 {966293783,-1173458383,1448423895,-2096416085,941085358,1649345010},
 {1033435415,-1173458383,1477769697,-2146710864,1033370282,1653549554},
 {1092184343,-1173458383,1494538729,2114724534,1100487333,1657756148},
 {1150933271,-1173458383,1502925296,2118916796,1100495523,1670349305},
 {1197093143,-1173458383,1502925301,2139869890,1066945187,1687136766},
 {1234860311,-1173458383,1502925307,-2129950009,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BLT_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage136 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
137, 137, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925313,-2104788283,1033374362,1754270218},
 {1264234775,-1173458383,1502925319,-2079630650,1041744532,1792031248},
 {1247449367,-1173458383,1502925324,-2058661180,1058503311,1821401621},
 {1213878551,-1173458383,1502925328,-2041877825,1087849100,1833992729},
 {1167718679,-1173458383,1481961992,-2004127037,1108861576,1766887967},
 {1113166103,-1173458383,1435847155,-1937030457,1113137793,1611696679},
 {1054417175,-1173458383,1372963299,-1899300171,1108976249,1473272365}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage137 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BLT_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage138 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
139, 139, 1, 21, 5, 7, 
{{697727255,-1173458383,1243003351,-2100669815,1104685668,1485748747},
 {706119959,-1173458383,1243003344,-2117440880,1155019356,1510900231},
 {722905367,-1173458383,1243003339,-2134205805,1205346901,1531861507},
 {756476183,-1173458383,1243003336,2143998611,1251474001,1548632575},
 {802636055,-1173458383,1259772356,-2125817197,1154996834,1565407739},
 {857188631,-1173458383,1305887168,-2054540648,953666180,1598970360},
 {915937559,-1173458383,1372963268,-2029366624,852998816,1636733428}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage139 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BRT_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage140 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
141, 141, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage141 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
146, 146, 1, 21, 5, 7, 
{{991471895,-1173458383,1435847153,-1953840484,1113137777,1431337508},
 {928526615,-1173458383,1481961992,-2008376708,1108861549,1469092381},
 {865581335,-1173458383,1502925328,-2041937299,1087849071,1490059801},
 {811028759,-1173458383,1502925324,-2058720656,1058503282,1469080085},
 {764868887,-1173458383,1502925319,-2079702409,1041744497,1460681232},
 {731298071,-1173458383,1502925313,-2104880512,1033374317,1464863242},
 {706119959,-1173458383,1502925307,-2130056567,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BRT_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage142 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
143, 143, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage143 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
144, 148, 1, 21, 5, 7, 
{{978882839,-1173458383,1305887178,-2037679448,953666221,1666097660},
 {1041828119,-1173458383,1259772376,-2092125523,1154996901,1674500611},
 {1104773399,-1173458383,1243003360,-2113062226,1251474079,1666122248},
 {1159325975,-1173458383,1243003364,-2096297297,1205346979,1649353228},
 {1205485847,-1173458383,1243003368,-2071151950,1155019430,1649361426},
 {1239056663,-1173458383,1243003372,-2041816396,1104685734,1661952537},
 {1264234775,-1173458383,1243003376,-2008284490,1071121059,1691320865}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BRT_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage144 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
145, 145, 1, 27, 5, 7, 
{{1260038423,-1173458383,1243003379,-1978955078,1050133149,1724881448},
 {1272627479,-1173458383,1243003383,-1953803593,1045916311,1758444078},
 {1268431127,-1173458383,1251387895,-1928648009,1054302865,1762646579},
 {1251645719,-1173458383,1268156913,-1907684675,1066920585,1712323124},
 {1218074903,-1173458383,1297502696,-1890913597,1083748994,1632639540},
 {1176111383,-1173458383,1331040738,-1890917693,1100569213,1544567344},
 {1125755159,-1173458383,1372963298,-1907699013,1108978297,1473270315}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage145 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
146, 146, 1, 27, 5, 7, 
{{1067006231,-1173458383,1410693608,-1937063253,1104773751,1427137061},
 {1004060951,-1173458383,1448423923,-1979014504,1096350326,1414556191},
 {936919319,-1173458383,1477769727,-2020967802,1075333749,1431333402},
 {878170391,-1173458383,1494538759,-2054534533,1058523764,1452300820},
 {819421463,-1173458383,1502925318,-2083906948,1041746545,1460679183},
 {773261591,-1173458383,1502925313,-2104890747,1033374317,1460668938},
 {735494423,-1173458383,1502925307,-2130066802,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BRT_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage146 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
147, 147, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925301,2139726485,1066945117,1498393086},
 {697727255,-1173458383,1502925296,2118754969,1100495444,1523548665},
 {701923607,-1173458383,1494538729,2114558620,1100487251,1548702196},
 {718709015,-1173458383,1477769694,2143908510,1033370207,1578047986},
 {752279831,-1173458383,1448423891,-2100729184,941085300,1603199473},
 {794243351,-1173458383,1410693578,-2054577502,869778059,1624158706},
 {844599575,-1173458383,1372963270,-2025184603,848804512,1636737525}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage147 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
144, 148, 1, 27, 5, 7, 
{{903348503,-1173458383,1331040712,-2020943192,890751662,1640933882},
 {966293783,-1173458383,1297502672,-2041863509,978840242,1640942079},
 {1033435415,-1173458383,1268156890,-2066986321,1083706030,1640954373},
 {1092184343,-1173458383,1251387875,-2079544653,1155015336,1645158924},
 {1150933271,-1173458383,1243003369,-2066967882,1150825126,1649363475},
 {1197093143,-1173458383,1243003372,-2037632327,1104685734,1661952538},
 {1234860311,-1173458383,1243003376,-2008294725,1071121059,1691320865}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BRT_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage148 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
149, 149, 1, 21, 5, 7, 
{{1272627479,-1173458383,1243003380,-1978944843,1050133149,1724883496},
 {1264234775,-1173458383,1243003384,-1949599054,1045914263,1758446127},
 {1247449367,-1173458383,1243003388,-1928633684,1054278290,1787814452},
 {1213878551,-1173458383,1243003392,-1916050779,1075227278,1804599863},
 {1167718679,-1173458383,1259772410,-1899273556,1092051594,1733304888},
 {1113166103,-1173458383,1305887209,-1882506567,1100538498,1590704692},
 {1054417175,-1173458383,1372963299,-1899300171,1108976249,1473272365}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage149 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BRT_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage150 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
151, 151, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925301,2139738768,1066945117,1498393086},
 {706119959,-1173458383,1502925295,2114570900,1104689748,1523546616},
 {722905367,-1173458383,1502925290,2093603477,1142430285,1544507891},
 {756476183,-1173458383,1502925286,2076836498,1171776074,1557082607},
 {802636055,-1173458383,1481961949,2110382737,1087879770,1573847533},
 {857188631,-1173458383,1435847117,-2096512361,920105599,1603191278},
 {915937559,-1173458383,1372963268,-2029366624,852998816,1636733428}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage151 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LTA_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage152 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
153, 153, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage153 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
158, 162, 1, 21, 5, 7, 
{{987275543,-1173458383,1305887207,-1903494489,1100546683,1498425903},
 {987275543,-1173458383,1259772406,-1937050991,1083691646,1565524526},
 {987275543,-1173458383,1243003387,-1966413175,1066881665,1599068715},
 {987275543,-1173458383,1243003383,-1978996081,1045930629,1582283304},
 {987275543,-1173458383,1243003378,-1999967595,1033366152,1569690147},
 {987275543,-1173458383,1243003373,-2020937062,1029186186,1561291294},
 {987275543,-1173458383,1243003367,-2046096738,1037582987,1561279000}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LTA_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage154 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
155, 155, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage155 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
156, 156, 1, 21, 5, 7, 
{{987275543,-1173458383,1435847119,-2092277089,903330454,1636747759},
 {987275543,-1173458383,1481961950,2110442143,1033357956,1624181229},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LTA_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage156 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
157, 157, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925314,-2104839511,1012427398,1582305802},
 {987275543,-1173458383,1502925320,-2079669594,1029194372,1594901008},
 {987275543,-1173458383,1494538761,-2046111065,1050167938,1590716950},
 {987275543,-1173458383,1477769730,-2004161876,1075358334,1561360925},
 {987275543,-1173458383,1448423926,-1958020430,1096362619,1523614244},
 {987275543,-1173458383,1410693611,-1920269642,1108968057,1490057770},
 {987275543,-1173458383,1372963301,-1895105868,1108972152,1473276462}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage157 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
158, 162, 1, 27, 5, 7, 
{{987275543,-1173458383,1331040741,-1890913618,1100569210,1477462576},
 {987275543,-1173458383,1297502698,-1911887196,1083759229,1502618159},
 {987275543,-1173458383,1268156912,-1941249382,1062750848,1536160300},
 {987275543,-1173458383,1251387893,-1970609517,1045947012,1565508136},
 {987275543,-1173458383,1243003379,-1995775339,1033364104,1569692196},
 {987275543,-1173458383,1243003373,-2020937062,1029186186,1561291294},
 {987275543,-1173458383,1243003367,-2046096738,1037582987,1561279000}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LTA_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage158 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
159, 159, 1, 27, 5, 7, 
{{987275543,-1173458383,1243003361,-2071254367,1054364299,1565461010},
 {987275543,-1173458383,1243003355,-2096409949,1087916681,1573837324},
 {987275543,-1173458383,1251387861,-2104794461,1087910538,1590606343},
 {987275543,-1173458383,1268156878,-2083837277,1033376401,1607375361},
 {987275543,-1173458383,1297502663,-2058691934,957868697,1619952123},
 {987275543,-1173458383,1331040706,-2037740895,890751647,1632532982},
 {987275543,-1173458383,1372963267,-2037753184,861387424,1640925682}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage159 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
156, 156, 1, 27, 5, 7, 
{{987275543,-1173458383,1410693577,-2062923105,869776028,1636739568},
 {987275543,-1173458383,1448423890,-2109052256,915919508,1628363247},
 {987275543,-1173458383,1477769693,2135595682,983038603,1615794672},
 {987275543,-1173458383,1494538727,2106245797,1033382532,1599031794},
 {987275543,-1173458383,1502925295,2110442151,1037587075,1590655479},
 {987275543,-1173458383,1502925301,2135601833,1016623750,1582279165},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LTA_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage160 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
161, 161, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1481961992,-2008350042,1100499580,1590727198},
 {987275543,-1173458383,1435847154,-1945435469,1108951673,1515225638},
 {987275543,-1173458383,1372963299,-1899300171,1108976249,1473272365}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage161 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // LTA_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage162 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
163, 163, 1, 21, 5, 7, 
{{987275543,-1173458383,1243003361,-2071254367,1054364299,1565461010},
 {987275543,-1173458383,1243003356,-2092215646,1083722377,1573839373},
 {987275543,-1173458383,1243003351,-2113174878,1121464966,1586412040},
 {987275543,-1173458383,1243003348,-2129939806,1163397762,1603183108},
 {987275543,-1173458383,1259772365,-2108984671,1096280714,1615759871},
 {987275543,-1173458383,1305887173,-2046115168,936888986,1628340730},
 {987275543,-1173458383,1372963268,-2029366624,852998816,1636733428}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage163 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RTA_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage164 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
165, 165, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage165 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
170, 170, 1, 21, 5, 7, 
{{987275543,-1173458383,1435847154,-1945435469,1108951673,1515225638},
 {987275543,-1173458383,1481961992,-2008350042,1100499580,1590727198},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RTA_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage166 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
167, 167, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage167 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
168, 172, 1, 21, 5, 7, 
{{987275543,-1173458383,1305887173,-2046115168,936888986,1628340730},
 {987275543,-1173458383,1259772365,-2108984671,1096280714,1615759871},
 {987275543,-1173458383,1243003348,-2129939806,1163397762,1603183108},
 {987275543,-1173458383,1243003351,-2113174878,1121464966,1586412040},
 {987275543,-1173458383,1243003356,-2092215646,1083722377,1573839373},
 {987275543,-1173458383,1243003361,-2071254367,1054364299,1565461010},
 {987275543,-1173458383,1243003367,-2046096738,1037582987,1561279000}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RTA_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage168 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
169, 169, 1, 27, 5, 7, 
{{987275543,-1173458383,1243003373,-2020937062,1029186186,1561291294},
 {987275543,-1173458383,1243003379,-1995775339,1033364104,1569692196},
 {987275543,-1173458383,1251387893,-1970609517,1045947012,1565508136},
 {987275543,-1173458383,1268156912,-1941249382,1062750848,1536160300},
 {987275543,-1173458383,1297502698,-1911887196,1083759229,1502618159},
 {987275543,-1173458383,1331040741,-1890913618,1100569210,1477462576},
 {987275543,-1173458383,1372963301,-1895105868,1108972152,1473276462}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage169 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
170, 170, 1, 27, 5, 7, 
{{987275543,-1173458383,1410693611,-1920269642,1108968057,1490057770},
 {987275543,-1173458383,1448423926,-1958020430,1096362619,1523614244},
 {987275543,-1173458383,1477769730,-2004161876,1075358334,1561360925},
 {987275543,-1173458383,1494538761,-2046111065,1050167938,1590716950},
 {987275543,-1173458383,1502925320,-2079669594,1029194372,1594901008},
 {987275543,-1173458383,1502925314,-2104839511,1012427398,1582305802},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RTA_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage170 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
171, 171, 1, 27, 5, 7, 
{{987275543,-1173458383,1502925301,2135601833,1016623750,1582279165},
 {987275543,-1173458383,1502925295,2110442151,1037587075,1590655479},
 {987275543,-1173458383,1494538727,2106245797,1033382532,1599031794},
 {987275543,-1173458383,1477769693,2135595682,983038603,1615794672},
 {987275543,-1173458383,1448423890,-2109052256,915919508,1628363247},
 {987275543,-1173458383,1410693577,-2062923105,869776028,1636739568},
 {987275543,-1173458383,1372963267,-2037753184,861387424,1640925682}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage171 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
168, 172, 1, 27, 5, 7, 
{{987275543,-1173458383,1331040706,-2037740895,890751647,1632532982},
 {987275543,-1173458383,1297502663,-2058691934,957868697,1619952123},
 {987275543,-1173458383,1268156878,-2083837277,1033376401,1607375361},
 {987275543,-1173458383,1251387861,-2104794461,1087910538,1590606343},
 {987275543,-1173458383,1243003355,-2096409949,1087916681,1573837324},
 {987275543,-1173458383,1243003361,-2071254367,1054364299,1565461010},
 {987275543,-1173458383,1243003367,-2046096738,1037582987,1561279000}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RTA_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage172 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
173, 173, 1, 21, 5, 7, 
{{987275543,-1173458383,1243003373,-2020937062,1029186186,1561291294},
 {987275543,-1173458383,1243003378,-1999967595,1033366152,1569690147},
 {987275543,-1173458383,1243003383,-1978996081,1045930629,1582283304},
 {987275543,-1173458383,1243003387,-1966413175,1066881665,1599068715},
 {987275543,-1173458383,1259772406,-1937050991,1083691646,1565524526},
 {987275543,-1173458383,1305887207,-1903494489,1100546683,1498425903},
 {987275543,-1173458383,1372963299,-1899300171,1108976249,1473272365}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage173 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // RTA_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage174 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
175, 175, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1481961950,2110442143,1033357956,1624181229},
 {987275543,-1173458383,1435847119,-2092277089,903330454,1636747759},
 {987275543,-1173458383,1372963268,-2029366624,852998816,1636733428}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage175 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FL_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage176 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
177, 177, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage177 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
182, 186, 1, 21, 5, 7, 
{{978882839,-1173458383,1502925277,-1853144384,1100515972,1661983291},
 {1041828119,-1173458383,1502925288,-1878299982,1100405385,1829737021},
 {1104773399,-1173458383,1502925293,-1899271510,1087769228,1909418555},
 {1159325975,-1173458383,1502925288,-1916050766,1075212941,1884242487},
 {1205485847,-1173458383,1502925283,-1932823881,1071051409,1842289203},
 {1239056663,-1173458383,1502925277,-1957977414,1083662996,1796139565},
 {1264234775,-1173458383,1502925272,-1983122758,1108851351,1749991975}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FL_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage178 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
179, 179, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage179 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
180, 180, 1, 21, 5, 7, 
{{991471895,-1173458383,1502925259,-2079737194,932690555,1594798578},
 {928526615,-1173458383,1502925277,2114574993,1092076121,1569653230},
 {865581335,-1173458383,1502925286,2076836498,1171776074,1557082607},
 {811028759,-1173458383,1502925290,2093603477,1142430285,1544507891},
 {764868887,-1173458383,1502925295,2114570900,1104689748,1523546616},
 {731298071,-1173458383,1502925301,2139738768,1066945117,1498393086},
 {706119959,-1173458383,1502925307,-2130056567,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FL_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage180 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
181, 181, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925314,-2100696443,1033374317,1464865291},
 {697727255,-1173458383,1502925320,-2075518340,1041744497,1460683281},
 {701923607,-1173458383,1502925321,-2041951622,1058521715,1456499224},
 {718709015,-1173458383,1502925313,-1995799931,1079523957,1439726111},
 {752279831,-1173458383,1502925301,-1941263720,1096342135,1431337512},
 {794243351,-1173458383,1502925288,-1890923860,1104759417,1456497201},
 {844599575,-1173458383,1502925279,-1857363267,1104763515,1519401527}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage181 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
182, 186, 1, 27, 5, 7, 
{{903348503,-1173458383,1502925277,-1844776250,1096350335,1611663932},
 {966293783,-1173458383,1502925280,-1853162809,1087912579,1712312893},
 {1033435415,-1173458383,1502925285,-1874130239,1075272328,1804571196},
 {1092184343,-1173458383,1502925287,-1903482181,1066846861,1859082808},
 {1150933271,-1173458383,1502925284,-1928639813,1066853009,1846485556},
 {1197093143,-1173458383,1502925278,-1953793345,1079466644,1796141614},
 {1234860311,-1173458383,1502925272,-1983132993,1108851351,1749991975}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FL_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage182 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
183, 183, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925265,-2008276292,1159197335,1708034593},
 {1272627479,-1173458383,1502925259,-2033417543,1222118035,1682856475},
 {1268431127,-1173458383,1502925253,-2045994315,1234700947,1666071060},
 {1251645719,-1173458383,1502925246,-2037632336,1159199385,1649285645},
 {1218074903,-1173458383,1502925241,-2016705877,1041752735,1640894981},
 {1176111383,-1173458383,1502925239,-2004172121,941085342,1636702718},
 {1125755159,-1173458383,1502925242,-2012605789,890749589,1628324344}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage183 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
180, 180, 1, 27, 5, 7, 
{{1067006231,-1173458383,1502925250,-2050385247,899138180,1615753715},
 {1004060951,-1173458383,1502925262,-2104923489,957862512,1598994928},
 {936919319,-1173458383,1502925275,2139716253,1041756765,1578041840},
 {878170391,-1173458383,1502925286,2106170011,1104681554,1548696050},
 {819421463,-1173458383,1502925294,2110366361,1104689748,1523544567},
 {773261591,-1173458383,1502925300,2135534229,1066945117,1498391037},
 {735494423,-1173458383,1502925307,-2130066802,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FL_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage184 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
185, 185, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925313,-2104880512,1033374317,1464863242},
 {706119959,-1173458383,1502925319,-2079702409,1041744497,1460681232},
 {722905367,-1173458383,1502925324,-2058720656,1058503282,1469080085},
 {756476183,-1173458383,1502925328,-2041937299,1087849071,1490059801},
 {802636055,-1173458383,1502925319,-2004182404,1104665198,1469090335},
 {857188631,-1173458383,1502925295,-1928672610,1108937331,1452304937},
 {915937559,-1173458383,1502925276,-1865741639,1104769659,1515201077}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage185 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FL_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage186 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
187, 187, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925266,-2004071753,1155000983,1708036642},
 {1264234775,-1173458383,1502925260,-2029215052,1213727380,1682858524},
 {1247449367,-1173458383,1502925256,-2050166096,1280834191,1674461719},
 {1213878551,-1173458383,1502925252,-2071125329,1335353991,1678647826},
 {1167718679,-1173458383,1502925247,-2050192724,1226295951,1678643725},
 {1113166103,-1173458383,1502925241,-2004137305,999803549,1657676292},
 {1054417175,-1173458383,1502925244,-2000014690,878166678,1628328443}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage187 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FR_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage188 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
189, 189, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage189 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
194, 194, 1, 21, 5, 7, 
{{978882839,-1173458383,1502925295,-1928639800,1108937347,1628465705},
 {1041828119,-1173458383,1502925319,-2004127036,1104665225,1771080223},
 {1104773399,-1173458383,1502925328,-2041877825,1087849100,1833992729},
 {1159325975,-1173458383,1502925324,-2058661180,1058503311,1821401621},
 {1205485847,-1173458383,1502925319,-2079630650,1041744532,1792031248},
 {1239056663,-1173458383,1502925313,-2104788283,1033374362,1754270218},
 {1264234775,-1173458383,1502925307,-2129939774,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FR_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage190 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
191, 191, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage191 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
192, 196, 1, 21, 5, 7, 
{{991471895,-1173458383,1502925241,-2004223337,999803507,1590567428},
 {928526615,-1173458383,1502925247,-2050332014,1226295883,1569591821},
 {865581335,-1173458383,1502925252,-2071287150,1335353912,1557013010},
 {811028759,-1173458383,1502925256,-2050332013,1280834110,1552826903},
 {764868887,-1173458383,1502925260,-2029370735,1213727304,1536057884},
 {731298071,-1173458383,1502925266,-2004211061,1155000915,1523487266},
 {706119959,-1173458383,1502925272,-1983239551,1108851294,1510916647}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FR_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage192 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
193, 193, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925278,-1953883525,1079466600,1510928942},
 {697727255,-1173458383,1502925284,-1928711569,1066852974,1527718452},
 {701923607,-1173458383,1502925287,-1903537556,1066846834,1527732792},
 {718709015,-1173458383,1502925285,-1874167175,1075272310,1502581308},
 {752279831,-1173458383,1502925280,-1853185393,1087912568,1477431869},
 {794243351,-1173458383,1502925277,-1844788569,1096350329,1481640508},
 {844599575,-1173458383,1502925279,-1857363267,1104763515,1519401527}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage193 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
194, 194, 1, 27, 5, 7, 
{{903348503,-1173458383,1502925288,-1890913588,1104759422,1590714929},
 {966293783,-1173458383,1502925301,-1941241134,1096342146,1674607144},
 {1033435415,-1173458383,1502925313,-1995762992,1079523975,1754298911},
 {1092184343,-1173458383,1502925321,-2041896244,1058521742,1800432152},
 {1150933271,-1173458383,1502925320,-2075446581,1041744532,1792033297},
 {1197093143,-1173458383,1502925314,-2100604214,1033374362,1754272267},
 {1234860311,-1173458383,1502925307,-2129950009,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FR_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage194 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
195, 195, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925300,2135675586,1066945186,1687134717},
 {1272627479,-1173458383,1502925294,2110528188,1104689827,1670345207},
 {1268431127,-1173458383,1502925286,2106337974,1104681636,1661942258},
 {1251645719,-1173458383,1502925275,2139869871,1041756840,1653539312},
 {1218074903,-1173458383,1502925262,-2104804694,957862570,1645132272},
 {1176111383,-1173458383,1502925250,-2050319706,899138212,1636725235},
 {1125755159,-1173458383,1502925242,-2012605789,890749589,1628324344}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage195 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
192, 196, 1, 27, 5, 7, 
{{1067006231,-1173458383,1502925239,-2004235615,941085311,1611536894},
 {1004060951,-1173458383,1502925241,-2016820576,1041752679,1594757637},
 {936919319,-1173458383,1502925246,-2037779810,1159199313,1573788173},
 {878170391,-1173458383,1502925253,-2046156134,1234700868,1552824852},
 {819421463,-1173458383,1502925259,-2033573226,1222117959,1536055835},
 {773261591,-1173458383,1502925265,-2008415600,1159197267,1523485217},
 {735494423,-1173458383,1502925272,-1983249786,1108851294,1510916647}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FR_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage196 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
197, 197, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925277,-1958067594,1083662952,1510926893},
 {706119959,-1173458383,1502925283,-1932895637,1071051374,1523522099},
 {722905367,-1173458383,1502925288,-1916110239,1075212912,1544503863},
 {756476183,-1173458383,1502925293,-1899330981,1087769199,1578068539},
 {802636055,-1173458383,1502925288,-1878353298,1100405359,1544524349},
 {857188631,-1173458383,1502925277,-1853177194,1100515956,1485822523},
 {915937559,-1173458383,1502925276,-1865741639,1104769659,1515201077}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage197 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // FR_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage198 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
199, 199, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925301,2139880125,1066945186,1687136766},
 {1264234775,-1173458383,1502925295,2114732727,1104689827,1670347256},
 {1247449367,-1173458383,1502925290,2093775538,1142430369,1666142707},
 {1213878551,-1173458383,1502925286,2077004463,1171776156,1678717423},
 {1167718679,-1173458383,1502925277,2114722476,1092076193,1682899438},
 {1113166103,-1173458383,1502925259,-2079651162,932690597,1661907442},
 {1054417175,-1173458383,1502925244,-2000014690,878166678,1628328443}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage199 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BL_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage200 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
201, 201, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage201 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
206, 210, 1, 21, 5, 7, 
{{991471895,-1173458383,1502925277,-1853187429,1100515956,1485822523},
 {928526615,-1173458383,1502925288,-1878363533,1100405359,1544524349},
 {865581335,-1173458383,1502925293,-1899341216,1087769199,1578068539},
 {811028759,-1173458383,1502925288,-1916120474,1075212912,1544503863},
 {764868887,-1173458383,1502925283,-1932905872,1071051374,1523522099},
 {731298071,-1173458383,1502925277,-1958077829,1083662952,1510926893},
 {706119959,-1173458383,1502925272,-1983249786,1108851294,1510916647}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BL_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage202 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
203, 203, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage203 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
204, 204, 1, 21, 5, 7, 
{{978882839,-1173458383,1502925259,-2079661397,932690597,1661907442},
 {1041828119,-1173458383,1502925277,2114712241,1092076193,1682899438},
 {1104773399,-1173458383,1502925286,2076994228,1171776156,1678717423},
 {1159325975,-1173458383,1502925290,2093765303,1142430369,1666142707},
 {1205485847,-1173458383,1502925295,2114722492,1104689827,1670347256},
 {1239056663,-1173458383,1502925301,2139869890,1066945186,1687136766},
 {1264234775,-1173458383,1502925307,-2129950009,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BL_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage204 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
205, 205, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925313,-2104798518,1033374362,1754270218},
 {1272627479,-1173458383,1502925319,-2079640885,1041744532,1792031248},
 {1268431127,-1173458383,1502925319,-2050286900,1058521742,1796233750},
 {1251645719,-1173458383,1502925311,-2004153647,1075331720,1750100509},
 {1218074903,-1173458383,1502925298,-1949629742,1092149890,1674600997},
 {1176111383,-1173458383,1502925285,-1903496499,1100569214,1586514478},
 {1125755159,-1173458383,1502925276,-1865751874,1104769659,1515201077}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage205 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
206, 210, 1, 27, 5, 7, 
{{1067006231,-1173458383,1502925274,-1853177176,1096356473,1473245753},
 {1004060951,-1173458383,1502925277,-1861574000,1087918712,1473231419},
 {936919319,-1173458383,1502925282,-1886750086,1079472757,1494188602},
 {878170391,-1173458383,1502925286,-1911924115,1071045234,1523534391},
 {819421463,-1173458383,1502925283,-1932905872,1071051374,1523522099},
 {773261591,-1173458383,1502925277,-1958077829,1083662952,1510926893},
 {735494423,-1173458383,1502925272,-1983249786,1108851294,1510916647}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BL_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage206 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
207, 207, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925266,-2004221296,1155000915,1523487266},
 {697727255,-1173458383,1502925260,-2029380970,1213727304,1536057884},
 {701923607,-1173458383,1502925255,-2041963878,1226310213,1557021206},
 {718709015,-1173458383,1502925249,-2025200995,1146614354,1573792271},
 {752279831,-1173458383,1502925243,-2004239712,1029169768,1594761736},
 {794243351,-1173458383,1502925241,-1991656799,928502400,1611543041},
 {844599575,-1173458383,1502925244,-2000024925,878166678,1628328443}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage207 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
204, 204, 1, 27, 5, 7, 
{{903348503,-1173458383,1502925253,-2037738842,890751653,1636731382},
 {966293783,-1173458383,1502925264,-2092221782,953670314,1645138419},
 {1033435415,-1173458383,1502925277,-2146710864,1037564585,1649349106},
 {1092184343,-1173458383,1502925288,2114724534,1104681636,1657752052},
 {1150933271,-1173458383,1502925295,2114722492,1104689827,1670347256},
 {1197093143,-1173458383,1502925301,2139869890,1066945186,1687136766},
 {1234860311,-1173458383,1502925307,-2129950009,1041775263,1716509188}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BL_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage208 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
209, 209, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925313,-2104798518,1033374362,1754270218},
 {1264234775,-1173458383,1502925319,-2079640885,1041744532,1792031248},
 {1247449367,-1173458383,1502925324,-2058671415,1058503311,1821401621},
 {1213878551,-1173458383,1502925328,-2041888060,1087849100,1833992729},
 {1167718679,-1173458383,1502925319,-2004137271,1104665225,1771080223},
 {1113166103,-1173458383,1502925295,-1928650035,1108937347,1628465705},
 {1054417175,-1173458383,1502925276,-1865751874,1104769659,1515201077}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage209 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BL_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage210 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
211, 211, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925266,-2004221296,1155000915,1523487266},
 {706119959,-1173458383,1502925260,-2029380970,1213727304,1536057884},
 {722905367,-1173458383,1502925256,-2050342248,1280834110,1552826903},
 {756476183,-1173458383,1502925252,-2071297385,1335353912,1557013010},
 {802636055,-1173458383,1502925247,-2050342249,1226295883,1569591821},
 {857188631,-1173458383,1502925241,-2004233572,999803507,1590567428},
 {915937559,-1173458383,1502925244,-2000024925,878166678,1628328443}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage211 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BR_S_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage212 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
213, 213, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925294,-1945429313,1125765753,1490072098}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage213 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
218, 218, 1, 21, 5, 7, 
{{991471895,-1173458383,1502925295,-1928682845,1108937331,1452304937},
 {928526615,-1173458383,1502925319,-2004192639,1104665198,1469090335},
 {865581335,-1173458383,1502925328,-2041947534,1087849071,1490059801},
 {811028759,-1173458383,1502925324,-2058730891,1058503282,1469080085},
 {764868887,-1173458383,1502925319,-2079712644,1041744497,1460681232},
 {731298071,-1173458383,1502925313,-2104890747,1033374317,1464863242},
 {706119959,-1173458383,1502925307,-2130066802,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BR_S_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage214 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
215, 215, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925263,-2075524452,827824796,1636755945}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage215 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
216, 220, 1, 21, 5, 7, 
{{978882839,-1173458383,1502925241,-2004147540,999803549,1657676292},
 {1041828119,-1173458383,1502925247,-2050202959,1226295951,1678643725},
 {1104773399,-1173458383,1502925252,-2071135564,1335353991,1678647826},
 {1159325975,-1173458383,1502925256,-2050176331,1280834191,1674461719},
 {1205485847,-1173458383,1502925260,-2029225287,1213727380,1682858524},
 {1239056663,-1173458383,1502925266,-2004081988,1155000983,1708036642},
 {1264234775,-1173458383,1502925272,-1983132993,1108851351,1749991975}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BR_M_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage216 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
217, 217, 1, 27, 5, 7, 
{{1260038423,-1173458383,1502925277,-1957987649,1083662996,1796139565},
 {1272627479,-1173458383,1502925283,-1932834116,1071051409,1842289203},
 {1268431127,-1173458383,1502925286,-1911870788,1071045260,1854884407},
 {1251645719,-1173458383,1502925282,-1886711101,1079472776,1800372794},
 {1218074903,-1173458383,1502925277,-1861551416,1087918723,1708112443},
 {1176111383,-1173458383,1502925274,-1853164856,1096356479,1607463481},
 {1125755159,-1173458383,1502925276,-1865751874,1104769659,1515201077}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage217 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
218, 218, 1, 27, 5, 7, 
{{1067006231,-1173458383,1502925285,-1903506771,1100569209,1452296750},
 {1004060951,-1173458383,1502925298,-1949652328,1092149879,1431331365},
 {936919319,-1173458383,1502925311,-2004190586,1075331702,1435527709},
 {878170391,-1173458383,1502925319,-2050340229,1058521716,1456495126},
 {819421463,-1173458383,1502925319,-2079712644,1041744497,1460681232},
 {773261591,-1173458383,1502925313,-2104890747,1033374317,1464863242},
 {735494423,-1173458383,1502925307,-2130066802,1041775206,1477433860}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BR_M_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage218 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
219, 219, 1, 27, 5, 7, 
{{710316311,-1173458383,1502925301,2139728533,1066945117,1498393086},
 {697727255,-1173458383,1502925295,2114560665,1104689748,1523546616},
 {701923607,-1173458383,1502925288,2114558620,1104681555,1548700148},
 {718709015,-1173458383,1502925277,-2146864482,1037564510,1573851634},
 {752279831,-1173458383,1502925264,-2092340577,953670256,1599001075},
 {794243351,-1173458383,1502925253,-2037804383,890751621,1615759862},
 {844599575,-1173458383,1502925244,-2000024925,878166678,1628328443}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage219 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
216, 220, 1, 27, 5, 7, 
{{903348503,-1173458383,1502925241,-1991591257,928502432,1636708865},
 {966293783,-1173458383,1502925243,-2004125013,1029169824,1640899080},
 {1033435415,-1173458383,1502925249,-2025051472,1146614427,1653484047},
 {1092184343,-1173458383,1502925255,-2041802060,1226310292,1666073110},
 {1150933271,-1173458383,1502925260,-2029225287,1213727380,1682858524},
 {1197093143,-1173458383,1502925266,-2004081988,1155000983,1708036642},
 {1234860311,-1173458383,1502925272,-1983132993,1108851351,1749991975}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BR_E_L 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage220 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
221, 221, 1, 21, 5, 7, 
{{1272627479,-1173458383,1502925277,-1957987649,1083662996,1796139565},
 {1264234775,-1173458383,1502925283,-1932834116,1071051409,1842289203},
 {1247449367,-1173458383,1502925288,-1916061001,1075212941,1884242487},
 {1213878551,-1173458383,1502925293,-1899281745,1087769228,1909418555},
 {1167718679,-1173458383,1502925288,-1878310217,1100405385,1829737021},
 {1113166103,-1173458383,1502925277,-1853154619,1100515972,1661983291},
 {1054417175,-1173458383,1502925276,-1865751874,1104769659,1515201077}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage221 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925303,-1966402888,1117346426,1519430176},
 {987275543,-1173458383,1502925321,-2012544345,1100501628,1590729245},
 {987275543,-1173458383,1502925328,-2041910624,1075305087,1620083225},
 {987275543,-1173458383,1502925324,-2058693981,1050153602,1607492117},
 {987275543,-1173458383,1502925319,-2079669594,1029194372,1594898960},
 {987275543,-1173458383,1502925313,-2104839511,1012427398,1582303754},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // BR_E_R 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage222 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
223, 223, 1, 21, 5, 7, 
{{697727255,-1173458383,1502925301,2139728533,1066945117,1498393086},
 {706119959,-1173458383,1502925295,2114560665,1104689748,1523546616},
 {722905367,-1173458383,1502925290,2093593242,1142430285,1544507891},
 {756476183,-1173458383,1502925286,2076826263,1171776074,1557082607},
 {802636055,-1173458383,1502925277,2114564758,1092076121,1569653230},
 {857188631,-1173458383,1502925259,-2079747429,932690555,1594798578},
 {915937559,-1173458383,1502925244,-2000024925,878166678,1628328443}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct //  
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[7][6]; 
   const uint16 PauseTime[7]; 
   const uint16 PlayTime[7]; 
} MotionPage223 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,4,4,4,4}, 
0, 0, 1, 21, 5, 7, 
{{987275543,-1173458383,1502925268,-2113258851,890743445,1632565738},
 {987275543,-1173458383,1502925279,2106245791,1029163652,1624183276},
 {987275543,-1173458383,1502925286,2076900002,1092090493,1611608559},
 {987275543,-1173458383,1502925290,2093671077,1062742656,1599033843},
 {987275543,-1173458383,1502925295,2114636455,1037587075,1590655480},
 {987275543,-1173458383,1502925301,2139796137,1016623750,1582279166},
 {987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0,0,0,0,0,0,0}, {80,80,80,80,80,80,80} 
}; 

struct // Balance 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage224 PROGMEM = { 
{7,7,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,6}, 
224, 0, 1, 10, 5, 1, 
{{987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0}, {96} 
}; 

struct // Clap end 
{ 
   const uint8 JointFlexibility[18]; 
   const uint8 NextPage; 
   const uint8 ExitPage; 
   const uint8 RepeatTime; 
   const uint8 SpeedRate10; 
   const uint8 InertialForce; 
   const uint8 Steps; 
   const uint32 StepValues[1][6]; 
   const uint16 PauseTime[1]; 
   const uint16 PlayTime[1]; 
} MotionPage225 PROGMEM = { 
{5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5}, 
0, 0, 1, 5, 32, 1, 
{{987275543,-1173458383,1502925307,-2130007382,1008237191,1578097156}},
{0}, {1000} 
}; 

// Number of active motion pages in this file 
const uint8 ACTIVE_MOTION_PAGES = 225; 

// Min and max values for the servo values 
const uint16 SERVO_MAX_VALUES[18] = {833,856,770,898,537,868,512,743,541,775,611,968,524,1015,850,601,572,729}; 
const uint16 SERVO_MIN_VALUES[18] = {166,190,145,253,155,486,280,512,248,482,49,412,28,499,422,181,294,444}; 

#endif /* MOTION_H_ */

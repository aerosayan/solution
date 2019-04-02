// GUESSTHE - Guess the Number
// http://www.spoj.com/problems/GUESSTHE/

#include<iostream>
#include<string>
using namespace std;

int candidates[960] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,24,26,28,30,33,34,35,36,38,39,40,42,44,45,48,51,52,55,56,57,60,63,65,66,68,70,72,76,77,78,80,84,85,88,90,91,95,99,102,104,105,110,112,114,117,119,120,126,130,132,133,136,140,143,144,152,153,154,156,165,168,170,171,176,180,182,187,190,195,198,204,208,209,210,220,221,228,231,234,238,240,247,252,255,260,264,266,272,273,280,285,286,304,306,308,312,315,323,330,336,340,342,357,360,364,374,380,385,390,396,399,408,418,420,429,440,442,455,456,462,468,476,494,495,504,510,520,528,532,546,560,561,570,572,585,595,612,616,624,627,630,646,660,663,665,680,684,693,714,715,720,728,741,748,760,765,770,780,792,798,816,819,836,840,855,858,880,884,910,912,924,935,936,952,969,988,990,1001,1008,1020,1040,1045,1064,1071,1092,1105,1122,1140,1144,1155,1170,1190,1197,1224,1232,1235,1254,1260,1287,1292,1309,1320,1326,1330,1360,1365,1368,1386,1428,1430,1456,1463,1482,1496,1520,1530,1540,1547,1560,1584,1596,1615,1638,1672,1680,1683,1710,1716,1729,1768,1785,1820,1848,1870,1872,1881,1904,1938,1976,1980,1989,1995,2002,2040,2090,2128,2142,2145,2184,2210,2223,2244,2261,2280,2288,2310,2340,2380,2394,2431,2448,2470,2508,2520,2574,2584,2618,2640,2652,2660,2717,2730,2736,2772,2805,2856,2860,2907,2926,2964,2992,3003,3060,3080,3094,3120,3135,3192,3230,3276,3315,3344,3366,3420,3432,3458,3465,3536,3553,3570,3640,3696,3705,3740,3762,3876,3927,3952,3960,3978,3990,4004,4080,4095,4180,4199,4284,4290,4368,4389,4420,4446,4488,4522,4560,4620,4641,4680,4760,4788,4845,4862,4940,5005,5016,5040,5148,5168,5187,5236,5304,5320,5355,5434,5460,5544,5610,5712,5720,5814,5852,5928,5985,6006,6120,6160,6188,6270,6384,6435,6460,6545,6552,6630,6732,6783,6840,6864,6916,6930,7106,7140,7280,7293,7315,7410,7480,7524,7735,7752,7854,7920,7956,7980,8008,8151,8190,8360,8398,8415,8568,8580,8645,8778,8840,8892,8976,9009,9044,9240,9282,9360,9405,9520,9576,9690,9724,9880,9945,10010,10032,10296,10374,10472,10608,10640,10659,10710,10868,10920,11088,11115,11220,11305,11440,11628,11704,11781,11856,11970,12012,12155,12240,12376,12540,12597,12870,12920,13090,13104,13167,13260,13464,13566,13585,13680,13832,13860,13923,14212,14280,14535,14586,14630,14820,14960,15015,15048,15470,15504,15561,15708,15912,15960,16016,16302,16380,16720,16796,16830,17017,17136,17160,17290,17556,17680,17765,17784,18018,18088,18480,18564,18810,19019,19152,19380,19448,19635,19760,19890,20020,20349,20592,20748,20944,20995,21318,21420,21736,21840,21879,21945,22230,22440,22610,23205,23256,23408,23562,23940,24024,24310,24453,24752,24871,25080,25194,25740,25840,25935,26180,26334,26520,26928,27132,27170,27664,27720,27846,28424,28560,29070,29172,29260,29393,29640,30030,30096,30940,31122,31416,31824,31920,31977,32604,32760,33592,33660,33915,34034,34320,34580,35112,35530,35568,36036,36176,36465,37128,37620,37791,38038,38760,38896,39270,39780,40040,40698,40755,41496,41990,42636,42840,43472,43758,43890,44460,44880,45045,45220,46189,46410,46512,47124,47880,48048,48620,48906,49742,50160,50388,51051,51480,51870,52360,52668,53040,53295,54264,54340,55440,55692,56848,57057,58140,58344,58520,58786,58905,59280,60060,61880,62244,62832,62985,63954,65208,65520,65835,67184,67320,67830,68068,69160,69615,70224,71060,72072,72930,74256,74613,75240,75582,76076,77520,77805,78540,79560,80080,81396,81510,82992,83980,85085,85272,85680,87516,87780,88179,88920,90090,90440,92378,92820,94248,95095,95760,97240,97812,99484,100776,101745,102102,102960,103740,104720,105336,106590,108528,108680,109395,111384,114114,116280,116688,117040,117572,117810,120120,122265,123760,124355,124488,125970,127908,130416,131670,134640,135660,136136,138320,138567,139230,142120,144144,145860,146965,149226,150480,151164,152152,153153,155610,157080,159120,159885,162792,163020,167960,170170,170544,171171,175032,175560,176358,177840,180180,180880,184756,185640,188496,188955,190190,194480,195624,198968,201552,203490,204204,207480,210672,213180,217360,218790,222768,223839,228228,230945,232560,235144,235620,240240,244530,248710,248976,251940,255255,255816,263340,264537,271320,272272,277134,278460,284240,285285,291720,293930,298452,302328,304304,306306,311220,314160,319770,323323,325584,326040,335920,340340,342342,350064,351120,352716,360360,369512,371280,373065,377910,380380,391248,397936,406980,408408,414960,415701,426360,437580,440895,447678,456456,461890,470288,471240,489060,497420,503880,510510,511632,526680,529074,542640,554268,556920,570570,583440,587860,596904,604656,612612,622440,639540,646646,652080,680680,684684,692835,705432,720720,739024,746130,755820,760760,765765,813960,816816,831402,852720,855855,875160,881790,895356,912912,923780,942480,969969,978120,994840,1007760,1021020,1053360,1058148,1108536,1113840,1119195,1141140,1175720,1193808,1225224,1244880,1279080,1293292,1322685,1361360,1369368,1385670,1410864,1492260,1511640,1521520,1531530,1616615,1627920,1662804,1711710,1750320,1763580,1790712,1847560,1939938,1956240,1989680,2042040,2078505,2116296,2217072,2238390,2282280,2351440,2450448,2558160,2586584,2645370,2738736,2771340,2909907,2984520,3023280,3063060,3233230,3325608,3423420,3527160,3581424,3695120,3879876,4084080,4157010,4232592,4476780,4564560,4849845,5173168,5290740,5542680,5819814,5969040,6126120,6466460,6651216,6846840,7054320,7759752,8314020,8953560,9699690,10581480,11085360,11639628,12252240,12932920,13693680,14549535,15519504,16628040,17907120,19399380,21162960,23279256,25865840,29099070,33256080,38798760,46558512,58198140,77597520,116396280,232792560};

int main() {
  string input;
  bool found_ans;
  while(true) {
    input = "";
    while(input == "") cin >> input;
    if (input == "*") break;
    found_ans = false;
    for (int i = 0; i < 960; i++) {
      bool satisfied = true;
      for (int j = 0; j < input.length(); j++) {
        int remaind = candidates[i] % (j+1);
        if (input[j] == 'N' && remaind == 0) {
          satisfied = false;
          break;
        }
        if (input[j] == 'Y' && remaind > 0) {
          satisfied = false;
          break;
        }
      }
      if (satisfied) {
        found_ans = true;
        cout << candidates[i] << "\n";
        break;
      }
    }
    if (!found_ans) cout << "-1\n";
  }
}
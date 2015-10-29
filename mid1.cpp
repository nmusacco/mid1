/* Program: Midterm 1 Miles to Kilometer Unit Tester
 * Author : Nicholas Musacco
 * Purpose: The Unit Checker was designed to test the milesToKm(double miles) function
 *          This is accomplished by creating an array of the correct values 
 *          and checking it against the number that the function produces.
 *          The function includes a tolerance variable to give the milesToKm function
 *          an interval of "correctness" For example, if the tolerance is 1 and the 
 *          correct number is 2, but the function provided the number 3, then the
 *          checker will return true for that value. 
 *          The checker produces a table and indicates whether or not the function's
 *          value is correct. Finally the checker tells the user the amount of incorrect values
 * Style:   Allman
 */

// Please note that due to the way I coded this program, it does not return even close to the example program provided
// this is because the tolerance cushion of .007 was too small to actually make any of the numbers correct


//cmps335 exam 1 framework
//Write a unit test to check the validity of milesToKm function.
//
//
#include<iostream>
#include<cstdlib>

using namespace std;

#define TEST




double milesToKm(double miles);

int main(int argc, char *argv[])
{
    double mArr[201];
    int count = 1;
    for(double i = 0.0; i <= 20.1; i += 0.1)
    {
        mArr[count] = i;
        ++count;
    }

    double kmArr[201];   //Now thats an array!
    kmArr[0] = 0.0;
    kmArr[1] = 0.070595;
    kmArr[2] = 0.127778;
    kmArr[3] = 0.193219;
    kmArr[4] = 0.256047;
    kmArr[5] = 0.320338;
    kmArr[6] = 0.377179;
    kmArr[7] = 0.437968;
    kmArr[8] = 0.502869;
    kmArr[9] = 0.566453;
    kmArr[10] = 0.627338;
    kmArr[11] = 0.687828;
    kmArr[12] = 0.750056;
    kmArr[13] = 0.812044;
    kmArr[14] = 0.872742;
    kmArr[15] = 0.939051;
    kmArr[16] = 0.999317;
    kmArr[17] = 1.057795;
    kmArr[18] = 1.122426;
    kmArr[19] = 1.184569;
    kmArr[20] = 1.245477;
    kmArr[21] = 1.306479;
    kmArr[22] = 1.370552;
    kmArr[23] = 1.431963;
    kmArr[24] = 1.500516;
    kmArr[25] = 1.562474;
    kmArr[26] = 1.622408;
    kmArr[27] = 1.679902;
    kmArr[28] = 1.747587;
    kmArr[29] = 1.808442;
    kmArr[30] = 1.868826;
    kmArr[31] = 1.931736;
    kmArr[32] = 1.993311;
    kmArr[33] = 2.058741;
    kmArr[34] = 2.114956;
    kmArr[35] = 2.177221;
    kmArr[36] = 2.244804;
    kmArr[37] = 2.305723;
    kmArr[38] = 2.366640;
    kmArr[39] = 2.426989;
    kmArr[30] = 2.489355;
    kmArr[41] = 2.549020;
    kmArr[42] = 2.617720;
    kmArr[43] = 2.680177;
    kmArr[44] = 2.739693;
    kmArr[45] = 2.796955;
    kmArr[46] = 2.863584;
    kmArr[47] = 2.921229;
    kmArr[48] = 2.984832;
    kmArr[49] = 3.053955;
    kmArr[50] = 3.111606;
    kmArr[51] = 3.173981;
    kmArr[52] = 3.231968;
    kmArr[53] = 3.301554;
    kmArr[54] = 3.363203;
    kmArr[55] = 3.417607;
    kmArr[56] = 3.487014;
    kmArr[57] = 3.546460;
    kmArr[58] = 3.606221;
    kmArr[59] = 3.671176;
    kmArr[60] = 3.729340;
    kmArr[61] = 3.797348;
    kmArr[62] = 3.853076;
    kmArr[63] = 3.920678;
    kmArr[64] = 3.981979;
    kmArr[65] = 4.041785;
    kmArr[66] = 4.109515;
    kmArr[67] = 4.166262;
    kmArr[68] = 4.234851;
    kmArr[69] = 4.291360;
    kmArr[70] = 4.356319;
    kmArr[71] = 4.415136;
    kmArr[72] = 4.479174;
    kmArr[73] = 4.540696;
    kmArr[74] = 4.599834;
    kmArr[75] = 4.661250;
    kmArr[76] = 4.727898;
    kmArr[77] = 4.791527;
    kmArr[78] = 4.848451;
    kmArr[79] = 4.916565;
    kmArr[80] = 4.977180;
    kmArr[81] = 5.039618;
    kmArr[82] = 5.097969;
    kmArr[83] = 5.164436;
    kmArr[84] = 5.224322;
    kmArr[85] = 5.282185;
    kmArr[86] = 5.350919;
    kmArr[87] = 5.408075;
    kmArr[88] = 5.473248;
    kmArr[89] = 5.539605;
    kmArr[90] = 5.599579;
    kmArr[91] = 5.660778;
    kmArr[92] = 5.723007;
    kmArr[93] = 5.786572;
    kmArr[94] = 5.843236;
    kmArr[95] = 5.904629;
    kmArr[96] = 5.965863;
    kmArr[97] = 6.028120;
    kmArr[98] = 6.094124;
    kmArr[99] = 6.151809;
    kmArr[100] =  6.218438;
    kmArr[101] =  6.277264;
    kmArr[102] =  6.341629;
    kmArr[103] =  6.400159;
    kmArr[104] =  6.468370;
    kmArr[105] =  6.529736;
    kmArr[106] =  6.587545;
    kmArr[107] =  6.650267;
    kmArr[108] =  6.713125;
    kmArr[109] =  6.775721;
    kmArr[110] =  6.844419;
    kmArr[111] =  6.905757;
    kmArr[112] =  6.968653;
    kmArr[113] =  7.023566;
    kmArr[114] =  7.089232;
    kmArr[115] =  7.149879;
    kmArr[116] =  7.210517;
    kmArr[117] =  7.272780;
    kmArr[118] =  7.338446;
    kmArr[119] =  7.402120;
    kmArr[120] =  7.458603;
    kmArr[121] =  7.522106;
    kmArr[122] =  7.584842;
    kmArr[123] =  7.651417;
    kmArr[124] =  7.706348;
    kmArr[125] =  7.773612;
    kmArr[126] =  7.829443;
    kmArr[127] =  7.893471;
    kmArr[128] =  7.960854;
    kmArr[129] =  8.020551;
    kmArr[130] =  8.080128;
    kmArr[131] =  8.142003;
    kmArr[132] =  8.208389;
    kmArr[133] =  8.270194;
    kmArr[134] =  8.328461;
    kmArr[135] =  8.390922;
    kmArr[136] =  8.451956;
    kmArr[137] =  8.515895;
    kmArr[138] =  8.578941;
    kmArr[139] =  8.640696;
    kmArr[140] =  8.705094;
    kmArr[141] =  8.764701;
    kmArr[142] =  8.825657;
    kmArr[143] =  8.890815;
    kmArr[144] =  8.953197;
    kmArr[145] =  9.017682;
    kmArr[146] =  9.081349;
    kmArr[147] =  9.142233;
    kmArr[148] =  9.196844;
    kmArr[149] =  9.264040;
    kmArr[150] =  9.326461;
    kmArr[151] =  9.385418;
    kmArr[152] =  9.453980;
    kmArr[153] =  9.507000;
    kmArr[154] =  9.570395;
    kmArr[155] =  9.631752;
    kmArr[156] =  9.699898;
    kmArr[157] =  9.756987;
    kmArr[158] =  9.820235;
    kmArr[159] =  9.883626;
    kmArr[160] =  9.948276;
    kmArr[161] =  10.008963;
    kmArr[162] =  10.072093;
    kmArr[163] =  10.130992;
    kmArr[164] =  10.191348;
    kmArr[165] =  10.260607;
    kmArr[166] =  10.319830;
    kmArr[167] =  10.379083;
    kmArr[168] =  10.440144;
    kmArr[169] =  10.510276;
    kmArr[170] =  10.569147;
    kmArr[171] =  10.632470;
    kmArr[172] =  10.690071;
    kmArr[173] =  10.757761;
    kmArr[174] =  10.814104;
    kmArr[175] =  10.881951;
    kmArr[176] =  10.941990;
    kmArr[177] =  10.999862;
    kmArr[178] =  11.066456;
    kmArr[179] =  11.128969;
    kmArr[180] =  11.191900;
    kmArr[181] =  11.248778;
    kmArr[182] =  11.318111;
    kmArr[183] =  11.377467;
    kmArr[184] =  11.435228;
    kmArr[185] =  11.495819;
    kmArr[186] =  11.564395;
    kmArr[187] =  11.628164;
    kmArr[188] =  11.683708;
    kmArr[189] =  11.753395;
    kmArr[190] =  11.808419;
    kmArr[191] =  11.876475;
    kmArr[192] =  11.934712;
    kmArr[193] =  12.000728;
    kmArr[194] =  12.055547;
    kmArr[195] =  12.122003;
    kmArr[196] =  12.185142;
    kmArr[197] =  12.247047;
    kmArr[198] =  12.310618;
    kmArr[199] =  12.372681;
    kmArr[200] =  12.432581;

    double miles = 1.0;
    double tolerance = 0.0;
    if(argc > 2)
    {
        tolerance = atof(argv[2]);
    }
    int bad = 0;

    if(argc > 1)
    {
        miles = atof(argv[1]);
        if(miles < 0.0)
        {
            cout<< "\n\nUnit test of milesToKm(double miles) function . . .\nTolerance: "<<tolerance<<endl;
            cout<< "Array#     Table                  Function\n-----      -----                 --------\n";
            for(int i = 2; i <= 201; ++i)
            {
                cout.width(10);
                cout<< left << i - 1 << mArr[i];
                cout.width(30);
                cout << right <<  milesToKm(mArr[i]);
                if((milesToKm(mArr[i]) > kmArr[i] + tolerance) || (milesToKm(mArr[i]) < kmArr[i] - tolerance)) //this is the interval for "correctness"
                {
                    cout<< "        <------ bad value";
                    ++bad;
                }
                cout<<endl;
            }
            cout<<"bad element count: "<< bad <<endl;
            cout<<"Unit test completed\n";
        }

        else             //This is the portion of the program that lets the user calculate custom inputs
        {
            cout<< miles <<" miles = ";
            cout<< milesToKm(miles) << " Km" << endl;
        }
    }
    return 0;
}

double milesToKm(double miles)
{
    return (miles * 0.62137);
}




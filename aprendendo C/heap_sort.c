/*

1- cria array
2- chama funcao max-heap(Funcao que usa o heap em cada elemento tirando as folhas)
3- Encontramos o maior elemento, ele vai estar no comeco do array, trocamos pelo ultimo.
4- diminui-se 1 no tamanho do array
5- chamamos funcao heap no primeiro elemento do array (pois eh o unico fora de ordem)



[4, 10, 3, 5, 1]



*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void heap (int *arr, int i, int n);
void max_heap(int *arr, int n);




int main(){

	//1.000 numeros
	//0.667ms

	//5.000 numeros
	//3.017

	//10.000 numeros
	//9.552

	//20.000 numeros
	//13.132

	//40.000 numeros
	//30.289ms


	//1.000.000 numeros
	//819.89





//1.000 números
	int arr[] = {205,894,926,897,515,90,1000,191,957,616,448,449,29,309,46,925,678,9,639,581,244,851,156,804,671,44,789,751,520,158,568,585,516,921,913,111,509,157,521,619,845,73,682,763,326,306,242,994,481,15,736,582,159,230,648,364,418,848,399,103,466,826,829,195,383,589,104,471,351,475,797,492,990,995,476,277,637,373,488,406,659,590,799,918,64,380,728,704,958,973,202,553,722,999,544,401,800,324,128,100,771,93,493,463,583,872,727,735,369,762,211,487,969,207,444,27,815,201,510,512,543,907,900,196,470,955,906,825,817,977,561,173,386,737,827,514,522,951,355,17,746,284,787,818,878,537,998,259,214,745,239,243,586,182,716,228,16,819,863,420,548,623,422,849,579,226,714,805,768,909,833,764,574,76,654,962,185,478,696,786,775,344,398,588,606,496,904,783,451,75,759,940,362,901,8,547,912,336,279,318,640,232,922,167,188,742,828,791,645,333,164,870,144,599,784,612,541,594,715,197,404,929,856,978,812,706,802,301,814,661,943,334,980,24,455,936,910,686,717,89,253,710,501,726,642,85,663,979,131,347,465,479,602,426,308,25,920,358,292,636,34,425,63,807,531,638,294,20,84,821,700,984,248,683,964,882,62,610,908,876,424,91,911,357,519,223,720,237,841,491,114,208,503,868,323,658,790,694,718,224,219,673,846,653,781,203,303,690,506,67,32,343,178,557,695,384,944,240,363,79,756,447,933,523,643,879,754,154,74,97,614,41,835,375,730,651,747,12,596,667,495,562,550,176,753,169,457,346,896,862,107,296,152,298,387,439,668,348,474,180,923,155,7,220,484,511,486,657,282,769,385,627,143,950,163,502,10,136,993,916,886,54,59,350,970,530,274,691,572,456,320,300,997,992,688,529,534,630,625,899,255,278,843,939,314,116,847,525,42,669,874,95,83,39,808,260,105,719,824,665,840,498,961,440,265,192,407,148,571,576,660,338,699,395,291,37,393,213,250,780,115,361,371,430,546,578,312,247,266,857,855,575,605,125,875,985,738,140,307,613,412,139,377,290,168,766,331,820,249,269,635,672,2,372,517,193,480,273,119,443,877,258,860,13,405,257,934,721,801,770,30,794,374,577,473,859,915,145,931,972,892,78,209,189,684,70,966,146,263,5,842,241,757,102,930,618,332,987,428,646,138,749,112,566,777,573,743,937,129,437,883,924,836,378,468,295,538,558,935,591,327,527,419,77,120,674,446,352,317,433,454,968,3,22,677,750,983,453,366,881,408,316,622,723,289,319,649,779,368,52,98,172,858,732,975,94,187,270,905,390,409,429,664,421,245,707,809,81,199,871,234,276,477,162,464,712,23,803,281,971,866,795,861,607,150,891,280,580,711,396,382,160,830,442,731,724,21,873,641,285,287,545,796,275,949,310,611,938,51,221,218,628,186,56,507,485,36,400,297,552,413,200,670,692,864,434,6,353,687,225,194,631,823,986,65,535,460,69,880,118,773,341,50,895,113,271,592,564,198,227,354,505,884,542,954,996,600,96,238,565,315,903,782,655,313,597,349,19,705,459,733,435,153,898,222,679,86,741,252,774,233,256,376,174,932,415,458,513,702,132,190,567,761,394,262,729,99,816,844,946,345,518,647,634,708,644,302,555,330,609,834,560,524,137,593,360,397,685,570,133,806,810,175,948,837,212,778,508,71,365,482,615,184,713,45,928,183,755,304,48,321,438,604,549,403,261,811,489,595,467,177,335,652,38,60,788,286,981,532,436,945,14,526,744,359,559,469,499,533,776,452,853,170,432,165,392,785,147,960,109,151,389,988,888,288,40,681,617,554,142,264,53,441,388,329,414,914,311,601,698,135,33,283,989,624,917,626,206,236,427,740,865,734,82,235,632,149,229,838,68,974,666,461,254,540,798,504,813,902,431,127,101,739,18,92,322,462,4,55,123,246,887,88,893,947,445,587,340,919,339,110,370,854,35,58,621,991,709,650,106,1,391,367,134,528,662,584,216,417,166,31,963,215,204,965,122,680,217,423,793,693,268,701,551,130,556,450,57,952,603,890,758,867,126,171,26,49,402,976,633,299,121,379,47,416,411,410,676,956,822,342,697,942,831,675,108,337,72,889,87,11,608,231,982,381,869,325,569,689,293,539,497,953,179,500,850,43,490,472,80,927,61,752,210,760,629,792,598,620,885,328,959,767,66,656,117,967,832,536,494,251,356,703,141,267,748,852,483,839,305,124,28,941,272,181,563,725,772,765,161};



	int n = (sizeof(arr) / sizeof(arr[0])) - 1;
	int tamanho = n;
	int aux;
	clock_t tempo[2];

	tempo[0] = clock();

	max_heap(arr, n);//---CONSTROI UM MAX HEAP


	while(n>1){
		aux = arr[n];//COLOCA O MAIOR ELEMENTO ENCONTRADO PELO MAXHEAP
		arr[n] = arr[1];//NO ULTIMO ELEMENTO DO ARRAY
		arr[1] = aux;//^^^^^^^^^^

		n--;//DIMINUI O TAMANHO DO ARRAY JA QUE O ULTIMO ELEMENTO FOI ENCONTRADO

		heap(arr, 1, n);
	}

	tempo[1] = clock();

	double diferenca = (tempo[1] - tempo[0]) * 1000.0 / CLOCKS_PER_SEC;


	for(int i=1; i<=tamanho; i++)
		printf("%d ", arr[i]);
	
	printf("\n\nTempo gasto: %g\n", diferenca);

	printf("\n\n\n");


	return 0;
}

	void heap (int *arr, int i, int n){
		int left = i*2;
		int right = left +1;
		int max, aux;

		if (left <= n && arr[left] > arr[i])
			max = left;
		else
			max = i;

		if (right <= n && arr[right] > arr[max])
			max = right;

		if (max != i){
			aux = arr[max];
			arr[max] = arr[i];
			arr[i] = aux;
			heap(arr, max, n);
		}
	}

	void max_heap (int *arr, int n){
		for(int i = n/2; i>0; i--)
			heap(arr, i, n);

	}

























//--------------------------------------------------------------------------------
// Konstantin Pavlov, pavlovconst@gmail.com
const unsigned char author[] = {"author: Konstantin Pavlov, pavlovconst@gmail.com"};
//--------------------------------------------------------------------------------

// √лупа€ зате€ была...
// »зобретение велосипеда...
// —охранено только дл€ того, чтобы не забыть свои ошибки.

// ласс, предоставл€ющий относительно удобный интерфейс работы с многомерными массивами.

class CMultiArr
{
	int Dim;
	int* pBounds;

	int hmEls;
	int* pEls;

	int BoundsToSerial(int _CutOffs[]);

public:
	CMultiArr(int _Dim, int _Bounds[], bool ZeroInit=true);
	~CMultiArr();

	void SetEll(int _CutOffs[], int _Val);
	int GetEll(int _CutOffs[]);
	int GetBound(int CutOffNumber);
	void GetBounds(int _Output[]);
};

CMultiArr::CMultiArr(int _Dim, int _Bounds[], bool ZeroInit)
{
	Dim=_Dim;
	pBounds=new int[Dim-1];
	hmEls=1;
	for(int i=0; i<Dim-1; i++)
	{
		pBounds[i]=_Bounds[i];
		hmEls*=_Bounds[i];
	}
	pEls=new int[hmEls];
	if(ZeroInit) 
		for (i=0; i<hmEls; i++) 
			pEls[i]=0;
}

CMultiArr::~CMultiArr()
{
	delete[] pBounds;
	delete[] pEls;
}

int CMultiArr::BoundsToSerial(int _CutOffs[])
{
	int SerialNumber=0;
	int SubArrSize=1;
	for(int CutOffVar=0; CutOffVar<Dim; CutOffVar++)
	{
		// многомерный массив размерности N есть
		// одномерный массив размерности N-1, однако
		// в пам€ти элементы располагаютс€ в пор€дке возрастани€ 
		// самого ѕ≈–¬ќ√ќ индекса, а не ѕќ—Ћ≈ƒЌ≈√ќ,
		// как это прин€то в стандартных многомерных массивах

		SerialNumber+=(_CutOffs[CutOffVar]+1)*SubArrSize;
		SubArrSize*=pBounds[CutOffVar];
	}
	cout << endl << SerialNumber;	//	TEST LINE
	return SerialNumber;
}

void CMultiArr::SetEll(int _CutOffs[], int _Val)
{
	pEls[BoundsToSerial(_CutOffs)]=_Val;
}

int CMultiArr::GetEll(int _CutOffs[])
{
	return pEls[BoundsToSerial(_CutOffs)];
}

int CMultiArr::GetBound(int CutOffNumber)
{
	return pBounds[CutOffNumber-1];
}

void CMultiArr::GetBounds(int _Output[])
{
	for(int i=0; i<Dim; i++)
	{
		_Output[i]=pBounds[i];
	}
}
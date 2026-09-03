#include <iostream>
using namespace std;


class clsCalculator
{

private:

	int _IntputValue = 0;
	int _Result = 0;
	int _PreviousResult = 0;
	string _OpType = "Clear";

	bool IsCancelingOrClearResult()
	{
		return _OpType == "Clear" || _OpType == "Canceling Last Op";
	}


public:

	void Clear()
	{
		_IntputValue = 0;
		_PreviousResult = _Result;
		_Result = 0;
		_OpType = "Clear";
	}

	void CancelLastOp()
	{
		_Result = _PreviousResult;
		_OpType = "Canceling Last Op";
	}

	void Add(int Number)
	{
		_IntputValue = Number;
		_PreviousResult = _Result;
		_Result += _IntputValue;
		_OpType = "Adding";
	}

	void Subtract(int Number)
	{
		_IntputValue = Number;
		_PreviousResult = _Result;
		_Result -= _IntputValue;
		_OpType = "Subtracting";
	}

	void Divide(int Number)
	{

		if (Number == 0)
		{
			Number	= 1;
		}

		_IntputValue = Number;
		_PreviousResult = _Result;
		_Result /= _IntputValue;
		_OpType = "Dividing";
	}

	void Multiply(int Number)
	{
		_IntputValue = Number;
		_PreviousResult = _Result;
		_Result *= _IntputValue;
		_OpType = "Multiplying";
	}

	void PrintResult()
	{
		if (IsCancelingOrClearResult())
		{
			cout << "Result After " << _OpType << " is: " << _Result << endl;
		}
		else
		{
			cout << "Result After " << _OpType << " " << _IntputValue << " is: " << _Result << endl;
		}
	}


	
	//Another way
	/*
private:

	float _Result = 0;
	float _LastNumber = 0;
	string _LastOp = "Clear";
	float _PreviousResult = 0;

	bool _IsZero(float Number)
	{
		return (Number == 0);
	}


public:

	void Add(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Result += Number;
		_LastOp = "Adding";
	}

	void Subtract(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Result -= Number;
		_LastOp = "Subtracting";
	}

	void Divide(float Number)
	{
		_LastNumber = Number;

		if (_IsZero(Number))
		{
			Number = 1;
		}

		_PreviousResult = _Result;
		_Result /= Number;
		_LastOp = "Dividing";
	}

	void Multiply(float Number)
	{
		_LastNumber = Number;
		_PreviousResult = _Result;
		_Result *= Number;
		_LastOp = "Multiplying";
	}

	float GetFinalResult()
	{
		return _Result;
	}

	void Clear()
	{
		_LastNumber = 0;
		_LastOp = "Clear";
		_PreviousResult = _Result;
		_Result = 0;
	}


	void CansleLastOp()
	{
		_LastNumber = 0;
		_LastOp = "Cansling last Op";
		_Result = _PreviousResult;
	}

	void PrintResult()
	{
		if (_LastOp == "Cancelling Last Operation")
		{
        cout << "Result After " << _LastOp <<  " is: " << _Result << endl;
		}
		else
		{
         cout << "Result After " << _LastOp << " " << _LastNumber << " is: " << _Result << endl;
		}
	}


		*/


	//Another way2
	/*

	private:
		int _InputNumber = 0;
		int _Result = 0;
		enum enOperations{enAdd =1,ensub,enDiv,enMult,enClear};
		enOperations SelectedOp;


	public:

		int Add(int Number)
		{
			_InputNumber = Number;
			SelectedOp = enAdd;
			return _Result += Number;
		}

		int subtract(int Number)
		{
			_InputNumber = Number;
			SelectedOp = ensub;
			return _Result -= Number;
		}

		int Multiply(int Number)
		{
			_InputNumber = Number;
			SelectedOp = enMult;
			return _Result *= Number;
		}

		int Divide(int Number)
		{
			SelectedOp = enDiv;
			_InputNumber = Number;

			if (Number == 0)
			{
				Number = 1;
			}

			return _Result /= Number;
		}

		string PrintOpText()
		{
			switch (SelectedOp)
			{
			case enOperations::enAdd:
				return " Adding ";

			case enOperations::ensub:
				return " Subtracting ";

			case enOperations::enMult:
				return " Multiplying ";

			case enOperations::enDiv:
				return " Dividing ";

			case enOperations::enClear:
				return " Clearing ";
			}
		}

		void PrintReuslt()
		{
			cout << "Result After" << PrintOpText() << " " << _InputNumber << "is: " << _Result << endl;
		}

		*/


	//Another way3
	/*
private:
	float _Result = 0;
	float _lastNumber = 0;
	float _LastResult = 0;
	string _op = "";

	void SetResult(float Result)
	{
		_Result = Result;
	}

	float GetResult()
	{
		return _Result;
	}

	void SetLastResult(float LastResult)
	{
		_LastResult = LastResult;
	}

	float GetLastResutl()
	{
		return _LastResult;
	}

	void SetLastNumber(float LastNumber)
	{
		_lastNumber = LastNumber;
	}

	float GetLastNumber()
	{
		return _lastNumber;
	}

	void SetOp(string Op)
	{
		_op = Op;
	}

	string GetOp()
	{
		return _op;
	}

	bool IsOpClearOrCancel()
	{
		return GetOp() == "Clearing" || GetOp() == "Canceling Last Op";
	}

	public:

		void Add(float Number)
		{
			SetOp("Adding");
			SetLastNumber(Number);
			SetLastResult(GetResult());
			SetResult(GetResult() + Number);
		}

		void Subtract(float Number)
		{
			SetOp("Subtracting");
			SetLastNumber(Number);
			SetLastResult(GetResult());
			SetResult(GetResult() - Number);
		}

		void Multiply(float Number)
		{
			SetOp("Multiplying");
			SetLastNumber(Number);
			SetLastResult(GetResult());
			SetResult(GetResult() * Number);
		
		}

		void Divide(float Number)
		{

			if (Number <= 0)
			{
				Number = 1;
			}


			SetOp("Dividing");
			SetLastNumber(Number);
			SetLastResult(GetResult());
			SetResult(GetResult() / Number);
		}

		void Clear()
		{
			SetOp("Clearing");
			SetResult(0);
		}

		void CancelLastOp()
		{
			SetOp("Canceling Last Op");
			SetResult(GetLastResutl());
		}



		void PrintResult()
		{
			if (IsOpClearOrCancel())
			{
				cout << "Result After " << GetOp() << " is: " << GetResult() << endl;
			}
			else
			{
				cout << "Result After " << GetOp() << " " << GetLastNumber() << " is: " << GetResult() << endl;
			}
		}

		*/
};


int main()
{
	clsCalculator Calculator1;

	Calculator1.Clear();

	Calculator1.Add(10);
	Calculator1.PrintResult();

	Calculator1.Add(100);
	Calculator1.PrintResult();

	Calculator1.Subtract(20);
	Calculator1.PrintResult();

	Calculator1.Divide(0);
	Calculator1.PrintResult();

	Calculator1.Divide(2);
	Calculator1.PrintResult();

	Calculator1.Multiply(3);
	Calculator1.PrintResult();

	Calculator1.CancelLastOp();
	Calculator1.PrintResult();

	Calculator1.Clear();
	Calculator1.PrintResult();



	system("pause >0");
	return 0;
}
#pragma once
#include "clsDate.h"
#include <iostream>
using namespace std;

class clsPeriod
{
public:

    clsDate StartDate;
    clsDate EndDate;

    clsPeriod(clsDate StartDate, clsDate DateTo)
    {
        this->StartDate = StartDate;
        this->EndDate = DateTo;

    }

    void Print()
    {
        cout << "Period Start: ";
        StartDate.Print();


        cout << "Period End: ";
        EndDate.Print();


    }

    static bool IsOverlapPeriods(clsPeriod Period1, clsPeriod Period2)
    {

        if (
            clsDate::CompareDates(Period2.EndDate, Period1.StartDate) == clsDate::enDateCompare::Before
            ||
            clsDate::CompareDates(Period2.StartDate, Period1.EndDate) == clsDate::enDateCompare::After
            )
            return false;
        else
            return true;

    }


    bool IsOverLapWith(clsPeriod Period2)
    {
        return IsOverlapPeriods(*this, Period2);
    }

    static int GetPeriodLengthInDays(clsPeriod Period, bool IncludeEndDate = false)
    {
        return clsDate::GetDiffInDaysBetWeenTwoDates(Period.StartDate, Period.EndDate, IncludeEndDate);
    }

    int GetPeriodLengthInDays(bool IncludeEndDate = false)
    {
        return GetPeriodLengthInDays(*this, IncludeEndDate);
    }

    static  bool IsDateInPeriod(clsPeriod Period, clsDate Date)
    {
        return !(clsDate::CompareDates(Date, Period.StartDate) == clsDate::enDateCompare::Before ||
            clsDate::CompareDates(Date, Period.EndDate) == clsDate::enDateCompare::After);
    }

    bool IsDateInPeriod(clsDate Date)
    {
        return IsDateInPeriod(*this, Date);
    }

    static int CountOverlapDays(clsPeriod Period1, clsPeriod Period2)
    {
        int Period1Length = GetPeriodLengthInDays(Period1, true);
        int Period2Length = GetPeriodLengthInDays(Period2, true);
        int OverlapDays = 0;

        if (!IsOverlapPeriods(Period1, Period2))
            return 0;

        if (Period1Length < Period2Length)
        {
            while (clsDate::IsDate1BeforeDate2(Period1.StartDate, Period1.EndDate))
            {
                if (IsDateInPeriod(Period2, Period1.StartDate))
                    OverlapDays++;

                Period1.StartDate = clsDate::IncreaseDateByOneDay(Period1.StartDate);
            }
            if (IsDateInPeriod(Period2, Period1.EndDate))
                OverlapDays++;
        }
        else
        {
            while (clsDate::IsDate1BeforeDate2(Period2.StartDate, Period2.EndDate))
            {
                if (IsDateInPeriod(Period1, Period2.StartDate))
                    OverlapDays++;

                Period2.StartDate = clsDate::IncreaseDateByOneDay(Period2.StartDate);
            }
            if (IsDateInPeriod(Period1, Period2.EndDate))
                OverlapDays++;
        }

        return OverlapDays;
    }

    int CountOverlapDays(clsPeriod Period2)
    {
        return CountOverlapDays(*this, Period2);
    }
};



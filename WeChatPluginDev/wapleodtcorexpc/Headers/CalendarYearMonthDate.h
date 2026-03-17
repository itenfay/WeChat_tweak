//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CalendarYearMonthDate : NSObject
{
    long long _year;
    long long _month;
}

@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;

@end


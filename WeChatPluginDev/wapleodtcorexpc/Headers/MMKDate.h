//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKDate : NSObject
{
    int _year;
    int _month;
    int _day;
}

+ (id)KDateWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
@property(readonly, nonatomic) int day; // @synthesize day=_day;
@property(readonly, nonatomic) int month; // @synthesize month=_month;
@property(readonly, nonatomic) int year; // @synthesize year=_year;
- (id)description;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;

@end


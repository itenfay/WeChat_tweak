//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPaySelectDateItemData : NSObject
{
    long long _year;
    long long _month;
    long long _day;
}

@property long long day; // @synthesize day=_day;
@property long long month; // @synthesize month=_month;
@property long long year; // @synthesize year=_year;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


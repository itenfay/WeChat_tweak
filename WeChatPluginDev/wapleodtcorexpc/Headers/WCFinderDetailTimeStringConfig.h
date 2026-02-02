//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderDetailTimeStringConfig : NSObject
{
    _Bool _showDetailTime;
    NSString *_beforeOneMinText;
    NSString *_beforeMinFormatText;
    NSString *_beforeHourFormatText;
    NSString *_yesterdayText;
    NSString *_beforeDayFormatText;
    NSString *_beforeWeekFormatText;
    NSString *_beforeMonthFormatText;
    NSString *_overOneYearFormatText;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *overOneYearFormatText; // @synthesize overOneYearFormatText=_overOneYearFormatText;
@property(retain, nonatomic) NSString *beforeMonthFormatText; // @synthesize beforeMonthFormatText=_beforeMonthFormatText;
@property(retain, nonatomic) NSString *beforeWeekFormatText; // @synthesize beforeWeekFormatText=_beforeWeekFormatText;
@property(retain, nonatomic) NSString *beforeDayFormatText; // @synthesize beforeDayFormatText=_beforeDayFormatText;
@property(retain, nonatomic) NSString *yesterdayText; // @synthesize yesterdayText=_yesterdayText;
@property(retain, nonatomic) NSString *beforeHourFormatText; // @synthesize beforeHourFormatText=_beforeHourFormatText;
@property(retain, nonatomic) NSString *beforeMinFormatText; // @synthesize beforeMinFormatText=_beforeMinFormatText;
@property(retain, nonatomic) NSString *beforeOneMinText; // @synthesize beforeOneMinText=_beforeOneMinText;
@property(nonatomic) _Bool showDetailTime; // @synthesize showDetailTime=_showDetailTime;

@end


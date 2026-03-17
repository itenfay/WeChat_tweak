//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCHomepageYearMonthData : NSObject
{
    unsigned int _year;
    unsigned int _month;
    unsigned long long _lastId;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastId;
+ (void)PBArrayAdd_month;
+ (void)PBArrayAdd_year;
@property(nonatomic) unsigned long long lastId; // @synthesize lastId=_lastId;
@property(nonatomic) unsigned int month; // @synthesize month=_month;
@property(nonatomic) unsigned int year; // @synthesize year=_year;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToYearMonthData:(id)arg1;
- (id)initWithSnsYearMonthData:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end


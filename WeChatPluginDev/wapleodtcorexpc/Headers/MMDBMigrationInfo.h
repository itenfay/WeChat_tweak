//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface MMDBMigrationInfo : NSObject
{
    _Bool _disable;
    _Bool _hasCheckEnd;
    int _checkEndTimes;
    NSDate *_start;
    NSDate *_end;
    long long _size;
}

+ (void)initialize;
+ (void)PBArrayAdd_checkEndTimes;
+ (void)PBArrayAdd_hasCheckEnd;
+ (void)PBArrayAdd_disable;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_start;
- (void).cxx_destruct;
@property(nonatomic) int checkEndTimes; // @synthesize checkEndTimes=_checkEndTimes;
@property(nonatomic) _Bool hasCheckEnd; // @synthesize hasCheckEnd=_hasCheckEnd;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


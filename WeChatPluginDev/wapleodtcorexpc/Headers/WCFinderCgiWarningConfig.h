//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCgiWarningConfig : NSObject
{
    long long _cgiNumber;
    long long _failCount;
    long long _firstUpdateTimeStamp;
}

+ (long long)genFailLimitByCgiNumber:(long long)arg1;
+ (long long)genExpireDurationByCgiNumber:(long long)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_firstUpdateTimeStamp;
+ (void)PBArrayAdd_failCount;
+ (void)PBArrayAdd_cgiNumber;
@property(nonatomic) long long firstUpdateTimeStamp; // @synthesize firstUpdateTimeStamp=_firstUpdateTimeStamp;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(nonatomic) long long cgiNumber; // @synthesize cgiNumber=_cgiNumber;
- (_Bool)exceedLimit;
- (void)resetValue;
- (_Bool)isExpired;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


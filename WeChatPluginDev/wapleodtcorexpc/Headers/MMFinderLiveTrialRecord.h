//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveTrialRecord : NSObject
{
    unsigned int _remainTime;
    unsigned int _trialLimitTime;
    unsigned int _trialEndTime;
    unsigned long long _liveId;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_trialLimitTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)trialLimitTime;
+ (id)swift_trialEndTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)trialEndTime;
+ (id)swift_remainTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)remainTime;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)liveId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
@property(nonatomic) unsigned int trialEndTime; // @synthesize trialEndTime=_trialEndTime;
@property(nonatomic) unsigned int trialLimitTime; // @synthesize trialLimitTime=_trialLimitTime;
@property(nonatomic) unsigned int remainTime; // @synthesize remainTime=_remainTime;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end


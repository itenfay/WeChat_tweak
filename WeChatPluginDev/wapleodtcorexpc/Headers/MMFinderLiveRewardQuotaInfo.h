//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveRewardQuotaInfo : NSObject
{
    _Bool _lastFaceVaried;
    unsigned int _lastExceedRewardQuotaRemindMsgTime;
    unsigned long long _lastRewardQuota;
    unsigned long long _lastWecoinBalance;
    unsigned long long _lastExceedRewardQuota;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastExceedRewardQuota;
+ (void)PBArrayAdd_lastFaceVaried;
+ (void)PBArrayAdd_lastWecoinBalance;
+ (void)PBArrayAdd_lastRewardQuota;
+ (void)PBArrayAdd_lastExceedRewardQuotaRemindMsgTime;
@property(nonatomic) unsigned long long lastExceedRewardQuota; // @synthesize lastExceedRewardQuota=_lastExceedRewardQuota;
@property(nonatomic) _Bool lastFaceVaried; // @synthesize lastFaceVaried=_lastFaceVaried;
@property(nonatomic) unsigned long long lastWecoinBalance; // @synthesize lastWecoinBalance=_lastWecoinBalance;
@property(nonatomic) unsigned long long lastRewardQuota; // @synthesize lastRewardQuota=_lastRewardQuota;
@property(nonatomic) unsigned int lastExceedRewardQuotaRemindMsgTime; // @synthesize lastExceedRewardQuotaRemindMsgTime=_lastExceedRewardQuotaRemindMsgTime;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


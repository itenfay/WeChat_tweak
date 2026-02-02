//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EmotionSendCountWrap
{
    _Bool _hasRewarded;
    unsigned int _totalSendTimes;
    unsigned int _lastShowTipsTime;
    int _retryTimes;
}

+ (void)initialize;
+ (void)PBArrayAdd_hasRewarded;
+ (void)PBArrayAdd_retryTimes;
+ (void)PBArrayAdd_lastShowTipsTime;
+ (void)PBArrayAdd_totalSendTimes;
@property(nonatomic) _Bool hasRewarded; // @synthesize hasRewarded=_hasRewarded;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) unsigned int lastShowTipsTime; // @synthesize lastShowTipsTime=_lastShowTipsTime;
@property(nonatomic) unsigned int totalSendTimes; // @synthesize totalSendTimes=_totalSendTimes;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool needShowTips;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


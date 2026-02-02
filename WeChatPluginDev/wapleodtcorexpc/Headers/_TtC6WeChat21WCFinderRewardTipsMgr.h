//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat21WCFinderRewardTipsMgr
{
    MISSING_TYPE *rewardTipsInfoList;
}

- (void).cxx_destruct;
- (id)init;
- (void)showRewardTipsInfoWithTriggerType:(unsigned long long)arg1 params:(id)arg2;
- (void)prefetchJumpInfoWithTriggerTypes:(id)arg1;
- (void)prefetchJumpInfoIfNeedWithTriggerType:(unsigned long long)arg1;
- (id)popRewardTipsInfoWithTriggerType:(unsigned long long)arg1;
- (id)rewardTipsInfoWithTriggerType:(unsigned long long)arg1;
- (void)updateRewardTipsList:(id)arg1;
- (void)handleRewardTipsListBypMessageWithXml:(id)arg1;

@end


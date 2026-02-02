//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, EmotionRewardResponseInfo, NSString;

@interface LiteAppJsApiEmoticonOpenStoreBegReward
{
    _Bool _didOpenBegVC;
    NSString *_pid;
    EmoticonStoreItem *_storeItem;
    long long _extranceScene;
    EmotionRewardResponseInfo *_rewardInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didOpenBegVC; // @synthesize didOpenBegVC=_didOpenBegVC;
@property(retain, nonatomic) EmotionRewardResponseInfo *rewardInfo; // @synthesize rewardInfo=_rewardInfo;
@property(nonatomic) long long extranceScene; // @synthesize extranceScene=_extranceScene;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (id)getViewController;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)endWithOK;
- (void)openBegVC;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(_Bool)arg3;
- (void)dealloc;

@end


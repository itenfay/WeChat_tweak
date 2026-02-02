//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;
@protocol WCAdDynamicUpdateLogicDelegate, WCLogicMgrDelegate;

@interface WCAdDynamicUpdateLogic
{
    id <WCAdDynamicUpdateLogicDelegate> _delegate;
    id <WCLogicMgrDelegate> _wcLogicMgrDelegate;
    NSMutableDictionary *_updateTimeDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *updateTimeDic; // @synthesize updateTimeDic=_updateTimeDic;
@property(nonatomic) __weak id <WCLogicMgrDelegate> wcLogicMgrDelegate; // @synthesize wcLogicMgrDelegate=_wcLogicMgrDelegate;
@property(nonatomic) __weak id <WCAdDynamicUpdateLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getUpdateInterval:(unsigned int)arg1 dataItem:(id)arg2;
- (id)genKeyWithSnsId:(id)arg1 actionType:(unsigned int)arg2;
- (void)setUpdateTime:(id)arg1 actionType:(unsigned int)arg2 updateTime:(long long)arg3;
- (long long)getUpdateTime:(id)arg1 actionType:(unsigned int)arg2;
- (_Bool)checkUpdateInterval:(id)arg1 actionType:(unsigned int)arg2 dataItem:(id)arg3;
- (_Bool)handleHotDiscussedBarNumberResponse:(id)arg1 dataItem:(id)arg2;
- (_Bool)handleStateSettingBarNumberResponse:(id)arg1 dataItem:(id)arg2;
- (_Bool)handleHighlightTagNumberResponse:(id)arg1 dataItem:(id)arg2;
- (_Bool)handleFireworkCheerNumberResponse:(id)arg1 dataItem:(id)arg2;
- (_Bool)handleLikeNumberResponse:(id)arg1 dataItem:(id)arg2;
- (_Bool)handleFinderTopicResponse:(id)arg1 dataItem:(id)arg2;
- (_Bool)handleWeAppLiveResponse:(id)arg1 dataItem:(id)arg2;
- (id)getHotDiscussedBarNumberReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)getStateSettingBarNumberReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)getHighlightTagNumberReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)getFireworkCheerNumberReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)getLikeNumberReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)getFinderTopicReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)getWeAppLiveReqData:(id)arg1 ignoreInterval:(_Bool)arg2;
- (id)collectReqDataList:(id)arg1;
- (void)handleAdDynamicUpdateResponse:(id)arg1;
- (void)adDynamicUpdateWithDataList:(id)arg1 dataItem:(id)arg2 uxInfo:(id)arg3 needSpeedy:(_Bool)arg4;
- (void)adDynamicUpdate:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveAnchorExceptionCheckManager, MMTimerLabel, NSString, UIImageView;

@interface MMLiveAchorTimeLabel
{
    MMLiveAnchorExceptionCheckManager *_anchorExceptionCheckManager;
    UIImageView *_networkStateImageView;
    CDUnknownBlockType _anchorExceptionCheckActionWithTypeBlock;
    CDUnknownBlockType _onLiveQualityUpdatedBlock;
    long long _currentNetWorkState;
    MMTimerLabel *_timerLabel;
}

+ (id)networkImageForState:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(readonly, nonatomic) UIImageView *networkStateImageView; // @synthesize networkStateImageView=_networkStateImageView;
@property(nonatomic) long long currentNetWorkState; // @synthesize currentNetWorkState=_currentNetWorkState;
@property(copy, nonatomic) CDUnknownBlockType onLiveQualityUpdatedBlock; // @synthesize onLiveQualityUpdatedBlock=_onLiveQualityUpdatedBlock;
- (void)setAnchorExceptionCheckActionWithTypeBlock:(CDUnknownBlockType)arg1;
- (void)cancelAnchorExceptionCheckActionWithType:(unsigned long long)arg1;
- (void)anchorExceptionCheckActionWithType:(unsigned long long)arg1 isShow:(_Bool)arg2;
- (id)finderLiveTaskId;
@property(readonly, nonatomic) MMLiveAnchorExceptionCheckManager *anchorExceptionCheckManager;
- (void)checkAchorLiveUnNormal:(unsigned int)arg1;
- (void)onLiveQualityUpdated:(id)arg1;
- (void)onLiveProgressUpdated:(unsigned int)arg1;
- (void)onLiveResumed;
- (void)onLivePaused;
- (void)onEnterLive;
- (double)regularWidth;
- (double)iconInnerPadding;
- (void)sizeToFits;
- (void)layoutTimerLabel;
- (void)layoutNetworkStateImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


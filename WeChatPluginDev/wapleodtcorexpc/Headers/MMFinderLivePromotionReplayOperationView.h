//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveReplayGoodsPromoteContentView, MMFinderLiveReplayMessageSource, NSString;
@protocol MMFinderLivePromotionReplayOperationViewDelegate;

@interface MMFinderLivePromotionReplayOperationView
{
    _Bool _supressMessageUpdate;
    id <MMFinderLivePromotionReplayOperationViewDelegate> _promotionReplayOperationDelegate;
    MMFinderLiveReplayMessageSource *_messageSource;
    unsigned long long _lastMessageUpdateTime;
    MMFinderLiveReplayGoodsPromoteContentView *_goodsTipView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReplayGoodsPromoteContentView *goodsTipView; // @synthesize goodsTipView=_goodsTipView;
@property(nonatomic) _Bool supressMessageUpdate; // @synthesize supressMessageUpdate=_supressMessageUpdate;
@property(nonatomic) unsigned long long lastMessageUpdateTime; // @synthesize lastMessageUpdateTime=_lastMessageUpdateTime;
@property(retain, nonatomic) MMFinderLiveReplayMessageSource *messageSource; // @synthesize messageSource=_messageSource;
@property(nonatomic) __weak id <MMFinderLivePromotionReplayOperationViewDelegate> promotionReplayOperationDelegate; // @synthesize promotionReplayOperationDelegate=_promotionReplayOperationDelegate;
- (double)toolViewBottom;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderSeekBegin;
- (void)onVideoPlay;
- (void)gotoShopDetailPageWithProduct:(id)arg1;
- (void)onGoodsBubbleButton;
- (void)onGoodsPromoteContentViewActionButtonClicked:(id)arg1;
- (void)layoutGoodsPubbleTipView;
- (void)hideContents;
- (void)showContents;
- (void)createReplayControlView;
- (void)layoutUI;
- (void)onEnterLive;
- (_Bool)shouldHideBottomMaskWhenCLeanScreen;
- (_Bool)shouldHideTopMaskWhenCLeanScreen;
- (void)unRegisterExtensions;
- (void)registerExtensions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


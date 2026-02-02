//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, EmotionRewardResponseInfo, MMUILabel, MMUIScrollView, MMWebImageView, NSString, StoreEmotionRewardLogicObject, UIImageView;

@interface MMEmotionStoreRewardThanksViewController
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    StoreEmotionRewardLogicObject *m_rewardLogic;
    MMUIScrollView *m_scrollView;
    MMWebImageView *m_thanksRewardImage;
    UIImageView *m_loadingGif;
    MMUILabel *m_thanksTips;
}

- (void).cxx_destruct;
- (void)onLoadImageOK:(id)arg1;
- (void)onClose;
- (double)updateColorEggTipsViewFromMarginTop:(double)arg1;
- (void)initColorEggTipsView;
- (double)updateThanksRewardImageFromMarginTop:(double)arg1;
- (void)initThanksRewardImage;
- (void)updateScrollView;
- (void)initScrollView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 RewardLogic:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


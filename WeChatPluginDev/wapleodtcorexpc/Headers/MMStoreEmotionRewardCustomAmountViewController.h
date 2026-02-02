//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreItem, EmotionRewardResponseInfo, MMUIButton, MMUIScrollView, MMUIView, NSPredicate, NSString, StoreEmotionRewardLogicObject, WCUITextField;

@interface MMStoreEmotionRewardCustomAmountViewController
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    StoreEmotionRewardLogicObject *m_rewardLogic;
    MMUIScrollView *m_scrollView;
    MMUIView *m_inputArea;
    WCUITextField *m_inputTextField;
    MMUIButton *m_rewardBtn;
    NSString *m_lastInputValidInput;
    NSPredicate *m_regexPredicate;
}

- (void).cxx_destruct;
- (void)onClose;
- (void)onClickRewardBtn;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldBeginEditing:(id)arg1;
- (double)updateRewardBtnFromMarginTop:(double)arg1;
- (void)initRewardBtn;
- (double)updateInputAreaViewFromMarginTop:(double)arg1;
- (void)initInputAreaView;
- (void)updateScrollView;
- (void)initScrollView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 RewardLogic:(id)arg3;

@end


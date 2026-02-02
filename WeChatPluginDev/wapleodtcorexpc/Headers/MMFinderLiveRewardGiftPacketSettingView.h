//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRewardLevelConfigs, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMLiveWeCoinLabel, MMTableView, MMUIButton, MMUILabel, NSArray, NSIndexPath, NSString, UIImageView, UIView;
@protocol MMFinderLiveRewardGiftPacketSettingViewDelegate;

@interface MMFinderLiveRewardGiftPacketSettingView
{
    unsigned int _targetRank;
    MMUILabel *_titleLabel;
    MMUILabel *_subtitleLabel;
    MMUILabel *_totalPriceHeadingLabel;
    id <MMFinderLiveRewardGiftPacketSettingViewDelegate> _operationDelegate;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _scene;
    UIView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUIButton *_doneButton;
    NSArray *_viewModelList;
    UIView *_headingView;
    MMUILabel *_totalPriceLabel;
    UIImageView *_coinIconView;
    MMLiveWeCoinLabel *_balanceLabel;
    UIImageView *_balanceArrowImageView;
    MMTableView *_rewardGiftTableView;
    NSIndexPath *_currentActiveIndexPath;
    MMFinderLiveRewardLevelConfigs *_levelConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRewardLevelConfigs *levelConfig; // @synthesize levelConfig=_levelConfig;
@property(nonatomic) unsigned int targetRank; // @synthesize targetRank=_targetRank;
@property(retain, nonatomic) NSIndexPath *currentActiveIndexPath; // @synthesize currentActiveIndexPath=_currentActiveIndexPath;
@property(retain, nonatomic) MMTableView *rewardGiftTableView; // @synthesize rewardGiftTableView=_rewardGiftTableView;
@property(retain, nonatomic) UIImageView *balanceArrowImageView; // @synthesize balanceArrowImageView=_balanceArrowImageView;
@property(retain, nonatomic) MMLiveWeCoinLabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UIImageView *coinIconView; // @synthesize coinIconView=_coinIconView;
@property(retain, nonatomic) MMUILabel *totalPriceLabel; // @synthesize totalPriceLabel=_totalPriceLabel;
@property(retain, nonatomic) UIView *headingView; // @synthesize headingView=_headingView;
@property(retain, nonatomic) NSArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(retain, nonatomic) MMUIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveRewardGiftPacketSettingViewDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
@property(retain, nonatomic) MMUILabel *totalPriceHeadingLabel; // @synthesize totalPriceHeadingLabel=_totalPriceHeadingLabel;
@property(retain, nonatomic) MMUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)onBalanceLabelDidTaped:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)onDoneButtonClicked:(id)arg1;
- (void)closeAction;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)onMMFinderLiveRewardGiftPacketSettingViewCellCheckExceedMaxSelectedItemCount;
- (void)onMMFinderLiveRewardGiftPacketSettingViewCellDidChangedSelectionStatus;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)chargeCoinWithRechargeScene:(unsigned int)arg1;
- (void)updateWecoinBalance:(long long)arg1;
- (void)fetchWecoinBalance;
- (void)updateTargetRank:(unsigned int)arg1;
- (void)reloadAndRefreshData;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (double)contentViewHeight;
- (void)pageSheetWillDisappear;
- (void)layoutSubviews;
- (void)layoutBalanceLabel;
- (void)layoutTotalPriceLabels;
- (void)layoutUI;
- (void)initUI;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1 scene:(unsigned long long)arg2 giftPacketViewModel:(id)arg3 levelConfig:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


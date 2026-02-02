//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePaymentTrialModeCell, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, NSString, UIView;
@protocol MMFinderLivePaymentTrialModeSettingViewDelegate;

@interface MMFinderLivePaymentTrialModeSettingView
{
    id <MMFinderLivePaymentTrialModeSettingViewDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    UIView *_contentView;
    MMLiveHalfScreenTitleBarView *_titleBar;
    UIView *_separatorLine;
    MMFinderLivePaymentTrialModeCell *_durationFromFirstJoinCell;
    MMFinderLivePaymentTrialModeCell *_durationFromLiveStartCell;
    long long _purchaseLivePreviewType;
}

- (void).cxx_destruct;
@property(nonatomic) long long purchaseLivePreviewType; // @synthesize purchaseLivePreviewType=_purchaseLivePreviewType;
@property(retain, nonatomic) MMFinderLivePaymentTrialModeCell *durationFromLiveStartCell; // @synthesize durationFromLiveStartCell=_durationFromLiveStartCell;
@property(retain, nonatomic) MMFinderLivePaymentTrialModeCell *durationFromFirstJoinCell; // @synthesize durationFromFirstJoinCell=_durationFromFirstJoinCell;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBar; // @synthesize titleBar=_titleBar;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLivePaymentTrialModeSettingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (id)liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)updateCellSelectedStatus;
- (void)updatePurchaseLivePreviewType:(long long)arg1;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithPurchaseLivePreviewType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


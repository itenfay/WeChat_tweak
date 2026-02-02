//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicPkPanelMasterView, MMFinderLiveTaskId, MMUIButton, UIView;
@protocol MMFinderLiveConnectMicPkPanelDelegate;

@interface MMFinderLiveConnectMicPkPanel
{
    _Bool _isShowing;
    id <MMFinderLiveConnectMicPkPanelDelegate> _delegate;
    MMUIButton *_navRightQuitPkButton;
    MMUIButton *_navRightFinishPkPrematurelyButton;
    UIView *_containerView;
    MMFinderLiveConnectMicPkPanelMasterView *_masterView;
    MMFinderLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMFinderLiveConnectMicPkPanelMasterView *masterView; // @synthesize masterView=_masterView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMUIButton *navRightFinishPkPrematurelyButton; // @synthesize navRightFinishPkPrematurelyButton=_navRightFinishPkPrematurelyButton;
@property(retain, nonatomic) MMUIButton *navRightQuitPkButton; // @synthesize navRightQuitPkButton=_navRightQuitPkButton;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) __weak id <MMFinderLiveConnectMicPkPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)liveTask;
- (void)checkAndUpdateAfterMicConditionChanged;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)pageSheetDidAppear;
- (unsigned long long)navRightButtonType;
- (void)updateWithModel:(id)arg1 animated:(_Bool)arg2;
- (void)finishPkPrematurelyAction;
- (void)quitPkAction;
- (void)closeAction;
- (id)makeCloseButton;
- (void)initPageSheetConfig;
- (void)layoutSubviews;
- (void)initViews;
- (long long)overrideUserInterfaceStyle;
- (id)initWithTaskId:(id)arg1;

@end


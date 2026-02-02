//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorCustomizeRewardItem, MMFinderLiveAnchorCustomizeRewardNavBar, MMFinderLiveAnchorCustomizeRewardStylePreviewView, MMFinderLiveAnchorCustomizeRewardStyleSelectLogic, MMFinderLiveAnchorCustomizeRewardStyleSelectPanel, MMFinderLiveTaskId, NSObject, UIView;
@protocol MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate;

@interface MMFinderLiveAnchorCustomizeRewardModifyPanel
{
    _Bool _isShowing;
    NSObject<MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate> *_delegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveAnchorCustomizeRewardItem *_rewardItem;
    MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *_logic;
    MMFinderLiveAnchorCustomizeRewardNavBar *_navBar;
    MMFinderLiveAnchorCustomizeRewardStylePreviewView *_previewView;
    MMFinderLiveAnchorCustomizeRewardStyleSelectPanel *_styleSelectPanel;
    UIView *_backgroundView;
    double _keyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectPanel *styleSelectPanel; // @synthesize styleSelectPanel=_styleSelectPanel;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStylePreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardNavBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleSelectLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardItem *rewardItem; // @synthesize rewardItem=_rewardItem;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak NSObject<MMFinderLiveAnchorCustomizeRewardModifyPanelDelegate> *delegate; // @synthesize delegate=_delegate;
- (double)safeAreaTopMargin;
- (double)contentHeight;
- (double)contentWidth;
- (void)onCommitAnchorCustomizeRewardStyleEndWithErrorMsg:(id)arg1 errorPage:(id)arg2;
- (void)onCommitAnchorCustomizeRewardStyleStart;
- (void)onAnchorSelectedStyleResourceEndLoading;
- (void)onAnchorSelectedStyleResourceStartLoading;
- (void)onPreviewPagFileChanged;
- (id)getViewControllerForPresentingImagePicker;
- (id)getViewForPresentingActionSheet;
- (void)onKeyboardHiding:(id)arg1;
- (void)onKeyboardShowing:(id)arg1;
- (void)onAnchorCommitRewardChange;
- (void)onAnchorCancelRewardChange;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (void)layoutSubviews;
- (void)setupNotifications;
- (void)initBackgroundView;
- (void)initStyleSelectPanel;
- (void)initPreviewView;
- (void)initNavBar;
- (void)initDetailView;
- (void)initPageSheetConfig;
- (void)initStyleSelectLogic;
- (id)initWithTaskId:(id)arg1 rewardItem:(id)arg2;

@end


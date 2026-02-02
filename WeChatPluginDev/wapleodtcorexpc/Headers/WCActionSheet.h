//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIColor, UIScrollView, UIView;
@protocol WCActionSheetDelegate;

@interface WCActionSheet
{
    _Bool _shouldHide;
    _Bool _shortIntervalLine;
    _Bool _isDismiss;
    _Bool _shouldRelease;
    _Bool _hasSeplineButton;
    NSString *_cancelButtonTitle;
    NSMutableArray *_buttonTitleList;
    UIView *_pannelView;
    UIView *_titleView;
    UIView *_customHeadView;
    UIView *_backgroundView;
    UIScrollView *_containerView;
    id <WCActionSheetDelegate> _delegateEx;
    NSString *_title;
    long long _destructiveButtonIndex;
    long long _firstOtherButtonIndex;
    long long _cancelButtonIndex;
    long long _m_lastOrientation;
    UIColor *_cancelBtnTextColor;
    unsigned long long _numberOfButtons;
    UIView *_customView;
    id _userInfo;
    CDUnknownBlockType _cancelEventAction;
    long long _titleNumberOfLines;
    unsigned long long _preferOrientationMask;
    UIView *_fixedHeaderView;
    double _currSceneWidth;
}

+ (long long)getActionSheetWidthFor:(id)arg1;
+ (long long)getActionSheetWidth;
+ (id)getCurrentShowingActionSheet;
- (void).cxx_destruct;
@property(nonatomic) double currSceneWidth; // @synthesize currSceneWidth=_currSceneWidth;
@property(nonatomic) _Bool hasSeplineButton; // @synthesize hasSeplineButton=_hasSeplineButton;
@property(nonatomic) _Bool shouldRelease; // @synthesize shouldRelease=_shouldRelease;
@property(retain, nonatomic) UIView *fixedHeaderView; // @synthesize fixedHeaderView=_fixedHeaderView;
@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
@property(nonatomic) unsigned long long preferOrientationMask; // @synthesize preferOrientationMask=_preferOrientationMask;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(copy, nonatomic) CDUnknownBlockType cancelEventAction; // @synthesize cancelEventAction=_cancelEventAction;
@property(nonatomic) _Bool shortIntervalLine; // @synthesize shortIntervalLine=_shortIntervalLine;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(nonatomic) unsigned long long numberOfButtons; // @synthesize numberOfButtons=_numberOfButtons;
@property(retain, nonatomic) UIColor *cancelBtnTextColor; // @synthesize cancelBtnTextColor=_cancelBtnTextColor;
@property(nonatomic) _Bool shouldHide; // @synthesize shouldHide=_shouldHide;
@property(nonatomic) long long m_lastOrientation; // @synthesize m_lastOrientation=_m_lastOrientation;
@property(nonatomic) long long firstOtherButtonIndex; // @synthesize firstOtherButtonIndex=_firstOtherButtonIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCActionSheetDelegate> delegateEx; // @synthesize delegateEx=_delegateEx;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *customHeadView; // @synthesize customHeadView=_customHeadView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *pannelView; // @synthesize pannelView=_pannelView;
@property(retain, nonatomic) NSMutableArray *buttonTitleList; // @synthesize buttonTitleList=_buttonTitleList;
@property(retain, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (_Bool)isContainButtonTitle:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addSubViewToContainerView:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnDefaultButtonTapped:(id)arg1;
- (void)addTapRecognizer;
- (void)tapOut:(id)arg1;
- (void)onDismissCompletelyWithClickedButtonIndex:(long long)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)getFixedHeaderViewInWidth:(double)arg1;
- (double)getCustomView:(double)arg1;
- (void)reloadInnerView;
- (void)placeBadgeView:(id)arg1 AfterTitle:(id)arg2;
- (id)makeBadgeViewByRedDotInfo:(id)arg1;
- (id)makeCustomView:(id)arg1;
- (id)makeNormalView:(id)arg1;
- (id)destructiveButtonTitleColor;
- (id)cancelButtonTitleColor;
- (id)defaultButtonTitleColor;
- (id)buttonHighlightedBackgroundColor;
- (id)buttonBackgroundColor;
- (id)titleLabelTextColor;
- (id)seperateLineBackgroundColor;
- (id)sepBarBackgroundColor;
- (id)titleViewBackgroundColor;
- (id)containerViewBackgroundColor;
- (id)genGrayBarView;
- (id)makePannelViewWithButtonList:(id)arg1 withCancelButtonTitle:(id)arg2;
- (id)makeTitleViewWithTitle:(id)arg1;
- (id)getCustomHeadView;
- (void)onSheetItem:(id)arg1 makeView:(id)arg2;
- (id)makeItemViewWithItem:(id)arg1;
- (double)containerViewOriginXInIphone;
- (double)heightOfWholeSheetExceptTitleView;
- (double)heightOfWholeSheet;
- (double)maxHeightForTitleView;
- (long long)actionSheetWidth;
- (long long)addCustomViewWithItem:(id)arg1;
- (long long)addCustomViewWithTitle:(id)arg1 fontSize:(double)arg2 fontColor:(id)arg3 WithDesc:(id)arg4 descFontSize:(double)arg5 descFontColor:(id)arg6 enable:(_Bool)arg7;
- (void)replaceOldTitle:(id)arg1 toNewTitle:(id)arg2 isCustom:(_Bool)arg3;
- (void)appendButtonTitle:(id)arg1 atIndex:(int)arg2;
- (void)showInView:(id)arg1;
- (void)setButtonTextColor:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCancelButtonTextColor:(id)arg1;
@property(nonatomic) long long destructiveButtonIndex; // @synthesize destructiveButtonIndex=_destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
- (id)buttonTitleAtIndex:(long long)arg1;
- (unsigned long long)numberOfButtonsExcludingCancelButton;
- (void)removeSeplineButton;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2 ImageEdgeInsets:(struct UIEdgeInsets)arg3 TitleEdgeInsets:(struct UIEdgeInsets)arg4 AccessibilityTraits:(unsigned long long)arg5;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2 ImageEdgeInsets:(struct UIEdgeInsets)arg3 TitleEdgeInsets:(struct UIEdgeInsets)arg4 ContentEdgeInsets:(struct UIEdgeInsets)arg5;
- (long long)addIconViewWithTitle:(id)arg1 IconImage:(id)arg2 ImageEdgeInsets:(struct UIEdgeInsets)arg3 TitleEdgeInsets:(struct UIEdgeInsets)arg4;
- (long long)addButtonWithItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)addButtonWithTitle:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)setCancelButtonTitle:(id)arg1 eventAction:(CDUnknownBlockType)arg2;
- (long long)addDestructiveButtonWithTitle:(id)arg1 eventAction:(CDUnknownBlockType)arg2;
- (long long)addIconViewWithTitle:(id)arg1 iconImage:(id)arg2 eventAction:(CDUnknownBlockType)arg3;
- (long long)addButtonWithTitle:(id)arg1 eventAction:(CDUnknownBlockType)arg2;
- (long long)addDestructiveButtonWithTitle:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
@property(nonatomic) __weak id <WCActionSheetDelegate> delegate;
- (void)onWindowSceneSizeChanged;
- (_Bool)shouldHandleStatusBarAppearance;
- (_Bool)accessibilityPerformEscape;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)shouldHideOnRotate;
- (void)onMainWindowFrameChanged;
- (void)onTopBarFrameChanged;
- (void)setupRootViewController;
- (double)getHeightOfTitle:(id)arg1;
- (double)getHeightOfItem:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setActionSheetName:(id)arg1;
- (id)getActionSheetName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


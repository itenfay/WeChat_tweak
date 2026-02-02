//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString, UIButton, UIImage, UILabel, UIView, UIVisualEffectView, WAContact;
@protocol WAAppActionSheetDelegate;

@interface WAAppActionSheet
{
    WAContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    NSString *m_destructiveTitle;
    UIImage *m_fakeViewImage;
    _Bool m_isLandScape;
    _Bool m_isDismissing;
    _Bool _isUseWeAppModule;
    _Bool _isHideAppInfoBtn;
    _Bool _isHideCancelBtn;
    id <WAAppActionSheetDelegate> m_delegate;
    UIView *_interateView;
    UIView *_containerView;
    long long _menuState;
    UIVisualEffectView *_blurView;
    NSMutableArray *_btnArray;
    UIButton *_destructiveBtn;
    UIButton *_cancelBtn;
    UILabel *_headerTitleLabel;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *destructiveBtn; // @synthesize destructiveBtn=_destructiveBtn;
@property(retain, nonatomic) NSMutableArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool isHideCancelBtn; // @synthesize isHideCancelBtn=_isHideCancelBtn;
@property(nonatomic) _Bool isHideAppInfoBtn; // @synthesize isHideAppInfoBtn=_isHideAppInfoBtn;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) _Bool isUseWeAppModule; // @synthesize isUseWeAppModule=_isUseWeAppModule;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) _Bool m_isDismissing; // @synthesize m_isDismissing;
@property(nonatomic) _Bool m_isLandScape; // @synthesize m_isLandScape;
@property(nonatomic) __weak id <WAAppActionSheetDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)isSmallScreenLandscape;
- (id)setupAppInfoView:(double)arg1;
- (void)onLongPressHeaderButtonLabel:(id)arg1;
- (void)addLongPressGestureForHeaderButton:(id)arg1;
- (void)_releaseViews;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (void)onCancelButtonClick:(id)arg1;
- (void)onDestructiveButtonClick:(id)arg1;
- (void)onHeaerButtonClicked:(id)arg1;
- (void)onStateViewClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (id)genWeAppInfoBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (id)genDestructiveBtn;
- (id)genNormalBtn:(id)arg1;
- (id)genPrivacyStateView;
- (_Bool)isSupportVisualEffect;
- (void)initInterateView;
- (id)setupButtonsView;
- (void)initContainerView;
- (void)setDebugTitles:(id)arg1;
- (_Bool)isVisible;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)getViewHeight;
- (double)getViewWidth;
- (void)didRotate:(id)arg1;
- (double)getActionSheetWidth;
- (id)getHeaderButtonTitle:(id)arg1;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 appType:(unsigned long long)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, UIButton, UIColor, UIView, WAContact;
@protocol WAGameActionSheetDelegate;

@interface WAGameActionSheet
{
    WAContact *m_contact;
    unsigned long long m_appType;
    NSArray *m_btnTitles;
    NSArray *m_debugTitles;
    NSString *m_cancelTitle;
    _Bool m_isLandScape;
    _Bool m_isNewGroup;
    double kButtonFontSize;
    double MENU_ICON_LRMARGIN;
    double MENU_ICON_SIZE;
    double MENU_FONT_SIZE;
    double MENU_TO_TITLE;
    double kButtonHeight;
    double kHeaderButtonIconSize;
    double WAActivityHeadHonrizonMargin;
    UIColor *kMaskViewBGColor;
    double kMaskViewBGAlpha;
    UIColor *kContainerViewBGColor;
    UIColor *kMenuButtonColor;
    UIColor *kMenuButtonHighlightColor;
    UIColor *kMenuBorderColor;
    UIColor *kButtonTitleColor;
    UIColor *kMenuTitleColor;
    long long BLUR_EFFECT_TYPE;
    double kActionSheetWidth;
    double kBorderWidth;
    _Bool _isUseWeAppModule;
    _Bool _isDismissForbidAnimation;
    id <WAGameActionSheetDelegate> _delegate;
    long long _actionSheetStyle;
    UIView *_maskView;
    UIView *_containerView;
    UIButton *_cancelBtn;
    UIView *_parentView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long actionSheetStyle; // @synthesize actionSheetStyle=_actionSheetStyle;
@property(nonatomic) __weak id <WAGameActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDismissForbidAnimation; // @synthesize isDismissForbidAnimation=_isDismissForbidAnimation;
@property(nonatomic) _Bool isUseWeAppModule; // @synthesize isUseWeAppModule=_isUseWeAppModule;
- (struct UIEdgeInsets)realSafeAreaInsets;
- (_Bool)isSmallScreenLandscape;
- (double)getScreenHeight;
- (double)getScreenWidth;
- (double)getActionSheetWidth;
- (void)didRotate:(id)arg1;
- (void)onCancelButtonClick:(id)arg1;
- (void)onHeaderButtonClicked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (void)onMenuButtonClicked:(id)arg1;
- (id)genHeaderBtnWithContact:(id)arg1 appType:(unsigned long long)arg2;
- (id)genNormalBtn:(id)arg1;
- (id)genboundaryLine:(struct CGSize)arg1;
- (id)setupMenuView:(double)arg1;
- (id)setupButtonsView;
- (double)endButtonGroups:(id)arg1 originY:(double)arg2;
- (double)addButtonToView:(id)arg1 button:(id)arg2 originY:(double)arg3;
- (void)setupContainerView;
- (void)setupMaskView;
- (void)setStyle:(long long)arg1;
- (void)setDebugTitles:(id)arg1;
- (_Bool)isVisible;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithUsrName:(id)arg1 orientation:(long long)arg2 appType:(unsigned long long)arg3 cancelButtonTitle:(id)arg4 buttonTitleArray:(id)arg5 delegate:(id)arg6;
- (double)LANDSCAPEFLOAT:(id)arg1 withPortrait:(id)arg2;
- (id)STYLECOLORWithLight:(id)arg1 ligthAlpha:(double)arg2 dark:(id)arg3 darkAlpha:(double)arg4;

@end


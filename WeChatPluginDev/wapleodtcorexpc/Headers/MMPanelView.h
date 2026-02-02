//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIButton, UILabel, UIView, WCPayCss;

@interface MMPanelView
{
    MMUIButton *_leftBarButton;
    UIButton *_rightBarButton;
    UIView *_containerView;
    UIView *_headerView;
    UIView *_customContainerView;
    UIView *_footerView;
    UIButton *_leftButton;
    UIView *_bottomButtonInternalView;
    UIButton *_rightButton;
    UIView *_customView;
    double _customViewHeight;
    NSString *_leftTitle;
    NSString *_rightTitle;
    CDUnknownBlockType _leftHandler;
    CDUnknownBlockType _rightHandler;
    CDUnknownBlockType _leftBarHandler;
    CDUnknownBlockType _rightBarHandler;
    unsigned long long _leftBarStyle;
    unsigned long long _rightBarStyle;
    NSString *_title;
    NSString *_subTitle;
    long long _titleAlignment;
    UILabel *_titleMainLabel;
    UILabel *_titleDescLabel;
    double _navigationY;
    WCPayCss *_css;
}

+ (id)ShowPanelWithCustomView:(id)arg1 customViewHeight:(double)arg2 leftTitle:(id)arg3 leftHandler:(CDUnknownBlockType)arg4 rightTitle:(id)arg5 rightHandler:(CDUnknownBlockType)arg6 leftBarStyle:(unsigned long long)arg7 leftBarHandler:(CDUnknownBlockType)arg8 rightBarStyle:(unsigned long long)arg9 rightBarHandler:(CDUnknownBlockType)arg10 title:(id)arg11 subTitle:(id)arg12 titleAlignment:(long long)arg13 complete:(CDUnknownBlockType)arg14 lightMode:(_Bool)arg15;
+ (id)ShowPanelWithCustomView:(id)arg1 customViewHeight:(double)arg2 leftTitle:(id)arg3 leftHandler:(CDUnknownBlockType)arg4 rightTitle:(id)arg5 rightHandler:(CDUnknownBlockType)arg6 leftBarStyle:(unsigned long long)arg7 leftBarHandler:(CDUnknownBlockType)arg8 rightBarStyle:(unsigned long long)arg9 rightBarHandler:(CDUnknownBlockType)arg10 title:(id)arg11 subTitle:(id)arg12 titleAlignment:(long long)arg13 complete:(CDUnknownBlockType)arg14;
- (void).cxx_destruct;
@property(retain) WCPayCss *css; // @synthesize css=_css;
@property(nonatomic) double navigationY; // @synthesize navigationY=_navigationY;
@property(retain) UILabel *titleDescLabel; // @synthesize titleDescLabel=_titleDescLabel;
@property(retain) UILabel *titleMainLabel; // @synthesize titleMainLabel=_titleMainLabel;
@property long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain) NSString *title; // @synthesize title=_title;
@property unsigned long long rightBarStyle; // @synthesize rightBarStyle=_rightBarStyle;
@property unsigned long long leftBarStyle; // @synthesize leftBarStyle=_leftBarStyle;
@property(copy) CDUnknownBlockType rightBarHandler; // @synthesize rightBarHandler=_rightBarHandler;
@property(copy) CDUnknownBlockType leftBarHandler; // @synthesize leftBarHandler=_leftBarHandler;
@property(copy) CDUnknownBlockType rightHandler; // @synthesize rightHandler=_rightHandler;
@property(copy) CDUnknownBlockType leftHandler; // @synthesize leftHandler=_leftHandler;
@property(retain) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(retain) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property double customViewHeight; // @synthesize customViewHeight=_customViewHeight;
@property(retain) UIView *customView; // @synthesize customView=_customView;
@property(retain) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain) UIView *bottomButtonInternalView; // @synthesize bottomButtonInternalView=_bottomButtonInternalView;
@property(retain) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain) UIView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(retain) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) UIButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain) MMUIButton *leftBarButton; // @synthesize leftBarButton=_leftBarButton;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)clearAllHandler;
- (void)onClickLeftBarButton;
- (void)onSpaceTap;
- (void)onClickRightBarButton;
- (void)onClickRightButton;
- (void)onClickLeftButton;
- (void)updaterightButton;
- (void)updateBottomButtonInternal;
- (void)updateLeftButton;
- (void)updateFooterView;
- (void)updateCustomContainerView;
- (void)updateHeaderView;
- (void)updateRightBarButton;
- (void)updateLeftBarButton;
- (void)updateBarButton;
- (void)adjustTitle;
- (void)updateTitleDesc;
- (void)updateTitleMain;
- (void)updateTitles;
- (void)updateView;
- (void)layoutSubviews;

@end


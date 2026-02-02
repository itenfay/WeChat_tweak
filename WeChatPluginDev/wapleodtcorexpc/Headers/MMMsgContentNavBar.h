//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMsgCommonTipsView, MMMsgContentTipsItem, MMMsgHeaderTipsView, MMMsgTipsExpandView, MMUIButton, NSMutableArray, NSString, UIButton, UIImageView;
@protocol MMMsgContentNavBarDelegate;

@interface MMMsgContentNavBar : UIView
{
    _Bool _hideBottomLine;
    _Bool _isShowingTipsBar;
    _Bool _isShowingExpandView;
    _Bool _tipsBarVisible;
    id <MMMsgContentNavBarDelegate> _delegate;
    double _navigationBarHeight;
    MMMsgContentTipsItem *_currentItem;
    NSMutableArray *_penddingItems;
    UIView *_navBarTitleView;
    UIView *_separatorView;
    MMMsgCommonTipsView *_commonTipsView;
    MMMsgHeaderTipsView *_bizTipsView;
    MMUIButton *_headerCustomButton;
    UIImageView *_gradientMaskView;
    UIView *_blurBgView;
    UIButton *_bgMaskView;
    UIView *_expandContainerView;
    MMMsgTipsExpandView *_expandCustomView;
    UIView *_expandBottomView;
    MMUIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *expandBottomView; // @synthesize expandBottomView=_expandBottomView;
@property(retain, nonatomic) MMMsgTipsExpandView *expandCustomView; // @synthesize expandCustomView=_expandCustomView;
@property(retain, nonatomic) UIView *expandContainerView; // @synthesize expandContainerView=_expandContainerView;
@property(retain, nonatomic) UIButton *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(retain, nonatomic) UIView *blurBgView; // @synthesize blurBgView=_blurBgView;
@property(retain, nonatomic) UIImageView *gradientMaskView; // @synthesize gradientMaskView=_gradientMaskView;
@property(retain, nonatomic) MMUIButton *headerCustomButton; // @synthesize headerCustomButton=_headerCustomButton;
@property(retain, nonatomic) MMMsgHeaderTipsView *bizTipsView; // @synthesize bizTipsView=_bizTipsView;
@property(retain, nonatomic) MMMsgCommonTipsView *commonTipsView; // @synthesize commonTipsView=_commonTipsView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *navBarTitleView; // @synthesize navBarTitleView=_navBarTitleView;
@property(nonatomic) _Bool tipsBarVisible; // @synthesize tipsBarVisible=_tipsBarVisible;
@property(retain, nonatomic) NSMutableArray *penddingItems; // @synthesize penddingItems=_penddingItems;
@property(retain, nonatomic) MMMsgContentTipsItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) _Bool isShowingExpandView; // @synthesize isShowingExpandView=_isShowingExpandView;
@property(nonatomic) _Bool isShowingTipsBar; // @synthesize isShowingTipsBar=_isShowingTipsBar;
@property(nonatomic) _Bool hideBottomLine; // @synthesize hideBottomLine=_hideBottomLine;
@property(nonatomic) __weak id <MMMsgContentNavBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hideExpandViewOfFirstTipsViewAnimated:(_Bool)arg1;
- (void)removeCommonTipsView;
- (void)onTipsViewHeightChanged:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onTipsViewHideAtTimeout:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsBarClick;
- (void)onHideExpandView:(_Bool)arg1;
- (void)onExpandViewSizeChange:(struct CGSize)arg1 animateAction:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)onMaskBgClick;
- (void)onCloseExpandButtonClick;
- (double)expandFooterHeight;
- (double)totalExpandHeight;
- (void)updateTipsBarCustomButton;
- (void)updateBackgroundCornerMask;
- (void)updateExpandContentView;
- (void)expandNavBarHeight:(double)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)expandNavBarHeight:(double)arg1 animated:(_Bool)arg2 showBgMask:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)initBizTipsBar;
- (void)initUI;
- (void)layoutSubviews;
- (void)hideAllWithAnimated:(_Bool)arg1;
- (void)hideTipsBar:(long long)arg1 animated:(_Bool)arg2;
- (void)hideExpandViewWithAnimated:(_Bool)arg1;
- (void)showExpandView:(id)arg1 animated:(_Bool)arg2;
- (void)hideCommonTips;
@property(readonly, nonatomic) double currentTipsBarHeight;
- (void)showPenddingTipsBar;
- (void)hideTipsBarWithBizType:(long long)arg1 animated:(_Bool)arg2;
- (void)showTipsBarWithItem:(id)arg1;
- (void)setNavBarHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 navigationBarHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


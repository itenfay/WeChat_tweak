//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, WCFinderInteractivePanelConfigParamsModel, WCFinderPanelHotCommentView, WCFinderPanelJumpInfoCarouselView, WCFinderPanelRingToneGuideView;
@protocol WCFinderInteractiveCarouselViewDataSource, WCFinderInteractiveCarouselViewDelegate;

@interface WCFinderInteractiveCarouselView : UIView
{
    id <WCFinderInteractiveCarouselViewDelegate> _delegate;
    id <WCFinderInteractiveCarouselViewDataSource> _dataSource;
    WCFinderPanelJumpInfoCarouselView *_jumpInfoCarouselView;
    WCFinderInteractivePanelConfigParamsModel *_paramsModel;
    WCFinderPanelRingToneGuideView *_ringToneGuideView;
    WCFinderPanelHotCommentView *_hotCommentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPanelHotCommentView *hotCommentView; // @synthesize hotCommentView=_hotCommentView;
@property(retain, nonatomic) WCFinderPanelRingToneGuideView *ringToneGuideView; // @synthesize ringToneGuideView=_ringToneGuideView;
@property(nonatomic) __weak WCFinderInteractivePanelConfigParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(retain, nonatomic) WCFinderPanelJumpInfoCarouselView *jumpInfoCarouselView; // @synthesize jumpInfoCarouselView=_jumpInfoCarouselView;
@property(nonatomic) __weak id <WCFinderInteractiveCarouselViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WCFinderInteractiveCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onJumpCarouselViewClickButtonAction:(id)arg1 style:(id)arg2;
- (void)onJumpCarouselViewClickBannerAction:(id)arg1 style:(id)arg2;
- (void)onClickPanelHotComment:(id)arg1;
- (void)onClickSetRingToneButton;
- (void)setCarouselView:(id)arg1 hidden:(_Bool)arg2 businessType:(int)arg3;
- (void)setCarouselView:(id)arg1 hidden:(_Bool)arg2;
- (double)_layoutHotCommentViewFromOffset:(double)arg1;
- (double)_layoutJumpCarouselViewFromOffset:(double)arg1;
- (double)_layoutRingToneGuideViewFromOffset:(double)arg1;
- (unsigned long long)getCarouselViewShowType;
- (_Bool)showCarouselViewWithParams:(id)arg1;
- (_Bool)clientCanShowRingtoneGuide;
- (_Bool)canShowRingToneGuide;
- (_Bool)canShowCarousel;
- (_Bool)canShowJumpCarouselGuide;
- (_Bool)enableShowTargetCarouselView:(unsigned long long)arg1 logicEnable:(_Bool)arg2 checkCarouselIndex:(_Bool)arg3;
- (_Bool)canShowHotComment;
- (_Bool)isShowingJumpCarousel;
- (id)showingHotComment;
- (_Bool)isShowingHotComment;
- (void)layoutSubviews;
- (void)resetUIViewState;
- (void)setCurCarouselType:(unsigned long long)arg1;
- (unsigned long long)curCarouselType;
- (unsigned long long)carouselIndex;
- (id)contentVM;
- (unsigned long long)toolBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


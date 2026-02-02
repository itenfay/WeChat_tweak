//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, RichTextView, UIButton, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderNoMoreView;
@protocol WCFinderStreamFooterViewActionDelegate;

@interface WCFinderStreamFooterView : UICollectionReusableView
{
    _Bool _displayCircleLoadingView;
    double _triggerHeight;
    NSString *_normalText;
    id <WCFinderStreamFooterViewActionDelegate> _delegate;
    unsigned long long _state;
    UILabel *_label;
    WCFinderNoMoreView *_noMoreView;
    UITapGestureRecognizer *_singleGestureRecognizer;
    RichTextView *_stateTipsLabel;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_recEndViewLabel;
    UIButton *_recEndViewBtn;
}

+ (double)getFooterViewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *recEndViewBtn; // @synthesize recEndViewBtn=_recEndViewBtn;
@property(retain, nonatomic) UILabel *recEndViewLabel; // @synthesize recEndViewLabel=_recEndViewLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) RichTextView *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) UITapGestureRecognizer *singleGestureRecognizer; // @synthesize singleGestureRecognizer=_singleGestureRecognizer;
@property(retain, nonatomic) WCFinderNoMoreView *noMoreView; // @synthesize noMoreView=_noMoreView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) _Bool displayCircleLoadingView; // @synthesize displayCircleLoadingView=_displayCircleLoadingView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderStreamFooterViewActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
- (void)prepareForReuse;
- (void)makeNoMoreViewCenter;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setLogoIconOnly:(id)arg1 size:(struct CGSize)arg2;
- (void)setNoMoreLogoIcon:(id)arg1 size:(struct CGSize)arg2;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)onForceSetTipsTop:(double)arg1;
- (void)clickNoMoreDataNavToRecBtn;
- (void)onClickRefresh;
- (unsigned long long)flowViewState;
- (void)updateWithConfig:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfNoMoreDataWithConfig:(id)arg1;
- (void)onStateOfNoMoreDataWithTips:(id)arg1;
- (void)onStateOfNoMoreData:(id)arg1 enableClick:(_Bool)arg2;
- (void)onStateOfNoMoreWithBottomTips:(id)arg1;
- (void)onStateOfBlank;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfEmpty:(id)arg1;
- (void)hiddenLoadingView;
- (void)displayLoadingView;
- (void)onStateOfLoading;
- (void)setTipsColor:(id)arg1;
- (void)onStateOfNormal;
- (void)onResumeOfLoading;
- (_Bool)isLoading;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onLoadingStateChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderFlowTopTipsViewDelegate;

@interface WCFinderFlowTopTipsView : UICollectionViewCell
{
    _Bool _onlyVisbleWhenFullyDragged;
    id <WCFinderFlowTopTipsViewDelegate> _delegate;
    double _triggerHeight;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_tipsLabel;
    unsigned long long _state;
    double _pulldownHeight;
    NSString *_normalTips;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *normalTips; // @synthesize normalTips=_normalTips;
@property(nonatomic) double pulldownHeight; // @synthesize pulldownHeight=_pulldownHeight;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool onlyVisbleWhenFullyDragged; // @synthesize onlyVisbleWhenFullyDragged=_onlyVisbleWhenFullyDragged;
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
@property(nonatomic) __weak id <WCFinderFlowTopTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderFlowTopTipsViewDataSourceDidFinishedLoading:(id)arg1;
- (void)finderFlowTopTipsViewDidEndDragging:(id)arg1;
- (void)finderFlowTopTipsViewDidScroll:(id)arg1;
- (void)setTipsColor:(id)arg1;
- (void)onStateOfNone;
- (void)onStateOfNoMore:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onResumeOfLoading;
- (_Bool)isLoadingNow;
- (void)setLoadingTop:(double)arg1;
- (void)configNormalTips:(id)arg1;
- (void)setLoadingImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


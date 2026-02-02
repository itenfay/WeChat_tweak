//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel, WCFinderAnimationLoadingView;
@protocol WCFinderStreamHeaderViewDelegate;

@interface WCFinderStreamHeaderView : UICollectionReusableView
{
    id <WCFinderStreamHeaderViewDelegate> _delegate;
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
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
@property(nonatomic) __weak id <WCFinderStreamHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)streamRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)streamRefreshScrollViewDidEndDragging:(id)arg1;
- (void)streamRefreshScrollViewDidScroll:(id)arg1;
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
- (id)initWithFrame:(struct CGRect)arg1;

@end


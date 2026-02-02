//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel, WCFinderAnimationLoadingView;

@interface WCFinderCollectionHalfHeaderRefreshView
{
    double _triggerHeight;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_tipsLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double triggerHeight; // @synthesize triggerHeight=_triggerHeight;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfNoMore:(id)arg1;
- (void)onStateOfError:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal:(id)arg1;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
- (id)initWithFrame:(struct CGRect)arg1;

@end


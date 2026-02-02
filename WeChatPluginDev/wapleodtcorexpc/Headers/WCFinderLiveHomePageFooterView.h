//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class WCFinderAnimationLoadingView;
@protocol WCFinderLiveHomePageFooterViewActionDelegate;

@interface WCFinderLiveHomePageFooterView : UICollectionReusableView
{
    double _triggerWidth;
    id <WCFinderLiveHomePageFooterViewActionDelegate> _delegate;
    unsigned long long _state;
    WCFinderAnimationLoadingView *_loadingView;
    double _pulldownWidth;
}

+ (double)footerWidth;
+ (id)footerIdentifier;
- (void).cxx_destruct;
@property(nonatomic) double pulldownWidth; // @synthesize pulldownWidth=_pulldownWidth;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderLiveHomePageFooterViewActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double triggerWidth; // @synthesize triggerWidth=_triggerWidth;
- (void)didEndDragging:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)onResumeOfLoading;
- (_Bool)isLoadingNow;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)setLoadingImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


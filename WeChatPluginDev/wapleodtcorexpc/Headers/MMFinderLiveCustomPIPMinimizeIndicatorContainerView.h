//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePIPMinimizeIndicatorView, MMLiveTaskId;

@interface MMFinderLiveCustomPIPMinimizeIndicatorContainerView : UIView
{
    MMLiveTaskId *_liveTaskId;
    MMFinderLivePIPMinimizeIndicatorView *_ktvIndicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePIPMinimizeIndicatorView *ktvIndicatorView; // @synthesize ktvIndicatorView=_ktvIndicatorView;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)hideKTVIndicator;
- (void)removeAllSubViews;
- (void)hideIndicatorsExcept:(id)arg1;
- (void)forceRefreshUI;
- (void)hideIndicators;
- (void)displayKTVIndicator;
- (void)createKTVIndicatorView;
- (void)layoutKTVIndicatorView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configBasicAttributes;
- (id)initWithTaskId:(id)arg1;

@end


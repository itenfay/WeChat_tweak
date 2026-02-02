//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMRollableLabelView, MMRollableLabelViewConfig;

@interface WCFinderLiveBannerSearchCell
{
    MMRollableLabelView *_masterTitleTextView;
    MMRollableLabelView *_subTitleTextView;
    MMRollableLabelViewConfig *_masterTitleConfig;
    MMRollableLabelViewConfig *_subTitleConfig;
}

+ (struct CGSize)bannerSizeByInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMRollableLabelViewConfig *subTitleConfig; // @synthesize subTitleConfig=_subTitleConfig;
@property(retain, nonatomic) MMRollableLabelViewConfig *masterTitleConfig; // @synthesize masterTitleConfig=_masterTitleConfig;
@property(retain, nonatomic) MMRollableLabelView *subTitleTextView; // @synthesize subTitleTextView=_subTitleTextView;
@property(retain, nonatomic) MMRollableLabelView *masterTitleTextView; // @synthesize masterTitleTextView=_masterTitleTextView;
- (void)forceStopPagAnimation;
- (_Bool)updateCurrentSubTitle;
- (_Bool)showDeleteAnimationWithCompleteAction:(CDUnknownBlockType)arg1;
- (double)maxSubTitleWidth;
- (double)maxMasterTitleWidth;
- (double)getRollingSpeedPerSecond:(double)arg1 maxWidth:(double)arg2;
- (void)setBannerVM:(id)arg1;
- (void)setupUIIfNeeded;
- (void)delayStartScrollAnimation;
- (void)stopScrollAnimation;
- (void)startScrollAnimation:(_Bool)arg1;
- (void)prepareForReuse;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMWebImageView, NSString, UIImageView;

@interface BrandFinderLiveCardView
{
    MMUILabel *_categoryLabel;
    MMWebImageView *_coverImageView;
    UIImageView *_backgroundImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) MMUILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (double)titleMaxWidth;
- (void)markDirtyElements:(id)arg1;
- (void)updateBackgroundImageWithLiveStatus:(id)arg1;
- (void)updateLiveStatusView;
- (void)layoutSubviews;
- (void)onLoadCoverImage:(id)arg1;
- (void)loadData;
- (void)configureLayout;
- (void)updateRecommendReason:(id)arg1;
- (void)updateLiveStatus:(_Bool)arg1 statusWording:(id)arg2;
- (void)updateViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


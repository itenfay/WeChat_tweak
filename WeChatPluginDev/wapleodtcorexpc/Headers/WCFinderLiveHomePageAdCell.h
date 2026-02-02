//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, WCFinderLiveGenericFeedVM;

@interface WCFinderLiveHomePageAdCell
{
    MMWebImageView *_coverLeftImageView;
    MMWebImageView *_coverRightImageView;
    WCFinderLiveGenericFeedVM *_feedVM;
}

+ (id)cellIdentifier;
+ (double)cellWidthWithContainerModel:(id)arg1 inWidth:(double)arg2;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) MMWebImageView *coverRightImageView; // @synthesize coverRightImageView=_coverRightImageView;
@property(retain, nonatomic) MMWebImageView *coverLeftImageView; // @synthesize coverLeftImageView=_coverLeftImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)updateWithFeedVM:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)initViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUILabel, NSString, UIView, WCFinderFeedImageCDNView, WCFinderHeadImageView, WCFinderLiveFeedGenericCoverReportInfo, WCFinderLiveGenericFeedVM;

@interface WCFinderLiveHomePageFollowCell
{
    WCFinderFeedImageCDNView *_liveImageView;
    UIView *_containerView;
    WCFinderHeadImageView *_headImageView;
    MMUILabel *_nickNameLabel;
    UIView *_headImageBorderView;
    CAGradientLayer *_mainColorGradientLayer;
    CAGradientLayer *_shadowGradientLayer;
    WCFinderLiveGenericFeedVM *_feedVM;
    WCFinderLiveFeedGenericCoverReportInfo *_coverReportInfo;
}

+ (double)cellWidth;
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo; // @synthesize coverReportInfo=_coverReportInfo;
@property(retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM; // @synthesize feedVM=_feedVM;
@property(retain, nonatomic) CAGradientLayer *shadowGradientLayer; // @synthesize shadowGradientLayer=_shadowGradientLayer;
@property(retain, nonatomic) CAGradientLayer *mainColorGradientLayer; // @synthesize mainColorGradientLayer=_mainColorGradientLayer;
@property(retain, nonatomic) UIView *headImageBorderView; // @synthesize headImageBorderView=_headImageBorderView;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderFeedImageCDNView *liveImageView; // @synthesize liveImageView=_liveImageView;
- (void)resetCoverReportInfo;
- (id)getCoverReportInfo;
- (void)finderFeedImageLoadFinish;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)updateWithFeedVM:(id)arg1;
- (void)prepareForReuse;
- (void)updateStyle;
- (void)initViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


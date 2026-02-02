//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, UILabel, WCFinderFeedImageCDNView, WCFinderStaticCoverInfoView;

@interface WCFinderLandScapeCoverInfoView
{
    CAGradientLayer *_gradientLayer;
    WCFinderFeedImageCDNView *_coverView;
    UILabel *_timeLabel;
    WCFinderStaticCoverInfoView *_infoView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStaticCoverInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void)layoutSubviews;
- (void)updateWithDataItem:(id)arg1;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

